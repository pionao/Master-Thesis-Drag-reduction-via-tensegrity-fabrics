! Inclusioni

INCLUDE dof_utils.h
!USE rtchecks

! Definizione funzioni e subroutine

SUBROUTINE B_con_comp(ARRAY(*,*) OF INTEGER B_con^; INTEGER n_B; INTEGER n_C)
    
    LOOP FOR i = 1 TO n_C
        B_con(4*i-3, 1) = 4*n_C+1 + 4*(i-1)
        B_con(4*i-3, 2) = 1 + 4*(i-1)
        B_con(4*i-2, 1) = 4*n_C+2 + 4*(i-1)
        B_con(4*i-2, 2) = 2 + 4*(i-1)
        B_con(4*i-1, 1) = 4*n_C+3 + 4*(i-1)
        B_con(4*i-1, 2) = 3 + 4*(i-1)
        B_con(4*i, 1)   = 4*n_C+4 + 4*(i-1)
        B_con(4*i, 2)   = 4 + 4*(i-1)
    REPEAT
END B_con_comp 


SUBROUTINE T_comp(ARRAY(*,2) OF INTEGER T_con^; ARRAY(*,3) OF INTEGER ghost_nodes^; ARRAY(*) OF REAL l_0^; INTEGER nx; INTEGER nz; INTEGER n_C; INTEGER n_T; INTEGER n_G; REAL l_u_s_0; REAL l_u_l_0; REAL l_i_0)

    ARRAY(n_C, 10) OF INTEGER Ten_cell_up

    LOOP FOR j = 1 TO nx AND i = 1 TO nz

        ind = FLOOR(i+nz*(j-1))
        
        Ten_cell_up(ind, 1) = FLOOR(4*(i+(j-1)*nz)-3)
        Ten_cell_up(ind, 2) = FLOOR(4*(i+(j-1)*nz)-2)
        Ten_cell_up(ind, 3) = FLOOR(4*(i+(j-1)*nz)-1)
        Ten_cell_up(ind, 4) = FLOOR(4*(i+(j-1)*nz))

        IF NOT(i MOD nz=0) THEN
            Ten_cell_up(ind, 5) = FLOOR(i+(j-1)*nz+1)
        END IF

        IF NOT(j MOD nx=0) THEN
            Ten_cell_up(ind, 6) = FLOOR(i+j*nz)
        END IF

        IF j = 1 THEN
            Ten_cell_up(ind, 7) = FLOOR(i+nz*(nx-1))
        END IF

        IF i = 1 THEN
            Ten_cell_up(ind, 8) = FLOOR(nz+nz*(j-1))
        END IF

        IF i = nz THEN
            Ten_cell_up(ind, 9) = FLOOR(1+nz*(j-1))
        END IF

        IF j = nx THEN 
            Ten_cell_up(ind, 10) = i
        END IF
    REPEAT

    INTEGER count_1 = 0

    LOOP FOR i = 1 TO FLOOR(nx*nz)

        r_con = Ten_cell_up(i, 5)
        u_con = Ten_cell_up(i, 6)

        IF NOT(r_con = 0) THEN
            count_1 = count_1 + 1

            T_con(3*count_1-2, 1) = Ten_cell_up(i, 2)
            T_con(3*count_1-2, 2) = Ten_cell_up(r_con, 1)
            T_con(3*count_1-1, 1) = Ten_cell_up(r_con, 1)
            T_con(3*count_1-1, 2) = Ten_cell_up(i, 3)
            T_con(3*count_1, 1)   = Ten_cell_up(i, 3)
            T_con(3*count_1, 2)   = Ten_cell_up(r_con, 4)

            l_0(3*count_1-2) = l_u_s_0
            l_0(3*count_1-1) = l_u_l_0
            l_0(3*count_1)   = l_u_s_0
        END IF
        IF NOT(u_con = 0) THEN
            count_1 = count_1 + 1

            T_con(3*count_1-2, 1) = Ten_cell_up(u_con, 1)
            T_con(3*count_1-2, 2) = Ten_cell_up(i, 4)
            T_con(3*count_1-1, 1) = Ten_cell_up(i, 4)
            T_con(3*count_1-1, 2) = Ten_cell_up(u_con, 2)
            T_con(3*count_1, 1)   = Ten_cell_up(u_con, 2)
            T_con(3*count_1, 2)   = Ten_cell_up(i, 3)

            l_0(3*count_1-2) = l_u_s_0
            l_0(3*count_1-1) = l_u_l_0
            l_0(3*count_1)   = l_u_s_0
        END IF
    REPEAT

    INTEGER count_2 = 0
    INTEGER count_g = 0

    LOOP FOR i = 1 TO nz
        count_g             = count_g + 1
        count_2             = count_2 + 1
        ghost_down_cell_ind = Ten_cell_up(i, 7)
        ghost_node          = 8*nx*nz + count_g

        T_con(2*count_2-1+3*count_1, 1) = Ten_cell_up(i, 1)
        T_con(2*count_2-1+3*count_1, 2) = ghost_node
        T_con(2*count_2+3*count_1, 1)   = ghost_node
        T_con(2*count_2+3*count_1, 2)   = Ten_cell_up(i, 2)

        l_0(2*count_2-1+3*count_1) = l_u_s_0
        l_0(2*count_2+3*count_1)   = l_u_l_0

        ghost_nodes(count_g, 1) = ghost_node
        ghost_nodes(count_g, 2) = Ten_cell_up(ghost_down_cell_ind, 4)
        ghost_nodes(count_g, 3) = 1
    REPEAT

    LOOP FOR i = 1 TO nx
        count_g = count_g + 1
        count_2 = count_2 + 1

        j = 1 + (i-1)*nz

        ghost_left_cell_ind = Ten_cell_up(j, 8)
        ghost_node          = 8*nx*nz + count_g

        T_con(2*count_2-1+3*count_1, 1) = Ten_cell_up(j, 4)
        T_con(2*count_2-1+3*count_1, 2) = ghost_node
        T_con(2*count_2+3*count_1, 1)   = ghost_node
        T_con(2*count_2+3*count_1, 2)   = Ten_cell_up(j, 1)

        l_0(2*count_2-1+3*count_1) = l_u_s_0
        l_0(2*count_2+3*count_1)   = l_u_l_0

        ghost_nodes(count_g, 1) = ghost_node
        ghost_nodes(count_g, 2) = Ten_cell_up(ghost_left_cell_ind, 3)
        ghost_nodes(count_g, 3) = 2
    REPEAT

    INTEGER count_3 = 0

    LOOP FOR i = 1 TO nx
        count_g = count_g + 1
        count_3 = count_3 + 1

        j = i*nz

        ghost_right_cell_ind = Ten_cell_up(j, 9)
        ghost_node           = 8*nx*nz + count_g

        T_con(count_3+2*count_2+3*count_1, 1) = ghost_node
        T_con(count_3+2*count_2+3*count_1, 2) = Ten_cell_up(j, 2)

        l_0(count_3+2*count_2+3*count_1) = l_u_s_0

        ghost_nodes(count_g, 1) = ghost_node
        ghost_nodes(count_g, 2) = Ten_cell_up(ghost_right_cell_ind, 1)
        ghost_nodes(count_g, 3) = 3
    REPEAT

    LOOP FOR i = 1 TO nz
        count_g = count_g + 1
        count_3 = count_3 + 1

        j = i + (nx-1)*nz

        ghost_up_cell_ind = Ten_cell_up(j, 10)
        ghost_node        = 8*nx*nz + count_g

        T_con(count_3+2*count_2+3*count_1, 1) = ghost_node
        T_con(count_3+2*count_2+3*count_1, 2) = Ten_cell_up(j, 3)

        l_0(count_3+2*count_2+3*count_1) = l_u_s_0

        ghost_nodes(count_g, 1) = ghost_node
        ghost_nodes(count_g, 2) = Ten_cell_up(ghost_up_cell_ind, 2)
        ghost_nodes(count_g, 3) = 4
    REPEAT

    INTEGER count_4 = 0

    LOOP FOR i = 1 TO nx*nz
        count_4 = count_4 + 1

        T_con(4*count_4-3+3*count_1+2*count_2+count_3, 1) = 4*nx*nz + 1 + 4*(i-1)
        T_con(4*count_4-3+3*count_1+2*count_2+count_3, 2) = 4 + 4*(i-1)
        T_con(4*count_4-2+3*count_1+2*count_2+count_3, 1) = 4*nx*nz + 2 + 4*(i-1)
        T_con(4*count_4-2+3*count_1+2*count_2+count_3, 2) = 1 + 4*(i-1)
        T_con(4*count_4-1+3*count_1+2*count_2+count_3, 1) = 4*nx*nz + 3 + 4*(i-1)
        T_con(4*count_4-1+3*count_1+2*count_2+count_3, 2) = 2 + 4*(i-1)
        T_con(4*count_4+3*count_1+2*count_2+count_3, 1)   = 4*nx*nz + 4 + 4*(i-1)
        T_con(4*count_4+3*count_1+2*count_2+count_3, 2)   = 3 + 4*(i-1)

        l_0(4*count_4-3+3*count_1+2*count_2+count_3) = l_i_0
        l_0(4*count_4-2+3*count_1+2*count_2+count_3) = l_i_0
        l_0(4*count_4-1+3*count_1+2*count_2+count_3) = l_i_0
        l_0(4*count_4+3*count_1+2*count_2+count_3)   = l_i_0
    REPEAT
