!#includedir "/opt/bwhpc/common/mpi/openmpi/4.1.0-intel-19.1/include/"
!#includedir "/opt/openmpi/openmpi_4.0.1_ifort_19.0.1/include/"
!#includedir "/opt/hlrs/non-spack/mpi/openmpi/4.0.5-gcc-9.2.0/include/"
!#includedir "/opt/openmpi/openmpi_4.0.1_ifort_19.0.1/include/"
!#includedir "/opt/hpe/hpc/mpt/mpt-2.23/bin/include/"
!#includedir "/opt/hlrs/non-spack/compiler/intel/19.1.0.166/compilers_and_libraries_2020.0.166/linux/mpi/intel64/include/"
#includedir "/usr/lib/x86_64-linux-gnu/openmpi/include/"

#include <mpi.h>

INTEGER iprocx, nprocx=atoi(COMMANDLINE(1)), iprocy, nprocy=atoi(COMMANDLINE(2))
!INTEGER iprocx, nprocx=1, iprocy, nprocy=1
INTEGER prevx=-99, nextx=-99, prevy=-99, nexty=-99
INTEGER iproc, nproc, nreqs, nsreqs
ARRAY(0..3) OF POINTER TO ARRAY(*,*) OF REAL unpckbuf 
INTEGER szbuf


C SECTION
  MPI_Status status[4];
  MPI_Request request[4];
  MPI_Request srequest[4];
  MPI_Comm  cart_comm, cart_comm_x;
  int nproc, iproc, nprocx, nprocy, iprocx, iprocy, idim[2];
  int prevx, nextx, prevy, nexty;
END C SECTION

SUBROUTINE init_mpi()
    <*
       MPI_Init(NULL,NULL);
       MPI_Comm_size(MPI_COMM_WORLD, &nproc); nproc_=nproc;
       MPI_Comm_rank(MPI_COMM_WORLD, &iproc); iproc_=iproc+1;
       int ndims=2, reorder=1, ierr;
       int dim_size[2], periods[2];
       dim_size[0] = nprocx_; nprocx=nprocx_;
       dim_size[1] = nprocy_; nprocy=nprocy_;
       periods[0] = 1;
       periods[1] = 1; 
       ierr =  MPI_Cart_create(MPI_COMM_WORLD,ndims,dim_size,
             periods,reorder,&cart_comm);
       MPI_Cart_coords(cart_comm, iproc, ndims, idim);
       iprocx_=idim[0]+1; iprocy_=idim[1]+1;
       iprocx=idim[0];  iprocy=idim[1];
       MPI_Cart_shift(cart_comm, 0, 1, &prevx, &nextx); prevx_=prevx+1; nextx_=nextx+1;
       MPI_Cart_shift(cart_comm, 1, 1, &prevy, &nexty); prevy_=prevy+1; nexty_=nexty+1;
       // Create a communicator with all processes that hold the same y-slab
       // this is useful for collecting x-averaged statistics, for instance
       MPI_Comm_split(cart_comm, iprocy_, iproc_, &cart_comm_x);
    *>
END init_mpi 

init_mpi()
has_terminal == iprocx=nprocx AND iprocy=nprocy
INTEGER FUNCTION nxl(INTEGER n)=FLOOR[(iprocx-1)*n/nprocx]+1
INTEGER FUNCTION nxh(INTEGER n)=FLOOR[iprocx*n/nprocx]
INTEGER FUNCTION nyl(INTEGER n)=FLOOR[(iprocy-1)*n/nprocy]+1
INTEGER FUNCTION nyh(INTEGER n)=FLOOR[iprocy*n/nprocy]
szbuf = MAX(nxh(nx)-nxl(nx)+3,nyh(ny)-nyl(ny)+3)
ARRAY(0..3) OF ARRAY(0..szbuf*(nz+1)*4) OF REAL recvbuf
ARRAY(0..3) OF ARRAY(0..szbuf*(nz+1)*4) OF REAL sendbuf


