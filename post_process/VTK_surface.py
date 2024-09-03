import numpy as np
import sys
sys.path.insert(0, './plot_scripts')
from dof_utils import X_comp, X_dot_comp

print("ind_min:")
n_min = int(input())
print("ind_max:")
n_max = int(input())

# Import parametri fabric

file_name = '/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_parameters/par_int_arr.csv'
par_int_arr = np.genfromtxt(file_name, delimiter=',', dtype='int')
nx        = par_int_arr[0]
nz        = par_int_arr[1]
n_C       = par_int_arr[2]
n_B       = par_int_arr[3]
n_T       = par_int_arr[4]
n_G       = par_int_arr[5]
n_N       = par_int_arr[6]
n_N_dof   = par_int_arr[7]
n_T_dof   = par_int_arr[8]
n_q_tilde = par_int_arr[9]

file_name = '/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_parameters/par_real_arr.csv'
par_real_arr = np.genfromtxt(file_name, delimiter=',')
l_b   = par_real_arr[0]
l_per = par_real_arr[1]
h     = par_real_arr[2]

n_P      = 6*(nx+2)*(nz+2) + 2*(nx+1)*(nz+1)
n_P_real = 6*nx*nz + 2*(nx-1)*(nz-1)

file_name = "/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/P_mat.csv"
P_mat = np.genfromtxt(file_name, delimiter=',', dtype='int')

file_name = "/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/P_mat_per.csv"
P_mat_per = np.genfromtxt(file_name, delimiter=',', dtype='int')

file_name = "/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/X_0.csv"
X_0 = np.genfromtxt(file_name, delimiter=',')

file_name = "/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/ghost_nodes.csv"
ghost_nodes = np.genfromtxt(file_name, delimiter=',', dtype='int')

for i in range(n_max-n_min+1):
    print(i)
    
    file_name = "post_process/tensegrity_surface_out/tensegrity_surface_"+str(i+1)+".vtk"
    ten_sur_file = open(file_name, "x")

    file_name = '/media/lorenzo/Hard Disk 2/output_codice_tesi/output/tensegrity_output/time_serie/q_tilde_' + str(i+1) + '.csv'
    q_tilde = np.genfromtxt(file_name, delimiter=',')

    X     = X_comp(q_tilde, X_0, l_b, n_N, n_G, ghost_nodes, nx, nz, l_per)
    X_dot = X_dot_comp(q_tilde, l_b, n_N, n_G, ghost_nodes)

    ten_sur_file.write("# vtk DataFile Version 2.0\n")
    ten_sur_file.write("tensegrity_surface_"+str(i+1)+".vtk\n")
    ten_sur_file.write("ASCII\n")

    ten_sur_file.write("DATASET POLYDATA\n")
    ten_sur_file.write("POINTS "+str(n_N)+" float\n")
    for j in range(n_N):
        ten_sur_file.write(str(X[3*j+2]) + " " + str(X[3*j]) + " " + str(X[3*j+1]) + "\n")
    
    ten_sur_file.write("POLYGONS " + str(n_P_real) + " " + str(4*n_P_real) + "\n")
    for j in range(n_P_real):
        ten_sur_file.write("3 " + str(P_mat[j,0]-1) + " " + str(P_mat[j,1]-1) + " " + str(P_mat[j,2]-1) +"\n")
        
    ten_sur_file.write("POINT_DATA " + str(n_N) + "\n")
    ten_sur_file.write("SCALARS z_velocity float 1\n")
    ten_sur_file.write("LOOKUP_TABLE z_velocities\n")
    for j in range(n_N):
        ten_sur_file.write(str(X_dot[3*j+1]1) + " \n")

    ten_sur_file.close()