END T_comp 


SUBROUTINE f_n_comp(ARRAY(*) OF REAL f_n^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_T; INTEGER n_G; INTEGER nx; INTEGER ny; REAL l_per; REAL l_b; REAL k; REAL sigma; ARRAY(*) OF REAL q_tilde; ARRAY(*) OF REAL X_0; ARRAY(*) OF REAL l_0; ARRAY(*,*) OF INTEGER T_con; ARRAY(*,*) OF INTEGER ghost_nodes)
    
    ARRAY(3) OF REAL f_t, l_i, l_i_dot

    REAL l_i_norm
    
    ARRAY(3*n_G) OF REAL f_n_ghost
    LOOP FOR i = 1 TO n_G
        f_n_ghost = 0
    REPEAT
    
    INTEGER ind_A, ind_B, ind_G

    ARRAY(n_N_dof) OF REAL X     = 0
    ARRAY(n_N_dof) OF REAL X_dot = 0
    
    X_comp(X, n_N_dof, n_N, n_G, nx, ny, l_per, l_b, q_tilde, X_0, ghost_nodes)
    X_dot_comp(X_dot, n_N_dof, n_N, n_G, l_b, q_tilde, ghost_nodes)
    
    LOOP FOR i = 1 TO n_T
        ind_A = T_con(i, 1)
        ind_B = T_con(i, 2)

        l_i(1) = X(3*ind_B-2) - X(3*ind_A-2)
        l_i(2) = X(3*ind_B-1) - X(3*ind_A-1)
        l_i(3) = X(3*ind_B)   - X(3*ind_A)
        
        l_i_dot(1) = X_dot(3*ind_B-2) - X_dot(3*ind_A-2)
        l_i_dot(2) = X_dot(3*ind_B-1) - X_dot(3*ind_A-1)
        l_i_dot(3) = X_dot(3*ind_B)   - X_dot(3*ind_A)

        l_i_norm = SQRT(l_i(1)^2+l_i(2)^2+l_i(3)^2)

        IF l_i_norm >= l_0(i) THEN
            f_t(1) = k/l_0(i)*(l_i_norm - l_0(i))*l_i(1)/l_i_norm + sigma*l_i_dot(1)
            f_t(2) = k/l_0(i)*(l_i_norm - l_0(i))*l_i(2)/l_i_norm + sigma*l_i_dot(2)
            f_t(3) = k/l_0(i)*(l_i_norm - l_0(i))*l_i(3)/l_i_norm + sigma*l_i_dot(3)
        ELSE
            f_t(1) = 0
            f_t(2) = 0
            f_t(3) = 0
        END IF

        IF ind_A <= (n_N-n_G)/2 THEN
            f_n(3*ind_A-2) = f_n(3*ind_A-2) + f_t(1)
            f_n(3*ind_A-1) = f_n(3*ind_A-1) + f_t(2)
            f_n(3*ind_A)   = f_n(3*ind_A) + f_t(3)
        ELSE IF ind_A > n_N-n_G THEN
            ind_G = ind_A - (n_N-n_G)

            f_n_ghost(3*ind_G-2) = f_n_ghost(3*ind_G-2) + f_t(1)
            f_n_ghost(3*ind_G-1) = f_n_ghost(3*ind_G-1) + f_t(2)
            f_n_ghost(3*ind_G)   = f_n_ghost(3*ind_G) + f_t(3)
        END IF

        IF ind_B <= (n_N-n_G)/2 THEN
            f_n(3*ind_B-2) = f_n(3*ind_B-2) - f_t(1)
            f_n(3*ind_B-1) = f_n(3*ind_B-1) - f_t(2)
            f_n(3*ind_B)   = f_n(3*ind_B) - f_t(3)
        ELSE IF ind_B > n_N-n_G THEN
            ind_G = ind_B - (n_N-n_G)

            f_n_ghost(3*ind_G-2) = f_n_ghost(3*ind_G-2) - f_t(1)
            f_n_ghost(3*ind_G-1) = f_n_ghost(3*ind_G-1) - f_t(2)
            f_n_ghost(3*ind_G)   = f_n_ghost(3*ind_G) - f_t(3)
        END IF
    REPEAT
    
    LOOP FOR i = 1 TO n_G
        parent_ind = ghost_nodes(i, 2)

        f_n(3*parent_ind-2) = f_n(3*parent_ind-2) + f_n_ghost(3*i-2)
        f_n(3*parent_ind-1) = f_n(3*parent_ind-1) + f_n_ghost(3*i-1)
        f_n(3*parent_ind)   = f_n(3*parent_ind) + f_n_ghost(3*i)
    REPEAT
END f_n_comp


SUBROUTINE Cq_dot_compute(ARRAY(*) OF REAL Cq_dot^; INTEGER n_q_tilde; INTEGER n_B; REAL I_0; ARRAY(*) OF REAL q_tilde)

    LOOP FOR i = 1 TO n_B
        Cq_dot(2*i-1) = -0.5*I_0*SIN(2*q_tilde(2*i-1+FLOOR(n_q_tilde/2)))*q_tilde(2*i)^2
        Cq_dot(2*i)   = I_0*SIN(2*q_tilde(2*i-1+FLOOR(n_q_tilde/2)))*q_tilde(2*i-1)*q_tilde(2*i)
    REPEAT
END Cq_dot_compute


SUBROUTINE f_mom_comp(ARRAY(*) OF REAL f_mom^; INTEGER n_q; INTEGER n_q_tilde; REAL l_b; ARRAY(*) OF REAL f_n; ARRAY(*) OF REAL q_tilde)

    LOOP FOR i = 1 TO FLOOR(n_q/2)
        f_mom(2*i-1) = l_b*[COS(q_tilde(2*i-1+n_q))*COS(q_tilde(2*i+n_q))*f_n(3*i-2) + COS(q_tilde(2*i-1+n_q))*SIN(q_tilde(2*i+n_q))*f_n(3*i-1) - SIN(q_tilde(2*i-1+n_q))*f_n(3*i)]
        f_mom(2*i)   = l_b*[-SIN(q_tilde(2*i-1+n_q))*SIN(q_tilde(2*i+n_q))*f_n(3*i-2) + SIN(q_tilde(2*i-1+n_q))*COS(q_tilde(2*i+n_q))*f_n(3*i-1)]
    REPEAT
END f_mom_comp