SUBROUTINE MPI_Send(POINTER TO ARRAY(*,*) OF REAL x; INTEGER iP, tag, ireq)
        DO 
           sendbuf(ireq)((i-x.LO1)*(x.HI2-x.LO2+1)+j-x.LO2)=x(i,j) 
        FOR ALL i,j 
     <*
        ssize_t L1_; 
        ssize_t L2_; 
        L1_= x_h-x_l+1; L2_= x__h-x__l+1;
        MPI_Isend((double *)(ireq_*((ssize_t)sizeof(double)*(szbuf_*(nz_+1)*4+1))+sendbuf_), L1_*L2_, MPI_DOUBLE, iP_-1, tag_,
              cart_comm, &srequest[ireq_]);
     *>
END MPI_Send


SUBROUTINE MPI_Recv(POINTER TO ARRAY(*,*) OF REAL x; INTEGER iP, tag, ireq)
     <*
        ssize_t L1_;
        ssize_t L2_;
        L1_= x_h-x_l+1; L2_= x__h-x__l+1;
        MPI_Irecv((double *)(ireq_*((ssize_t)sizeof(double)*(szbuf_*(nz_+1)*4+1))+recvbuf_), L1_*L2_, MPI_DOUBLE, iP_-1, tag_,
              cart_comm, &request[ireq_]);
     *>
     unpckbuf(ireq)=x
END MPI_Recv

SUBROUTINE mpi_barrier()
       C SECTION
           MPI_Barrier(cart_comm);
       END C SECTION
END mpi_barrier

#ifdef mpiverbose
IF has_terminal THEN
WRITE "      ___           ___           ___           ___           ___           ___           ___       ___           ___      "
WRITE "     /\  \         /\__\         /\  \         /\__\         /\__\         /\  \         /\__\     /\  \         /\  \     "
WRITE "    /::\  \       /:/  /        /::\  \       /::|  |       /::|  |       /::\  \       /:/  /    /::\  \       /::\  \    "
WRITE "   /:/\:\  \     /:/__/        /:/\:\  \     /:|:|  |      /:|:|  |      /:/\:\  \     /:/  /    /:/\:\  \     /:/\:\  \   "
WRITE "  /:/  \:\  \   /::\  \ ___   /::\~\:\  \   /:/|:|  |__   /:/|:|  |__   /::\~\:\  \   /:/  /    /::\~\:\  \   /:/  \:\__\  "
WRITE " /:/__/ \:\__\ /:/\:\  /\__\ /:/\:\ \:\__\ /:/ |:| /\__\ /:/ |:| /\__\ /:/\:\ \:\__\ /:/__/    /:/\:\ \:\__\ /:/__/ \:|__| "
WRITE " \:\  \  \/__/ \/__\:\/:/  / \/__\:\/:/  / \/__|:|/:/  / \/__|:|/:/  / \:\~\:\ \/__/ \:\  \    \/__\:\ \/__/ \:\  \ /:/  / "
WRITE "  \:\  \            \::/  /       \::/  /      |:/:/  /      |:/:/  /   \:\ \:\__\    \:\  \        \:\__\    \:\  /:/  /  "
WRITE "   \:\  \           /:/  /        /:/  /       |::/  /       |::/  /     \:\ \/__/     \:\  \        \/__/     \:\/:/  /   "
WRITE "    \:\__\         /:/  /        /:/  /        /:/  /        /:/  /       \:\__\        \:\__\                  \::/__/    "
WRITE "     \/__/         \/__/         \/__/         \/__/         \/__/         \/__/         \/__/                   ~~        "
WRITE ""
WRITE ""
WRITE "MPI initialised! Recap of the process grid, some MPI infos..."
END IF
mpi_barrier()
LOOP FOR iP=1 TO nproc
   IF iP=iproc THEN
     WRITE BY NAME iproc, nproc, iprocx, nprocx, prevx, nextx, iprocy, nprocy, prevy, nexty
   END IF
   mpi_barrier()
REPEAT
IF has_terminal THEN
   WRITE ""
   WRITE "Echo of the input parameters"
   WRITE BY NAME nx,ny,nz,it
   WRITE BY NAME Lx, Ly, deltat, nu
   WRITE BY NAME headx, heady
   WRITE ""
END IF

#endif

SUBROUTINE pbc(ARRAY(*,*,*) OF REAL f^) FOLLOWS
SUBROUTINE pbc(ARRAY(*,*,*) OF REAL u^, v^; INTEGER dir) FOLLOWS
SUBROUTINE pbcp(ARRAY(*,*,*) OF REAL u^,v^; INTEGER parity) FOLLOWS
SUBROUTINE pbcwait() FOLLOWS
