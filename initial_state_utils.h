! Inclusioni

INCLUDE math_utils.h
INCLUDE rbmat.cpl

! Definizione funzioni

SUBROUTINE X_0_comp(ARRAY(*) OF REAL X_0^; REAL h; REAL r; REAL alpha_1; REAL l_per; INTEGER nx; INTEGER nz; INTEGER n_N; INTEGER n_G; INTEGER n_N_dof; ARRAY(n_G,3) OF INTEGER ghost_nodes)

    REAL CONSTANT PI
    PI = 3.14159265358979323846

    ARRAY(2, 2) OF REAL T_1
    ARRAY(2, 2) OF REAL T_2

    T_1(1, 1) = COS(alpha_1)
    T_1(1, 2) = -SIN(alpha_1)
    T_1(2, 1) = SIN(alpha_1)
    T_1(2, 2) = COS(alpha_1)

    T_2(1, 1) = COS(PI/4+PI/2)
    T_2(1, 2) = -SIN(PI/4+PI/2)
    T_2(2, 1) = SIN(PI/4+PI/2)
    T_2(2, 2) = COS(PI/4+PI/2)

    ARRAY(2, 4) OF REAL vert_low_2D
    ARRAY(2, 4) OF REAL vert_low_2D_temp

    vert_low_2D(1, 1..4) = (SQRT(2)*r, 0, 0, SQRT(2)*r)
    vert_low_2D(2, 1..4) = (SQRT(2)*r, SQRT(2)*r, 0, 0)

    vert_low_2D_temp = vert_low_2D
    MatMult(T_1, vert_low_2D_temp, vert_low_2D)

    ARRAY(2,4) OF REAL cell_center_pos
    cell_center_pos(1, 1..4) = (SQRT(2)/2*(COS(alpha_1)-SIN(alpha_1))*r, SQRT(2)/2*(COS(alpha_1)-SIN(alpha_1))*r, SQRT(2)/2*(COS(alpha_1)-SIN(alpha_1))*r, SQRT(2)/2*(COS(alpha_1)-SIN(alpha_1))*r)
    cell_center_pos(2, 1..4) = (SQRT(2)/2*(SIN(alpha_1)+COS(alpha_1))*r, SQRT(2)/2*(SIN(alpha_1)+COS(alpha_1))*r, SQRT(2)/2*(SIN(alpha_1)+COS(alpha_1))*r, SQRT(2)/2*(SIN(alpha_1)+COS(alpha_1))*r)
    MatDiff(vert_low_2D, cell_center_pos, vert_low_2D)

    ARRAY(2, 4) OF REAL vert_up_2D
    MatMult(T_2, vert_low_2D, vert_up_2D)

    ARRAY(3, 4) OF REAL vert_low
    vert_low(1..2,1..4) = vert_low_2D
    vert_low(3,1..4) = (0, 0, 0, 0)

    ARRAY(3, 4) OF REAL vert_up
    vert_up(1..2,1..4) = vert_up_2D
    vert_up(3,1..4) = (h, h, h, h)

    ARRAY(3) OF REAL dx_0
    dx_0 = (vert_up(1,1), 0, 0)

    ARRAY(3) OF REAL dz_0
    dz_0 = (0, vert_up(2,2), 0)

    LOOP FOR i = 1 TO 3 AND j = 1 TO 4
        vert_low(i,j) = vert_low(i,j) - dx_0(i) - dz_0(i)
        vert_up(i,j)  = vert_up(i,j) - dx_0(i) - dz_0(i)
    REPEAT

    n_N_ng = n_N - n_G

    ARRAY(FLOOR(3*n_N_ng/2)) OF REAL X_0_sup
    ARRAY(FLOOR(3*n_N_ng/2)) OF REAL X_0_inf

    ARRAY(3,4) OF REAL vert_low_i
    ARRAY(3,4) OF REAL vert_up_i

    ARRAY(3) OF REAL dx
    ARRAY(3) OF REAL dz
    LOOP FOR i = 1 TO nx AND j = 1 TO nz
        dx = ((i-1)*l_per, 0, 0)
        dz = (0, (j-1)*l_per, 0)
        LOOP FOR k = 1 TO 3 AND m = 1 TO  4
            vert_low_i(k,m) = vert_low(k,m) + dx(k) + dz(k)
            vert_up_i(k,m)  = vert_up(k,m) + dx(k) + dz(k)
        REPEAT
        LOOP FOR k = 1 TO 4
            X_0_sup(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)))   = vert_up_i(1,k)
            X_0_sup(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)+1)) = vert_up_i(2,k)
            X_0_sup(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)+2)) = vert_up_i(3,k)
            X_0_inf(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)))   = vert_low_i(1,k)
            X_0_inf(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)+1)) = vert_low_i(2,k)
            X_0_inf(FLOOR(3*4*(i+(j-1)*nx)-(3*4-1)+3*(k-1)+2)) = vert_low_i(3,k)
        REPEAT
    REPEAT

    ARRAY(3) OF REAL Dx
    ARRAY(3) OF REAL Dz 

    Dx = (nx*l_per, 0, 0)
    Dz = (0, nz*l_per, 0)

    ARRAY(3*n_G) OF REAL X_0_g
    ARRAY(3) OF REAL X_g

    LOOP FOR i = 1 TO n_G
        parent_ind = ghost_nodes(i, 2)
        per_dir    = ghost_nodes(i, 3)

        IF per_dir = 1 THEN
            X_g(1) = X_0_sup(FLOOR(3*parent_ind-2)) - Dz(1)
            X_g(2) = X_0_sup(FLOOR(3*parent_ind-1)) - Dz(2)
            X_g(3) = X_0_sup(FLOOR(3*parent_ind)) - Dz(3)
        ELSE IF per_dir = 2 THEN
            X_g(1) = X_0_sup(FLOOR(3*parent_ind-2)) - Dx(1)
            X_g(2) = X_0_sup(FLOOR(3*parent_ind-1)) - Dx(2)
            X_g(3) = X_0_sup(FLOOR(3*parent_ind)) - Dx(3)
        ELSE IF per_dir = 3 THEN
            X_g(1) = X_0_sup(FLOOR(3*parent_ind-2)) + Dx(1)
            X_g(2) = X_0_sup(FLOOR(3*parent_ind-1)) + Dx(2)
            X_g(3) = X_0_sup(FLOOR(3*parent_ind)) + Dx(3)
        ELSE IF per_dir = 4 THEN
            X_g(1) = X_0_sup(FLOOR(3*parent_ind-2)) + Dz(1)
            X_g(2) = X_0_sup(FLOOR(3*parent_ind-1)) + Dz(2)
            X_g(3) = X_0_sup(FLOOR(3*parent_ind)) + Dz(3)
        END IF

     X_0_g(3*i-2) = X_g(1)
     X_0_g(3*i-1) = X_g(2)
     X_0_g(3*i)   = X_g(3)  

    REPEAT

    !{X_0(1..FLOOR(3*n_N_ng/2))                               = X_0_sup
    X_0(FLOOR(3*n_N_ng/2+1)..FLOOR(2*3*n_N_ng/2))           = X_0_inf
    X_0(FLOOR(2*3*n_N_ng/2+1)..FLOOR(2*3*n_N_ng/2+3*n_G))   = X_0_g!}

    LOOP FOR i = 1 TO FLOOR(3*n_N_ng/2)
        X_0(i) = X_0_sup(i)
    REPEAT

    LOOP FOR i = FLOOR(3*n_N_ng/2+1) TO FLOOR(2*3*n_N_ng/2)
        X_0(i) = X_0_inf(i-FLOOR(3*n_N_ng/2+1)+1)
    REPEAT

    LOOP FOR i = FLOOR(2*3*n_N_ng/2+1) TO FLOOR(2*3*n_N_ng/2+3*n_G)
        X_0(i) = X_0_g(i-FLOOR(2*3*n_N_ng/2+1)+1)
    REPEAT