SUBROUTINE P_comp(ARRAY(*,3,2) OF INTEGER P_mat^; ARRAY(*,*) OF INTEGER ghost_nodes; INTEGER nx; INTEGER nz; INTEGER n_C; INTEGER n_T; INTEGER n_G)

    INTEGER ghost_ind = 0
    INTEGER floor_ind = 0

    LOOP FOR j = 1 TO nx
        LOOP FOR i = 1 TO nz
            ind = i + (j-1)*nz

            IF i = 1 AND j = 1 THEN
                P_mat(1+floor_ind, 1, 1) = 1
                P_mat(1+floor_ind, 2, 1) = ghost_nodes(1, 1)
                P_mat(1+floor_ind, 3, 1) = ghost_nodes(nz+1, 1)

                P_mat(2+floor_ind, 1, 1) = ghost_nodes(1, 1)
                P_mat(2+floor_ind, 2, 1) = 4*(nz+1) - 2
                P_mat(2+floor_ind, 3, 1) = ghost_nodes(nz+1, 1)

                P_mat(3+floor_ind, 1, 1) = ghost_nodes(1, 1)
                P_mat(3+floor_ind, 2, 1) = 4*2 - 3
                P_mat(3+floor_ind, 3, 1) = 4*(nz+1) - 2

                P_mat(4+floor_ind, 1, 1) = ghost_nodes(1, 1)
                P_mat(4+floor_ind, 2, 1) = 2
                P_mat(4+floor_ind, 3, 1) = 4*2 - 3

                P_mat(5+floor_ind, 1, 1) = ghost_nodes(nz+1, 1)
                P_mat(5+floor_ind, 2, 1) = 4*(nz+1) - 2
                P_mat(5+floor_ind, 3, 1) = 4

                P_mat(6+floor_ind, 1, 1) = 4*(nz+1) - 2
                P_mat(6+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(6+floor_ind, 3, 1) = 3

                floor_ind = floor_ind + 6
            END IF

            IF i > 1 AND i < nz AND j = 1 THEN
                P_mat(1+floor_ind, 1, 1) = 4*ind - 3
                P_mat(1+floor_ind, 2, 1) = ghost_nodes(i, 1)
                P_mat(1+floor_ind, 3, 1) = 4*(ind-1) - 1

                P_mat(2+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(2+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(2+floor_ind, 3, 1) = 4*(ind-1) - 1

                P_mat(3+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(3+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(3+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(4+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(4+floor_ind, 2, 1) = 4*ind - 2
                P_mat(4+floor_ind, 3, 1) = 4*(ind+1) - 3

                P_mat(5+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(5+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(5+floor_ind, 3, 1) = 4*ind

                P_mat(6+floor_ind, 1, 1) = 4*(ind+nz) - 2
                P_mat(6+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(6+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = floor_ind + 6
            END IF

            IF i = nz AND j = 1 THEN
                P_mat(1+floor_ind, 1, 1) = 4*ind - 3
                P_mat(1+floor_ind, 2, 1) = ghost_nodes(i, 1)
                P_mat(1+floor_ind, 3, 1) = 4*(ind-1) - 1

                P_mat(2+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(2+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(2+floor_ind, 3, 1) = 4*(ind-1) - 1

                P_mat(3+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(3+floor_ind, 2, 1) = ghost_nodes(nz+nx+1, 1)
                P_mat(3+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(4+floor_ind, 1, 1) = ghost_nodes(i, 1)
                P_mat(4+floor_ind, 2, 1) = 4*ind - 2
                P_mat(4+floor_ind, 3, 1) = ghost_nodes(nz+nx+1, 1)

                P_mat(5+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(5+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(5+floor_ind, 3, 1) = 4*ind

                P_mat(6+floor_ind, 1, 1) = 4*(ind+nz) - 2
                P_mat(6+floor_ind, 2, 1) = ghost_nodes(nz+nx+1, 1)
                P_mat(6+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = floor_ind + 6
            END IF

            IF i = 1 AND j > 1 AND j < nx THEN
                P_mat(1+floor_ind, 1, 1) = 4*ind - 3
                P_mat(1+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(1+floor_ind, 3, 1) = ghost_nodes(nz+j, 1)

                P_mat(2+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(2+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(2+floor_ind, 3, 1) = ghost_nodes(nz+j, 1)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(3+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(3+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(4+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 2, 1) = 4*ind - 2
                P_mat(4+floor_ind, 3, 1) = 4*(ind+1) - 3

                P_mat(5+floor_ind, 1, 1) = ghost_nodes(nz+j, 1)
                P_mat(5+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(5+floor_ind, 3, 1) = 4*ind

                P_mat(6+floor_ind, 1, 1) = 4*(ind+nz) - 2
                P_mat(6+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(6+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = floor_ind + 6
            END IF

            IF j > 1 AND j < nx AND i > 1 AND i < nz THEN
                P_mat(1+floor_ind, 1, 1) = 4*(ind-1) - 2
                P_mat(1+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(1+floor_ind, 3, 1) = 4*ind - 3

                P_mat(2+floor_ind, 1, 1) = 4*ind - 3
                P_mat(2+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(2+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(3+floor_ind, 2, 1) = 4*ind - 3
                P_mat(3+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(4+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(4+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(5+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(5+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(5+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(6+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(6+floor_ind, 2, 1) = 4*ind - 2
                P_mat(6+floor_ind, 3, 1) = 4*(ind+1) - 3

                P_mat(7+floor_ind, 1, 1) = 4*ind
                P_mat(7+floor_ind, 2, 1) = 4*(ind-1) - 1
                P_mat(7+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(8+floor_ind, 1, 1) = 4*(ind+nz) - 2
                P_mat(8+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(8+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = 8 + floor_ind
            END IF

            IF i = nz AND j > 1 AND j < nx THEN
                P_mat(1+floor_ind, 1, 1) = 4*(ind-1) - 2
                P_mat(1+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(1+floor_ind, 3, 1) = 4*ind - 3

                P_mat(2+floor_ind, 1, 1) = 4*ind - 3
                P_mat(2+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(2+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(3+floor_ind, 2, 1) = 4*ind - 3
                P_mat(3+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(4+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(4+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(5+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(5+floor_ind, 2, 1) = ghost_nodes(nz+nx+j, 1)
                P_mat(5+floor_ind, 3, 1) = 4*(ind+nz) - 2

                P_mat(6+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(6+floor_ind, 2, 1) = 4*ind - 2
                P_mat(6+floor_ind, 3, 1) = ghost_nodes(nz+nx+j, 1)

                P_mat(7+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(7+floor_ind, 2, 1) = 4*(ind+nz) - 2
                P_mat(7+floor_ind, 3, 1) = 4*ind

                P_mat(8+floor_ind, 1, 1) = 4*(ind+nz) - 2
                P_mat(8+floor_ind, 2, 1) = ghost_nodes(nz+nx+j, 1)
                P_mat(8+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = 8 + floor_ind
            END IF

            IF i = 1 AND j = nx THEN
                P_mat(1+floor_ind, 1, 1) = 4*ind - 3
                P_mat(1+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(1+floor_ind, 3, 1) = ghost_nodes(nz+nx, 1)

                P_mat(2+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(2+floor_ind, 2, 1) = ghost_nodes(nz+2*nx+1, 1)
                P_mat(2+floor_ind, 3, 1) = ghost_nodes(nz+nx, 1)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(3+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(3+floor_ind, 3, 1) = ghost_nodes(nz+2*nx+1, 1)

                P_mat(4+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 2, 1) = 4*ind - 2
                P_mat(4+floor_ind, 3, 1) = 4*(ind+1) - 3

                P_mat(5+floor_ind, 1, 1) = ghost_nodes(nz+nx, 1)
                P_mat(5+floor_ind, 2, 1) = ghost_nodes(nz+2*nx+1, 1)
                P_mat(5+floor_ind, 3, 1) = 4*ind

                P_mat(6+floor_ind, 1, 1) = ghost_nodes(nz+2*nx+1, 1)
                P_mat(6+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(6+floor_ind, 3, 1) = 4*ind - 1

                floor_ind = floor_ind + 6
            END IF

            IF i > 1 AND i < nz AND j = nx THEN
                P_mat(1+floor_ind, 1, 1) = 4*(ind-1) - 2
                P_mat(1+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(1+floor_ind, 3, 1) = 4*ind - 3

                P_mat(2+floor_ind, 1, 1) = 4*ind - 3
                P_mat(2+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(2+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(3+floor_ind, 2, 1) = 4*(ind-1) - 1
                P_mat(3+floor_ind, 3, 1) = 4*ind - 3

                P_mat(4+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(4+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 3, 1) = ghost_nodes(nz+2*nx+i, 1)

                P_mat(5+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(5+floor_ind, 2, 1) = 4*(ind+1) - 3
                P_mat(5+floor_ind, 3, 1) = ghost_nodes(nz+2*nx+i, 1)

                P_mat(6+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(6+floor_ind, 2, 1) = 4*ind - 2
                P_mat(6+floor_ind, 3, 1) = 4*(ind+1) - 3

                P_mat(7+floor_ind, 1, 1) = 4*ind
                P_mat(7+floor_ind, 2, 1) = 4*(ind-1) - 1
                P_mat(7+floor_ind, 3, 1) = ghost_nodes(nz+2*nx+i, 1)

                P_mat(8+floor_ind, 1, 1) = 4*(ind+1) - 3
                P_mat(8+floor_ind, 2, 1) = 4*ind - 1
                P_mat(8+floor_ind, 3, 1) = ghost_nodes(nz+2*nx+i, 1)

                floor_ind = 8 + floor_ind
            END IF

            IF i = nz AND j = nx THEN
                P_mat(1+floor_ind, 1, 1) = 4*(ind-1) - 2
                P_mat(1+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(1+floor_ind, 3, 1) = 4*ind - 3

                P_mat(2+floor_ind, 1, 1) = 4*ind - 3
                P_mat(2+floor_ind, 2, 1) = 4*(ind-1-nz) - 1
                P_mat(2+floor_ind, 3, 1) = 4*(ind-nz)

                P_mat(3+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(3+floor_ind, 2, 1) = 4*(ind-1) - 1
                P_mat(3+floor_ind, 3, 1) = 4*ind - 3

                P_mat(4+floor_ind, 1, 1) = 4*(ind-1) - 1
                P_mat(4+floor_ind, 2, 1) = 4*(ind-nz)
                P_mat(4+floor_ind, 3, 1) = ghost_nodes(2*nz+2*nx, 1)

                P_mat(5+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(5+floor_ind, 2, 1) = ghost_nodes(nz+2*nx, 1)
                P_mat(5+floor_ind, 3, 1) = ghost_nodes(2*nz+2*nx, 1)

                P_mat(6+floor_ind, 1, 1) = 4*(ind-nz)
                P_mat(6+floor_ind, 2, 1) = 4*ind - 2
                P_mat(6+floor_ind, 3, 1) = ghost_nodes(nz+2*nx, 1)

                P_mat(7+floor_ind, 1, 1) = 4*ind
                P_mat(7+floor_ind, 2, 1) = 4*(ind-1) - 1
                P_mat(7+floor_ind, 3, 1) = ghost_nodes(2*nz+2*nx, 1)

                P_mat(8+floor_ind, 1, 1) = ghost_nodes(nz+2*nx, 1)
                P_mat(8+floor_ind, 2, 1) = 4*ind - 1
                P_mat(8+floor_ind, 3, 1) = ghost_nodes(2*nz+2*nx, 1)

                floor_ind = 8 + floor_ind
            END IF
        REPEAT
    REPEAT

    ! Patch periodiche

    P_mat(1+floor_ind, 1, 1) = 4*((nx-1)*nz)
    P_mat(1+floor_ind, 1, 2) = 1
    P_mat(1+floor_ind, 2, 1) = 4*(nz + (nx-1)*nz-1) - 1
    P_mat(1+floor_ind, 2, 2) = 1
    P_mat(1+floor_ind, 3, 1) = 4*(nz + (nx-1)*nz) - 3
    P_mat(1+floor_ind, 3, 2) = 1

    P_mat(2+floor_ind, 1, 1) = 4*(nz*nx-1) - 1
    P_mat(2+floor_ind, 1, 2) = 1
    P_mat(2+floor_ind, 2, 1) = 4*((nx-1)*nz)
    P_mat(2+floor_ind, 2, 2) = 1
    P_mat(2+floor_ind, 3, 1) = 4*nz - 2
    P_mat(2+floor_ind, 3, 2) = 2

    P_mat(3+floor_ind, 1, 1) = 4*((nx-1)*nz)
    P_mat(3+floor_ind, 1, 2) = 1
    P_mat(3+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 3
    P_mat(3+floor_ind, 3, 1) = 4*nz - 2
    P_mat(3+floor_ind, 3, 2) = 2

    P_mat(4+floor_ind, 1, 1) = 4*((nx-1)*nz)
    P_mat(4+floor_ind, 1, 2) = 1
    P_mat(4+floor_ind, 2, 1) = 4*nz*nx - 2
    P_mat(4+floor_ind, 2, 2) = 1
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 3, 2) = 3

    P_mat(5+floor_ind, 1, 1) = 4*nz*nx
    P_mat(5+floor_ind, 1, 2) = 1 
    P_mat(5+floor_ind, 2, 1) = 4*(nz + (nx-1)*nz-1) - 1
    P_mat(5+floor_ind, 2, 2) = 1
    P_mat(5+floor_ind, 3, 1) = 4*nz - 2
    P_mat(5+floor_ind, 3, 2) = 2

    P_mat(6+floor_ind, 1, 1) = 4*nz - 2
    P_mat(6+floor_ind, 1, 2) = 2
    P_mat(6+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 2, 2) = 3
    P_mat(6+floor_ind, 3, 1) = 4*nz*nx - 1
    P_mat(6+floor_ind, 3, 2) = 1

    P_mat(7+floor_ind, 1, 1) = 4*nz - 2
    P_mat(7+floor_ind, 1, 2) = 2
    P_mat(7+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(7+floor_ind, 2, 2) = 1
    P_mat(7+floor_ind, 3, 1) = 1
    P_mat(7+floor_ind, 3, 2) = 0

    P_mat(8+floor_ind, 1, 1) = 1
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(8+floor_ind, 2, 2) = 1
    P_mat(8+floor_ind, 3, 1) = 4*(1+(nx-1)*nz)
    P_mat(8+floor_ind, 3, 2) = 3

    floor_ind = floor_ind + 8

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(1+floor_ind, 1, 2) = 3
    P_mat(1+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(1+floor_ind, 2, 2) = 1
    P_mat(1+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(1+floor_ind, 3, 2) = 3

    P_mat(2+floor_ind, 1, 1) = 4*nz*nx - 1
    P_mat(2+floor_ind, 1, 2) = 1
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-2)*nz)
    P_mat(2+floor_ind, 2, 2) = 3
    P_mat(2+floor_ind, 3, 1) = 2
    P_mat(2+floor_ind, 3, 2) = 0

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(3+floor_ind, 1, 2) = 3
    P_mat(3+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 3
    P_mat(3+floor_ind, 3, 1) = 2
    P_mat(3+floor_ind, 3, 2) = 0

    P_mat(4+floor_ind, 1, 1) = 4*(1+(nx-1)*nz) - 2
    P_mat(4+floor_ind, 1, 2) = 3
    P_mat(4+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 2, 2) = 3
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-2)*nz)
    P_mat(4+floor_ind, 3, 2) = 3

    P_mat(5+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(5+floor_ind, 1, 2) = 3
    P_mat(5+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(5+floor_ind, 2, 2) = 1
    P_mat(5+floor_ind, 3, 1) = 2
    P_mat(5+floor_ind, 3, 2) = 0

    P_mat(6+floor_ind, 1, 1) = 2
    P_mat(6+floor_ind, 1, 2) = 0
    P_mat(6+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 2, 2) = 3
    P_mat(6+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(6+floor_ind, 3, 2) = 3

    P_mat(7+floor_ind, 1, 1) = 2
    P_mat(7+floor_ind, 1, 2) = 0
    P_mat(7+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(7+floor_ind, 2, 2) = 3
    P_mat(7+floor_ind, 3, 1) = 5
    P_mat(7+floor_ind, 3, 2) = 0

    P_mat(8+floor_ind, 1, 1) = 5
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(8+floor_ind, 2, 2) = 3
    P_mat(8+floor_ind, 3, 1) = 4*(2+(nx-1)*nz)
    P_mat(8+floor_ind, 3, 2) = 3

    floor_ind = floor_ind + 8

    LOOP FOR i = 2 TO nz-1
        P_mat(1+floor_ind, 1, 1) = 4*(i+(nx-2)*nz)
        P_mat(1+floor_ind, 1, 2) = 3
        P_mat(1+floor_ind, 2, 1) = 4*(i-1+(nx-1)*nz) - 1
        P_mat(1+floor_ind, 2, 2) = 3
        P_mat(1+floor_ind, 3, 1) = 4*(i+(nx-1)*nz) - 3
        P_mat(1+floor_ind, 3, 2) = 3

        P_mat(2+floor_ind, 1, 1) = 4*(i-1+(nx-1)*nz) - 1
        P_mat(2+floor_ind, 1, 2) = 3
        P_mat(2+floor_ind, 2, 1) = 4*(i+(nx-2)*nz)
        P_mat(2+floor_ind, 2, 2) = 3
        P_mat(2+floor_ind, 3, 1) = 4*i - 2
        P_mat(2+floor_ind, 3, 2) = 0

        P_mat(3+floor_ind, 1, 1) = 4*(i+(nx-2)*nz)
        P_mat(3+floor_ind, 1, 2) = 3
        P_mat(3+floor_ind, 2, 1) = 4*(i+1+(nx-1)*nz) - 3
        P_mat(3+floor_ind, 2, 2) = 3
        P_mat(3+floor_ind, 3, 1) = 4*i - 2
        P_mat(3+floor_ind, 3, 2) = 0

        P_mat(4+floor_ind, 1, 1) = 4*(i+(nx-1)*nz) - 2
        P_mat(4+floor_ind, 1, 2) = 3
        P_mat(4+floor_ind, 2, 1) = 4*(i+1+(nx-1)*nz) - 3
        P_mat(4+floor_ind, 2, 2) = 3
        P_mat(4+floor_ind, 3, 1) = 4*(i+(nx-2)*nz)
        P_mat(4+floor_ind, 3, 2) = 3

        P_mat(5+floor_ind, 1, 1) = 4*(i+(nx-1)*nz)
        P_mat(5+floor_ind, 1, 2) = 3
        P_mat(5+floor_ind, 2, 1) = 4*(i-1+(nx-1)*nz) - 1
        P_mat(5+floor_ind, 2, 2) = 3
        P_mat(5+floor_ind, 3, 1) = 4*i - 2
        P_mat(5+floor_ind, 3, 2) = 0

        P_mat(6+floor_ind, 1, 1) = 4*i - 2
        P_mat(6+floor_ind, 1, 2) = 0
        P_mat(6+floor_ind, 2, 1) = 4*(i+1+(nx-1)*nz) - 3
        P_mat(6+floor_ind, 2, 2) = 3
        P_mat(6+floor_ind, 3, 1) = 4*(i+(nx-1)*nz) - 1
        P_mat(6+floor_ind, 3, 2) = 3

        P_mat(7+floor_ind, 1, 1) = 4*i - 2
        P_mat(7+floor_ind, 1, 2) = 0
        P_mat(7+floor_ind, 2, 1) = 4*(i+(nx-1)*nz) - 1
        P_mat(7+floor_ind, 2, 2) = 3
        P_mat(7+floor_ind, 3, 1) = 4*(i+1) - 3
        P_mat(7+floor_ind, 3, 2) = 0

        P_mat(8+floor_ind, 1, 1) = 4*(i+1) - 3
        P_mat(8+floor_ind, 1, 2) = 0
        P_mat(8+floor_ind, 2, 1) = 4*(i+(nx-1)*nz) - 1
        P_mat(8+floor_ind, 2, 2) = 3
        P_mat(8+floor_ind, 3, 1) = 4*(i+1+(nx-1)*nz)
        P_mat(8+floor_ind, 3, 2) = 3

        floor_ind = floor_ind + 8
    REPEAT

    P_mat(1+floor_ind, 1, 1) = 4*(nz*nx-nz)
    P_mat(1+floor_ind, 1, 2) = 3
    P_mat(1+floor_ind, 2, 1) = 4*(nz*nx-1) - 1
    P_mat(1+floor_ind, 2, 2) = 3
    P_mat(1+floor_ind, 3, 1) = 4*nz*nx - 3
    P_mat(1+floor_ind, 3, 2) = 3

    P_mat(2+floor_ind, 1, 1) = 4*(nz*nx-1) - 1
    P_mat(2+floor_ind, 1, 2) = 3
    P_mat(2+floor_ind, 2, 1) = 4*(nz*nx-nz)
    P_mat(2+floor_ind, 2, 2) = 3
    P_mat(2+floor_ind, 3, 1) = 4*nz - 2
    P_mat(2+floor_ind, 3, 2) = 0

    P_mat(3+floor_ind, 1, 1) = 4*(nz*nx-nz)
    P_mat(3+floor_ind, 1, 2) = 3
    P_mat(3+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 4
    P_mat(3+floor_ind, 3, 1) = 4*nz - 2
    P_mat(3+floor_ind, 3, 2) = 0

    P_mat(4+floor_ind, 1, 1) = 4*nz*nx - 2
    P_mat(4+floor_ind, 1, 2) = 3
    P_mat(4+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 2, 2) = 4
    P_mat(4+floor_ind, 3, 1) = 4*(nz*nx-nz)
    P_mat(4+floor_ind, 3, 2) = 3

    P_mat(5+floor_ind, 1, 1) = 4*nz*nx
    P_mat(5+floor_ind, 1, 2) = 3
    P_mat(5+floor_ind, 2, 1) = 4*(nz*nx-1) - 1
    P_mat(5+floor_ind, 2, 2) = 3
    P_mat(5+floor_ind, 3, 1) = 4*nz - 2
    P_mat(5+floor_ind, 3, 2) = 0

    P_mat(6+floor_ind, 1, 1) = 4*nz - 2
    P_mat(6+floor_ind, 1, 2) = 0
    P_mat(6+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 2, 2) = 4
    P_mat(6+floor_ind, 3, 1) = 4*nz*nx - 1
    P_mat(6+floor_ind, 3, 2) = 3

    P_mat(7+floor_ind, 1, 1) = 4*nz - 2
    P_mat(7+floor_ind, 1, 2) = 0
    P_mat(7+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(7+floor_ind, 2, 2) = 3
    P_mat(7+floor_ind, 3, 1) = 1
    P_mat(7+floor_ind, 3, 2) = 5

    P_mat(8+floor_ind, 1, 1) = 1
    P_mat(8+floor_ind, 1, 2) = 5
    P_mat(8+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(8+floor_ind, 2, 2) = 3
    P_mat(8+floor_ind, 3, 1) = 4*(1+(nx-1)*nz)
    P_mat(8+floor_ind, 3, 2) = 4

    floor_ind = floor_ind + 8

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(1+floor_ind, 1, 2) = 4
    P_mat(1+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(1+floor_ind, 2, 2) = 3
    P_mat(1+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(1+floor_ind, 3, 2) = 4

    P_mat(2+floor_ind, 1, 1) = 4*nz*nx - 1
    P_mat(2+floor_ind, 1, 2) = 3
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-2)*nz)
    P_mat(2+floor_ind, 2, 2) = 4
    P_mat(2+floor_ind, 3, 1) = 2
    P_mat(2+floor_ind, 3, 2) = 5

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(3+floor_ind, 1, 2) = 4
    P_mat(3+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 4
    P_mat(3+floor_ind, 3, 1) = 2
    P_mat(3+floor_ind, 3, 2) = 5

    P_mat(4+floor_ind, 1, 1) = 4*(1+(nx-1)*nz) - 2
    P_mat(4+floor_ind, 1, 2) = 4
    P_mat(4+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 2, 2) = 4
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-2)*nz)
    P_mat(4+floor_ind, 3, 2) = 4

    P_mat(5+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(5+floor_ind, 1, 2) = 4
    P_mat(5+floor_ind, 2, 1) = 4*nz*nx - 1
    P_mat(5+floor_ind, 2, 2) = 3
    P_mat(5+floor_ind, 3, 1) = 2
    P_mat(5+floor_ind, 3, 2) = 5

    P_mat(6+floor_ind, 1, 1) = 2
    P_mat(6+floor_ind, 1, 2) = 5
    P_mat(6+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 2, 2) = 4
    P_mat(6+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(6+floor_ind, 3, 2) = 4

    floor_ind = floor_ind + 6

    P_mat(1+floor_ind, 1, 1) = 4*(nz*nx)
    P_mat(1+floor_ind, 1, 2) = 1
    P_mat(1+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(1+floor_ind, 2, 2) = 2
    P_mat(1+floor_ind, 3, 1) = 4*nz - 3
    P_mat(1+floor_ind, 3, 2) = 2

    P_mat(2+floor_ind, 1, 1) = 4*(nz-1) - 1
    P_mat(2+floor_ind, 1, 2) = 2
    P_mat(2+floor_ind, 2, 1) = 4*(nz*nx)
    P_mat(2+floor_ind, 2, 2) = 1
    P_mat(2+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(2+floor_ind, 3, 2) = 2

    P_mat(3+floor_ind, 1, 1) = 4*(nz*nx)
    P_mat(3+floor_ind, 1, 2) = 1
    P_mat(3+floor_ind, 2, 1) = 1
    P_mat(3+floor_ind, 2, 2) = 0
    P_mat(3+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(3+floor_ind, 3, 2) = 2

    P_mat(4+floor_ind, 1, 1) = 4*nz - 2
    P_mat(4+floor_ind, 1, 2) = 2
    P_mat(4+floor_ind, 2, 1) = 1
    P_mat(4+floor_ind, 2, 2) = 0
    P_mat(4+floor_ind, 3, 1) = 4*(nz*nx)
    P_mat(4+floor_ind, 3, 2) = 1

    P_mat(5+floor_ind, 1, 1) = 4*nz
    P_mat(5+floor_ind, 1, 2) = 2
    P_mat(5+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(5+floor_ind, 2, 2) = 2
    P_mat(5+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(5+floor_ind, 3, 2) = 2

    P_mat(6+floor_ind, 1, 1) = 4*2*nz - 2
    P_mat(6+floor_ind, 1, 2) = 2
    P_mat(6+floor_ind, 2, 1) = 1
    P_mat(6+floor_ind, 2, 2) = 0
    P_mat(6+floor_ind, 3, 1) = 4*nz - 1
    P_mat(6+floor_ind, 3, 2) = 2

    P_mat(7+floor_ind, 1, 1) = 4*2*nz - 2
    P_mat(7+floor_ind, 1, 2) = 2
    P_mat(7+floor_ind, 2, 1) = 4*nz - 1
    P_mat(7+floor_ind, 2, 2) = 2
    P_mat(7+floor_ind, 3, 1) = 4*(1+nz) - 3
    P_mat(7+floor_ind, 3, 2) = 0

    P_mat(8+floor_ind, 1, 1) = 4*(1+nz) - 3
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4*nz - 1
    P_mat(8+floor_ind, 2, 2) = 2
    P_mat(8+floor_ind, 3, 1) = 4
    P_mat(8+floor_ind, 3, 2) = 0

    floor_ind = floor_ind + 8

    LOOP FOR j = 2 TO nx-1
        P_mat(1+floor_ind, 1, 1) = 4*(nz+(j-2)*nz)
        P_mat(1+floor_ind, 1, 2) = 2
        P_mat(1+floor_ind, 2, 1) = 4*(nz-1+(j-1)*nz) - 1
        P_mat(1+floor_ind, 2, 2) = 2
        P_mat(1+floor_ind, 3, 1) = 4*(nz+(j-1)*nz) - 3
        P_mat(1+floor_ind, 3, 2) = 2

        P_mat(2+floor_ind, 1, 1) = 4*(nz-1+(j-1)*nz) - 1
        P_mat(2+floor_ind, 1, 2) = 2
        P_mat(2+floor_ind, 2, 1) = 4*(nz+(j-2)*nz)
        P_mat(2+floor_ind, 2, 2) = 2
        P_mat(2+floor_ind, 3, 1) = 4*(nz+j*nz) - 2
        P_mat(2+floor_ind, 3, 2) = 2

        P_mat(3+floor_ind, 1, 1) = 4*(nz+(j-2)*nz)
        P_mat(3+floor_ind, 1, 2) = 2
        P_mat(3+floor_ind, 2, 1) = 4*(1+(j-1)*nz) - 3
        P_mat(3+floor_ind, 2, 2) = 0
        P_mat(3+floor_ind, 3, 1) = 4*(nz+j*nz) - 2
        P_mat(3+floor_ind, 3, 2) = 2

        P_mat(4+floor_ind, 1, 1) = 4*(nz+(j-1)*nz) - 2
        P_mat(4+floor_ind, 1, 2) = 2
        P_mat(4+floor_ind, 2, 1) = 4*(1+(j-1)*nz) - 3
        P_mat(4+floor_ind, 2, 2) = 0
        P_mat(4+floor_ind, 3, 1) = 4*(nz+(j-2)*nz)
        P_mat(4+floor_ind, 3, 2) = 2

        P_mat(5+floor_ind, 1, 1) = 4*(nz+(j-1)*nz)
        P_mat(5+floor_ind, 1, 2) = 2
        P_mat(5+floor_ind, 2, 1) = 4*(nz-1+(j-1)*nz) - 1
        P_mat(5+floor_ind, 2, 2) = 2
        P_mat(5+floor_ind, 3, 1) = 4*(nz+j*nz) - 2
        P_mat(5+floor_ind, 3, 2) = 2

        P_mat(6+floor_ind, 1, 1) = 4*(nz+j*nz) - 2
        P_mat(6+floor_ind, 1, 2) = 2
        P_mat(6+floor_ind, 2, 1) = 4*(1+(j-1)*nz) - 3
        P_mat(6+floor_ind, 2, 2) = 0
        P_mat(6+floor_ind, 3, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(6+floor_ind, 3, 2) = 2

        P_mat(7+floor_ind, 1, 1) = 4*(nz+j*nz) - 2
        P_mat(7+floor_ind, 1, 2) = 2
        P_mat(7+floor_ind, 2, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(7+floor_ind, 2, 2) = 2
        P_mat(7+floor_ind, 3, 1) = 4*(1+j*nz) - 3
        P_mat(7+floor_ind, 3, 2) = 0

        P_mat(8+floor_ind, 1, 1) = 4*(1+j*nz) - 3
        P_mat(8+floor_ind, 1, 2) = 0
        P_mat(8+floor_ind, 2, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(8+floor_ind, 2, 2) = 2
        P_mat(8+floor_ind, 3, 1) = 4*(1+(j-1)*nz)
        P_mat(8+floor_ind, 3, 2) = 0

        floor_ind = floor_ind + 8
    REPEAT

    P_mat(1+floor_ind, 1, 1) = 4*(nz+(nx-2)*nz)
    P_mat(1+floor_ind, 1, 2) = 2
    P_mat(1+floor_ind, 2, 1) = 4*(nz-1+(nx-1)*nz) - 1
    P_mat(1+floor_ind, 2, 2) = 2
    P_mat(1+floor_ind, 3, 1) = 4*(nz+(nx-1)*nz) - 3
    P_mat(1+floor_ind, 3, 2) = 2

    P_mat(2+floor_ind, 1, 1) = 4*(nz-1+(nx-1)*nz) - 1
    P_mat(2+floor_ind, 1, 2) = 2
    P_mat(2+floor_ind, 2, 1) = 4*(nz+(nx-2)*nz)
    P_mat(2+floor_ind, 2, 2) = 2
    P_mat(2+floor_ind, 3, 1) = 4*nz - 2
    P_mat(2+floor_ind, 3, 2) = 6

    P_mat(3+floor_ind, 1, 1) = 4*(nz+(nx-2)*nz)
    P_mat(3+floor_ind, 1, 2) = 2
    P_mat(3+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 0
    P_mat(3+floor_ind, 3, 1) = 4*nz - 2
    P_mat(3+floor_ind, 3, 2) = 6

    P_mat(4+floor_ind, 1, 1) = 4*(nz+(nx-1)*nz) - 2
    P_mat(4+floor_ind, 1, 2) = 2
    P_mat(4+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 2, 2) = 0
    P_mat(4+floor_ind, 3, 1) = 4*(nz+(nx-2)*nz)
    P_mat(4+floor_ind, 3, 2) = 2

    P_mat(5+floor_ind, 1, 1) = 4*(nz+(nx-1)*nz)
    P_mat(5+floor_ind, 1, 2) = 2
    P_mat(5+floor_ind, 2, 1) = 4*(nz-1+(nx-1)*nz) - 1
    P_mat(5+floor_ind, 2, 2) = 2
    P_mat(5+floor_ind, 3, 1) = 4*nz - 2
    P_mat(5+floor_ind, 3, 2) = 6

    P_mat(6+floor_ind, 1, 1) = 4*nz - 2
    P_mat(6+floor_ind, 1, 2) = 6
    P_mat(6+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 2, 2) = 0
    P_mat(6+floor_ind, 3, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(6+floor_ind, 3, 2) = 2

    P_mat(7+floor_ind, 1, 1) = 4*nz - 2
    P_mat(7+floor_ind, 1, 2) = 6
    P_mat(7+floor_ind, 2, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(7+floor_ind, 2, 2) = 2
    P_mat(7+floor_ind, 3, 1) = 1
    P_mat(7+floor_ind, 3, 2) = 7

    P_mat(8+floor_ind, 1, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(8+floor_ind, 1, 2) = 2
    P_mat(8+floor_ind, 2, 1) = 4*(1+(nx-1)*nz)
    P_mat(8+floor_ind, 2, 2) = 0
    P_mat(8+floor_ind, 3, 1) = 1
    P_mat(8+floor_ind, 3, 2) = 7

    floor_ind = floor_ind + 8

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(1+floor_ind, 1, 2) = 4
    P_mat(1+floor_ind, 2, 1) = 4*nz - 1
    P_mat(1+floor_ind, 2, 2) = 0
    P_mat(1+floor_ind, 3, 1) = 1
    P_mat(1+floor_ind, 3, 2) = 5

    P_mat(2+floor_ind, 1, 1) = 4*nz - 1
    P_mat(2+floor_ind, 1, 2) = 0
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-1)*nz)
    P_mat(2+floor_ind, 2, 2) = 4
    P_mat(2+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(2+floor_ind, 3, 2) = 5

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(3+floor_ind, 1, 2) = 4
    P_mat(3+floor_ind, 2, 1) = 5
    P_mat(3+floor_ind, 2, 2) = 5
    P_mat(3+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(3+floor_ind, 3, 2) = 5

    P_mat(4+floor_ind, 1, 1) = 2
    P_mat(4+floor_ind, 1, 2) = 5
    P_mat(4+floor_ind, 2, 1) = 5
    P_mat(4+floor_ind, 2, 2) = 5
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-1)*nz)
    P_mat(4+floor_ind, 3, 2) = 4

    P_mat(5+floor_ind, 1, 1) = 4
    P_mat(5+floor_ind, 1, 2) = 5
    P_mat(5+floor_ind, 2, 1) = 4*nz - 1
    P_mat(5+floor_ind, 2, 2) = 0
    P_mat(5+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(5+floor_ind, 3, 2) = 5

    P_mat(6+floor_ind, 1, 1) = 4*(1+nz) - 2
    P_mat(6+floor_ind, 1, 2) = 5
    P_mat(6+floor_ind, 2, 1) = 5
    P_mat(6+floor_ind, 2, 2) = 5
    P_mat(6+floor_ind, 3, 1) = 3
    P_mat(6+floor_ind, 3, 2) = 5

    P_mat(7+floor_ind, 1, 1) = 4*2*nz - 2
    P_mat(7+floor_ind, 1, 2) = 0
    P_mat(7+floor_ind, 2, 1) = 4*nz - 1
    P_mat(7+floor_ind, 2, 2) = 0
    P_mat(7+floor_ind, 3, 1) = 4*(1+nz) - 3
    P_mat(7+floor_ind, 3, 2) = 5

    P_mat(8+floor_ind, 1, 1) = 4*nz - 1
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4
    P_mat(8+floor_ind, 2, 2) = 5
    P_mat(8+floor_ind, 3, 1) = 4*(1+nz) - 3
    P_mat(8+floor_ind, 3, 2) = 5

    floor_ind = floor_ind + 8

    LOOP FOR j = 2 TO nx-1
        P_mat(1+floor_ind, 1, 1) = 4*(1+(j-2)*nz)
        P_mat(1+floor_ind, 1, 2) = 5
        P_mat(1+floor_ind, 2, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(1+floor_ind, 2, 2) = 0
        P_mat(1+floor_ind, 3, 1) = 4*(1+(j-1)*nz) - 3
        P_mat(1+floor_ind, 3, 2) = 5

        P_mat(2+floor_ind, 1, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(2+floor_ind, 1, 2) = 0
        P_mat(2+floor_ind, 2, 1) = 4*(1+(j-2)*nz)
        P_mat(2+floor_ind, 2, 2) = 5
        P_mat(2+floor_ind, 3, 1) = 4*(1+j*nz) - 2
        P_mat(2+floor_ind, 3, 2) = 5

        P_mat(3+floor_ind, 1, 1) = 4*(1+(j-2)*nz)
        P_mat(3+floor_ind, 1, 2) = 5
        P_mat(3+floor_ind, 2, 1) = 4*(2+(j-1)*nz) - 3
        P_mat(3+floor_ind, 2, 2) = 5
        P_mat(3+floor_ind, 3, 1) = 4*(1+j*nz) - 2
        P_mat(3+floor_ind, 3, 2) = 5

        P_mat(4+floor_ind, 1, 1) = 4*(1+(j-1)*nz) - 2
        P_mat(4+floor_ind, 1, 2) = 5
        P_mat(4+floor_ind, 2, 1) = 4*(2+(j-1)*nz) - 3
        P_mat(4+floor_ind, 2, 2) = 5
        P_mat(4+floor_ind, 3, 1) = 4*(1+(j-2)*nz)
        P_mat(4+floor_ind, 3, 2) = 5

        P_mat(5+floor_ind, 1, 1) = 4*(1+(j-1)*nz)
        P_mat(5+floor_ind, 1, 2) = 5
        P_mat(5+floor_ind, 2, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(5+floor_ind, 2, 2) = 0
        P_mat(5+floor_ind, 3, 1) = 4*(1+j*nz) - 2
        P_mat(5+floor_ind, 3, 2) = 5

        P_mat(6+floor_ind, 1, 1) = 4*(1+j*nz) - 2
        P_mat(6+floor_ind, 1, 2) = 5
        P_mat(6+floor_ind, 2, 1) = 4*(2+(j-1)*nz) - 3
        P_mat(6+floor_ind, 2, 2) = 5
        P_mat(6+floor_ind, 3, 1) = 4*(1+(j-1)*nz) - 1
        P_mat(6+floor_ind, 3, 2) = 5

        P_mat(7+floor_ind, 1, 1) = 4*(nz+j*nz) - 2
        P_mat(7+floor_ind, 1, 2) = 0
        P_mat(7+floor_ind, 2, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(7+floor_ind, 2, 2) = 0
        P_mat(7+floor_ind, 3, 1) = 4*(1+j*nz) - 3
        P_mat(7+floor_ind, 3, 2) = 5

        P_mat(8+floor_ind, 1, 1) = 4*(nz+(j-1)*nz) - 1
        P_mat(8+floor_ind, 1, 2) = 0
        P_mat(8+floor_ind, 2, 1) = 4*(1+(j-1)*nz)
        P_mat(8+floor_ind, 2, 2) = 5
        P_mat(8+floor_ind, 3, 1) = 4*(1+j*nz) - 3
        P_mat(8+floor_ind, 3, 2) = 5

        floor_ind = floor_ind + 8
    REPEAT

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(1+floor_ind, 1, 2) = 5
    P_mat(1+floor_ind, 2, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(1+floor_ind, 2, 2) = 0
    P_mat(1+floor_ind, 3, 1) = 4*(1+(nx-1)*nx) - 3
    P_mat(1+floor_ind, 3, 2) = 5

    P_mat(2+floor_ind, 1, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(2+floor_ind, 1, 2) = 0
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-2)*nz)
    P_mat(2+floor_ind, 2, 2) = 5
    P_mat(2+floor_ind, 3, 1) = 2
    P_mat(2+floor_ind, 3, 2) = 8

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-2)*nz)
    P_mat(3+floor_ind, 1, 2) = 5
    P_mat(3+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(3+floor_ind, 2, 2) = 5
    P_mat(3+floor_ind, 3, 1) = 2
    P_mat(3+floor_ind, 3, 2) = 8

    P_mat(4+floor_ind, 1, 1) = 4*(1+(nx-1)*nz) - 2
    P_mat(4+floor_ind, 1, 2) = 5
    P_mat(4+floor_ind, 2, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(4+floor_ind, 2, 2) = 5
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-2)*nz)
    P_mat(4+floor_ind, 3, 2) = 5

    P_mat(5+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(5+floor_ind, 1, 2) = 5
    P_mat(5+floor_ind, 2, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(5+floor_ind, 2, 2) = 0
    P_mat(5+floor_ind, 3, 1) = 2
    P_mat(5+floor_ind, 3, 2) = 8

    P_mat(6+floor_ind, 1, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(6+floor_ind, 1, 2) = 5
    P_mat(6+floor_ind, 2, 1) = 2
    P_mat(6+floor_ind, 2, 2) = 8
    P_mat(6+floor_ind, 3, 1) = 4*(2+(nx-1)*nz) - 3
    P_mat(6+floor_ind, 3, 2) = 5

    P_mat(7+floor_ind, 1, 1) = 4*nz - 2
    P_mat(7+floor_ind, 1, 2) = 7
    P_mat(7+floor_ind, 2, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(7+floor_ind, 2, 2) = 0
    P_mat(7+floor_ind, 3, 1) = 1
    P_mat(7+floor_ind, 3, 2) = 8

    P_mat(8+floor_ind, 1, 1) = 4*(nz+(nx-1)*nz) - 1
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4*(1+(nx-1)*nz)
    P_mat(8+floor_ind, 2, 2) = 5
    P_mat(8+floor_ind, 3, 1) = 1
    P_mat(8+floor_ind, 3, 2) = 8

    floor_ind = floor_ind + 8

    P_mat(1+floor_ind, 1, 1) = 4*nz*nx
    P_mat(1+floor_ind, 1, 2) = 2
    P_mat(1+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(1+floor_ind, 2, 2) = 6
    P_mat(1+floor_ind, 3, 1) = 4*nz - 3
    P_mat(1+floor_ind, 3, 2) = 6

    P_mat(2+floor_ind, 1, 1) = 4*(nz-1) - 1
    P_mat(2+floor_ind, 1, 2) = 6
    P_mat(2+floor_ind, 2, 1) = 4*nz*nx
    P_mat(2+floor_ind, 2, 2) = 2
    P_mat(2+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(2+floor_ind, 3, 2) = 6

    P_mat(3+floor_ind, 1, 1) = 4*nz*nx
    P_mat(3+floor_ind, 1, 2) = 2
    P_mat(3+floor_ind, 2, 1) = 1
    P_mat(3+floor_ind, 2, 2) = 7
    P_mat(3+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(3+floor_ind, 3, 2) = 6

    P_mat(4+floor_ind, 1, 1) = 4*nz - 2
    P_mat(4+floor_ind, 1, 2) = 6
    P_mat(4+floor_ind, 2, 1) = 1
    P_mat(4+floor_ind, 2, 2) = 7
    P_mat(4+floor_ind, 3, 1) = 4*nz*nx
    P_mat(4+floor_ind, 3, 2) = 2

    P_mat(5+floor_ind, 1, 1) = 4*nz
    P_mat(5+floor_ind, 1, 2) = 6
    P_mat(5+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(5+floor_ind, 2, 2) = 6
    P_mat(5+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(5+floor_ind, 3, 2) = 6

    P_mat(6+floor_ind, 1, 1) = 4*nz - 1
    P_mat(6+floor_ind, 1, 2) = 6
    P_mat(6+floor_ind, 2, 1) = 4*2*nz - 2
    P_mat(6+floor_ind, 2, 2) = 6
    P_mat(6+floor_ind, 3, 1) = 1
    P_mat(6+floor_ind, 3, 2) = 7

    floor_ind = floor_ind + 6

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(1+floor_ind, 1, 2) = 0
    P_mat(1+floor_ind, 2, 1) = 4*nz - 1
    P_mat(1+floor_ind, 2, 2) = 6
    P_mat(1+floor_ind, 3, 1) = 1
    P_mat(1+floor_ind, 3, 2) = 7

    P_mat(2+floor_ind, 1, 1) = 4*nz - 1
    P_mat(2+floor_ind, 1, 2) = 6
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-1)*nz)
    P_mat(2+floor_ind, 2, 2) = 0
    P_mat(2+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(2+floor_ind, 3, 2) = 7

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(3+floor_ind, 1, 2) = 0
    P_mat(3+floor_ind, 2, 1) = 5
    P_mat(3+floor_ind, 2, 2) = 7
    P_mat(3+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(3+floor_ind, 3, 2) = 7

    P_mat(4+floor_ind, 1, 1) = 2
    P_mat(4+floor_ind, 1, 2) = 7
    P_mat(4+floor_ind, 2, 1) = 5
    P_mat(4+floor_ind, 2, 2) = 7
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-1)*nz)
    P_mat(4+floor_ind, 3, 2) = 0

    P_mat(5+floor_ind, 1, 1) = 4
    P_mat(5+floor_ind, 1, 2) = 7
    P_mat(5+floor_ind, 2, 1) = 4*nz - 1
    P_mat(5+floor_ind, 2, 2) = 6
    P_mat(5+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(5+floor_ind, 3, 2) = 7

    P_mat(6+floor_ind, 1, 1) = 3
    P_mat(6+floor_ind, 1, 2) = 7
    P_mat(6+floor_ind, 2, 1) = 4*(1+nz) - 2
    P_mat(6+floor_ind, 2, 2) = 7
    P_mat(6+floor_ind, 3, 1) = 5
    P_mat(6+floor_ind, 3, 2) = 7

    P_mat(7+floor_ind, 1, 1) = 2
    P_mat(7+floor_ind, 1, 2) = 7
    P_mat(7+floor_ind, 2, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(7+floor_ind, 2, 2) = 0
    P_mat(7+floor_ind, 3, 1) = 5
    P_mat(7+floor_ind, 3, 2) = 7

    P_mat(8+floor_ind, 1, 1) = 4*(1+(nx-1)*nz) - 1
    P_mat(8+floor_ind, 1, 2) = 0
    P_mat(8+floor_ind, 2, 1) = 4*(2+(nx-1)*nz)
    P_mat(8+floor_ind, 2, 2) = 0
    P_mat(8+floor_ind, 3, 1) = 5
    P_mat(8+floor_ind, 3, 2) = 7

    floor_ind = floor_ind + 8

    LOOP FOR i = 2 TO nz-1
        P_mat(1+floor_ind, 1, 1) = 4*(i+(nx-1)*nz)
        P_mat(1+floor_ind, 1, 2) = 0
        P_mat(1+floor_ind, 2, 1) = 4*(i-1) - 1 
        P_mat(1+floor_ind, 2, 2) = 7
        P_mat(1+floor_ind, 3, 1) = 4*i - 3
        P_mat(1+floor_ind, 3, 2) = 7

        P_mat(2+floor_ind, 1, 1) = 4*(i-1) - 1
        P_mat(2+floor_ind, 1, 2) = 7
        P_mat(2+floor_ind, 2, 1) = 4*(i+(nx-1)*nz)
        P_mat(2+floor_ind, 2, 2) = 0
        P_mat(2+floor_ind, 3, 1) = 4*(i+nz) - 2
        P_mat(2+floor_ind, 3, 2) = 7

        P_mat(3+floor_ind, 1, 1) = 4*(i+(nx-1)*nz)
        P_mat(3+floor_ind, 1, 2) = 0
        P_mat(3+floor_ind, 2, 1) = 4*(i+1) - 3
        P_mat(3+floor_ind, 2, 2) = 7
        P_mat(3+floor_ind, 3, 1) = 4*(i+nz) - 2
        P_mat(3+floor_ind, 3, 2) = 7

        P_mat(4+floor_ind, 1, 1) = 4*i - 2
        P_mat(4+floor_ind, 1, 2) = 7
        P_mat(4+floor_ind, 2, 1) = 4*(i+1) - 3
        P_mat(4+floor_ind, 2, 2) = 7
        P_mat(4+floor_ind, 3, 1) = 4*(i+(nx-1)*nz)
        P_mat(4+floor_ind, 3, 2) = 0

        P_mat(5+floor_ind, 1, 1) = 4*i
        P_mat(5+floor_ind, 1, 2) = 7
        P_mat(5+floor_ind, 2, 1) = 4*(i-1) - 1
        P_mat(5+floor_ind, 2, 2) = 7
        P_mat(5+floor_ind, 3, 1) = 4*(i+nz) - 2
        P_mat(5+floor_ind, 3, 2) = 7

        P_mat(6+floor_ind, 1, 1) = 4*i - 1
        P_mat(6+floor_ind, 1, 2) = 7
        P_mat(6+floor_ind, 2, 1) = 4*(i+nz) - 2
        P_mat(6+floor_ind, 2, 2) = 7
        P_mat(6+floor_ind, 3, 1) = 4*(i+1) - 3
        P_mat(6+floor_ind, 3, 2) = 7

        P_mat(7+floor_ind, 1, 1) = 4*i - 2
        P_mat(7+floor_ind, 1, 2) = 7
        P_mat(7+floor_ind, 2, 1) = 4*(i+(nx-1)*nz) - 1
        P_mat(7+floor_ind, 2, 2) = 0
        P_mat(7+floor_ind, 3, 1) = 4*(i+1) - 3
        P_mat(7+floor_ind, 3, 2) = 7

        P_mat(8+floor_ind, 1, 1) = 4*(i+(nx-1)*nz) - 1
        P_mat(8+floor_ind, 1, 2) = 0
        P_mat(8+floor_ind, 2, 1) = 4*(i+1+(nx-1)*nz)
        P_mat(8+floor_ind, 2, 2) = 0
        P_mat(8+floor_ind, 3, 1) = 4*(i+1) - 3
        P_mat(8+floor_ind, 3, 2) = 7

        floor_ind = floor_ind + 8
    REPEAT

    P_mat(1+floor_ind, 1, 1) = 4*nz*nx
    P_mat(1+floor_ind, 1, 2) = 0
    P_mat(1+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(1+floor_ind, 2, 2) = 7
    P_mat(1+floor_ind, 3, 1) = 4*nz - 3
    P_mat(1+floor_ind, 3, 2) = 7

    P_mat(2+floor_ind, 1, 1) = 4*(nz-1) - 1
    P_mat(2+floor_ind, 1, 2) = 7
    P_mat(2+floor_ind, 2, 1) = 4*nz*nx
    P_mat(2+floor_ind, 2, 2) = 0
    P_mat(2+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(2+floor_ind, 3, 2) = 7

    P_mat(3+floor_ind, 1, 1) = 4*nz*nx
    P_mat(3+floor_ind, 1, 2) = 0
    P_mat(3+floor_ind, 2, 1) = 1
    P_mat(3+floor_ind, 2, 2) = 8
    P_mat(3+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(3+floor_ind, 3, 2) = 7

    P_mat(4+floor_ind, 1, 1) = 4*nz - 2
    P_mat(4+floor_ind, 1, 2) = 7
    P_mat(4+floor_ind, 2, 1) = 1
    P_mat(4+floor_ind, 2, 2) = 8
    P_mat(4+floor_ind, 3, 1) = 4*nz*nx
    P_mat(4+floor_ind, 3, 2) = 0

    P_mat(5+floor_ind, 1, 1) = 4*nz
    P_mat(5+floor_ind, 1, 2) = 7
    P_mat(5+floor_ind, 2, 1) = 4*(nz-1) - 1
    P_mat(5+floor_ind, 2, 2) = 7
    P_mat(5+floor_ind, 3, 1) = 4*2*nz - 2
    P_mat(5+floor_ind, 3, 2) = 7

    P_mat(6+floor_ind, 1, 1) = 4*nz - 1
    P_mat(6+floor_ind, 1, 2) = 7
    P_mat(6+floor_ind, 2, 1) = 4*2*nz - 2
    P_mat(6+floor_ind, 2, 2) = 7
    P_mat(6+floor_ind, 3, 1) = 1
    P_mat(6+floor_ind, 3, 2) = 8

    floor_ind = floor_ind + 6

    P_mat(1+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(1+floor_ind, 1, 2) = 5
    P_mat(1+floor_ind, 2, 1) = 4*nz - 1
    P_mat(1+floor_ind, 2, 2) = 7
    P_mat(1+floor_ind, 3, 1) = 1
    P_mat(1+floor_ind, 3, 2) = 8  

    P_mat(2+floor_ind, 1, 1) = 4*nz - 1
    P_mat(2+floor_ind, 1, 2) = 7
    P_mat(2+floor_ind, 2, 1) = 4*(1+(nx-1)*nz)
    P_mat(2+floor_ind, 2, 2) = 5
    P_mat(2+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(2+floor_ind, 3, 2) = 8

    P_mat(3+floor_ind, 1, 1) = 4*(1+(nx-1)*nz)
    P_mat(3+floor_ind, 1, 2) = 5
    P_mat(3+floor_ind, 2, 1) = 5
    P_mat(3+floor_ind, 2, 2) = 8
    P_mat(3+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(3+floor_ind, 3, 2) = 8

    P_mat(4+floor_ind, 1, 1) = 2
    P_mat(4+floor_ind, 1, 2) = 8
    P_mat(4+floor_ind, 2, 1) = 5
    P_mat(4+floor_ind, 2, 2) = 8
    P_mat(4+floor_ind, 3, 1) = 4*(1+(nx-1)*nz)
    P_mat(4+floor_ind, 3, 2) = 5

    P_mat(5+floor_ind, 1, 1) = 4
    P_mat(5+floor_ind, 1, 2) = 8
    P_mat(5+floor_ind, 2, 1) = 4*nz - 1
    P_mat(5+floor_ind, 2, 2) = 7
    P_mat(5+floor_ind, 3, 1) = 4*(1+nz) - 2
    P_mat(5+floor_ind, 3, 2) = 8

    P_mat(6+floor_ind, 1, 1) = 3
    P_mat(6+floor_ind, 1, 2) = 8
    P_mat(6+floor_ind, 2, 1) = 4*(1+nz) - 2
    P_mat(6+floor_ind, 2, 2) = 8
    P_mat(6+floor_ind, 3, 1) = 5
    P_mat(6+floor_ind, 3, 2) = 8

END P_comp