END X_0_comp 


SUBROUTINE q_0_tilde_comp(ARRAY(*) OF REAL q_0_tilde^; ARRAY(*) OF REAL X_0; ARRAY(*,*) OF INTEGER B_con; REAL l_b; INTEGER n_q_tilde; INTEGER n_B)

    ARRAY(3, n_B) OF REAL vec_dir
    ARRAY(3) OF REAL X_A
    ARRAY(3) OF REAL X_B
    INTEGER ind_A
    INTEGER ind_B

    LOOP FOR i = 1 TO n_B
        ind_A = B_con(i, 1)
        ind_B = B_con(i, 2)

        X_A(1) = X_0(3*ind_A-2)
        X_A(2) = X_0(3*ind_A-1)
        X_A(3) = X_0(3*ind_A)

        X_B(1) = X_0(3*ind_B-2)
        X_B(2) = X_0(3*ind_B-1)
        X_B(3) = X_0(3*ind_B)

        LOOP FOR k = 1 TO 3
            vec_dir(k, i) = (X_B(k) - X_A(k))/l_b
        REPEAT

    REPEAT

    ARRAY(3) OF REAL e_3 = (0, 0, 1)

    ARRAY(3) OF REAL vec_dir_i
    LOOP FOR i = 1 TO n_B
        vec_dir_i(1) = vec_dir(1, i)
        vec_dir_i(2) = vec_dir(2, i)
        vec_dir_i(3) = vec_dir(3, i)

        q_0_tilde(2*i-1+2*n_B) = acos(DotProduct(vec_dir_i, e_3))
        q_0_tilde(2*i+2*n_B)   = atan2(vec_dir_i(2), vec_dir_i(1))
    REPEAT
END q_0_tilde_comp