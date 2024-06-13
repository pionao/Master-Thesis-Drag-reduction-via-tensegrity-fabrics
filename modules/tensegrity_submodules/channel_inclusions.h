TENSEGRITY = STRUCTURE[ INTEGER CONSTANT nx,nz,n_C,n_B,n_T,n_G,n_N,n_N_dof,n_T_dof,n_q_tilde,n_P,n_int,n_tri_int,n_t;
                         REAL rho_b,k,sigma,h,r,l_b,I_0,alpha_1,l_per,l_v_1,l_h_1,
                              l_u_l,l_u_s,l_u_l_0,l_h_0,l_u_s_0,l_i_0,; 
                         ARRAY(n_B,2) OF INTEGER B_con;
                         ARRAY(n_T,2) OF INTEGER T_con;
                         ARRAY(n_G,3) OF INTEGER ghost_nodes;
                         ARRAY(n_T) OF REAL l_0;
                         ARRAY(n_P,3,2) OF INTEGER P_mat;
                         ARRAY(n_tri_int,3) OF REAL bar_lambda_mat;
                         ARRAY(n_N_dof) OF REAL X_0;
                         ARRAY(n_q_tilde) OF REAL q_0_tilde;
                         ARRAY(n_t) OF REAL t_vec;
                         ARRAY(n_N_dof) OF REAL X, X_dot;
                         ARRAY(n_q_tilde) OF REAL q_tilde;
                         ARRAY(n_q_tilde,n_t) OF REAL q_tilde_arr;
                         ARRAY(3) OF REAL bar_weights;
                         ARRAY(2,3) OF REAL vert_pos;
                         ARRAY(3) OF REAL vert_vel_zy;
                         POINTER TO REAL time
		   ]

SUBROUTINE X_dot_comp(ARRAY(*) OF REAL X_dot^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; REAL l_b; ARRAY(*) OF REAL q_tilde; ARRAY(*,*) OF INTEGER ghost_nodes)

    LOOP FOR i = 1 TO FLOOR((n_N-n_G)/2)
        X_dot(3*i-2) = l_b*[COS(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i-1)-SIN(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i)]
        X_dot(3*i-1) = l_b*[COS(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i-1)+SIN(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))*q_tilde(2*i)]
        X_dot(3*i)   = -l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*q_tilde(2*i-1)
    REPEAT

    LOOP FOR i = 1 TO n_G
        ghost_ind  = ghost_nodes(i, 1)
        parent_ind = ghost_nodes(i, 2)

        X_dot(3*ghost_ind-2) = X_dot(3*parent_ind-2)
        X_dot(3*ghost_ind-1) = X_dot(3*parent_ind-1)
        X_dot(3*ghost_ind)   = X_dot(3*parent_ind)
    REPEAT
END X_dot_comp

SUBROUTINE X_comp(ARRAY(*) OF REAL X^; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; INTEGER nx; INTEGER nz; REAL l_per; REAL l_b; ARRAY(*) OF REAL q_tilde; ARRAY(*) OF REAL X_0; ARRAY(*,*) OF INTEGER ghost_nodes)

    X = X_0

    LOOP FOR i = 1 TO FLOOR((n_N-n_G)/2)
        X(3*i-2) = X_0(3*i-2+3*FLOOR((n_N-n_G)/2)) + l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*COS(q_tilde(2*i+(n_N-n_G)))
        X(3*i-1) = X_0(3*i-1+3*FLOOR((n_N-n_G)/2)) + l_b*SIN(q_tilde(2*i-1+(n_N-n_G)))*SIN(q_tilde(2*i+(n_N-n_G)))
        X(3*i)   = X_0(3*i  +3*FLOOR((n_N-n_G)/2)) + l_b*COS(q_tilde(2*i-1+(n_N-n_G)))
    REPEAT

    LOOP FOR i = 1 TO n_G
        ghost_ind  = ghost_nodes(i, 1)
        parent_ind = ghost_nodes(i, 2)
        per_dir    = ghost_nodes(i, 3)

        IF per_dir = 1 THEN
            X(3*ghost_ind-2) = X(3*parent_ind-2) - nx*l_per
            X(3*ghost_ind-1) = X(3*parent_ind-1) 
            X(3*ghost_ind)   = X(3*parent_ind)
        ELSE IF per_dir = 2 THEN
            X(3*ghost_ind-2) = X(3*parent_ind-2) 
            X(3*ghost_ind-1) = X(3*parent_ind-1)
            X(3*ghost_ind)   = X(3*parent_ind)   - nz*l_per
        ELSE IF per_dir = 3 THEN
            X(3*ghost_ind-2) = X(3*parent_ind-2) 
            X(3*ghost_ind-1) = X(3*parent_ind-1)
            X(3*ghost_ind)   = X(3*parent_ind)   + nz*l_per
        ELSE IF per_dir = 4 THEN
            X(3*ghost_ind-2) = X(3*parent_ind-2) + nx*l_per
            X(3*ghost_ind-1) = X(3*parent_ind-1) 
            X(3*ghost_ind)   = X(3*parent_ind)
        END IF
    REPEAT
END X_comp


SUBROUTINE df_comp(ARRAY(3) OF REAL df^, x, normal; REAL t, dA, Lx, Lz, l_per; INTEGER nx, nz)
  !PI = 3.14159265359  
  REAL c = 2
  REAL A = 20
  INTEGER n_per = 6
  REAL k_z = (2*PI*n_per)/(l_per*nz)

  REAL p = A*COS(k_z*(x(3)-c*t))
  !REAL p = A
  df(1) = -p*dA*normal(1)
  df(2) = -p*dA*normal(2)
  df(3) = -p*dA*normal(3)
END df_comp

SUBROUTINE f_ext_sub(ARRAY(*) OF REAL f_ext^; INTEGER n_B, n_P, n_N, n_N_dof, n_G, nx, nz, n_int; REAL t, l_per, l_b; ARRAY(*) OF REAL X_0; ARRAY(*) OF REAL q_tilde; ARRAY(*,*) OF INTEGER ghost_nodes; ARRAY(*,3) OF REAL bar_lambda_mat; ARRAY(*,*,*) OF INTEGER P_mat)

  ARRAY(3*n_N) OF REAL X = 0
  X_comp(X, n_N_dof, n_N, n_G, nx, nz, l_per, l_b, q_tilde, X_0, ghost_nodes)

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    f_ext(3*i)   = 0
  REPEAT

  ARRAY(3) OF REAL normal, dir_1, dir_2, X_1, X_2, X_3, x, df = 0
  INTEGER ind_1, ind_2, ind_3 = 0
  REAL lambda_1, lambda_2, lambda_3 = 0
  REAL dA = 0

  REAL Lx, Lz
  Lx = l_per*nx
  Lz = l_per*nz

  REAL d_lambda = 1 / (n_int-1)

  LOOP FOR i = 1 TO n_P
    ind_1 = P_mat(i, 1, 1)
    ind_2 = P_mat(i, 2, 1)
    ind_3 = P_mat(i, 3, 1)

    X_1(1) = X(3*ind_1 - 2)
    X_1(2) = X(3*ind_1 - 1)
    X_1(3) = X(3*ind_1)

    X_2(1) = X(3*ind_2 - 2)
    X_2(2) = X(3*ind_2 - 1)
    X_2(3) = X(3*ind_2)

    X_3(1) = X(3*ind_3 - 2)
    X_3(2) = X(3*ind_3 - 1)
    X_3(3) = X(3*ind_3)

    CASE P_mat(i, 1, 2) OF
        1:
            X_1(1) = X_1(1) - nx*l_per
            X_1(3) = X_1(3) - nz*l_per
        2:
            X_1(3) = X_1(3) - nz*l_per
        3:
            X_1(1) = X_1(1) - nx*l_per
        4:
            X_1(1) = X_1(1) - nx*l_per
            X_1(3) = X_1(3) + nz*l_per
        5:
            X_1(3) = X_1(3) + nz*l_per
        6:
            X_1(1) = X_1(1) + nx*l_per
            X_1(3) = X_1(3) - nz*l_per
        7:
            X_1(1) = X_1(1) + nx*l_per
        8:
            X_1(1) = X_1(1) + nx*l_per
            X_1(3) = X_1(3) + nz*l_per
    END CASE

    CASE P_mat(i, 2, 2) OF
        1:
            X_2(1) = X_2(1) - nx*l_per
            X_2(3) = X_2(3) - nz*l_per
        2:
            X_2(3) = X_2(3) - nz*l_per
        3:
            X_2(1) = X_2(1) - nx*l_per
        4:
            X_2(1) = X_2(1) - nx*l_per
            X_2(3) = X_2(3) + nz*l_per
        5:
            X_2(3) = X_2(3) + nz*l_per
        6:
            X_2(1) = X_2(1) + nx*l_per
            X_2(3) = X_2(3) - nz*l_per
        7:
            X_2(1) = X_2(1) + nx*l_per
        8:
            X_2(1) = X_2(1) + nx*l_per
            X_2(3) = X_2(3) + nz*l_per
    END CASE

    CASE P_mat(i, 3, 2) OF
        1:
            X_3(1) = X_3(1) - nx*l_per
            X_3(3) = X_3(3) - nz*l_per
        2:
            X_3(3) = X_3(3) - nz*l_per
        3:
            X_3(1) = X_3(1) - nx*l_per
        4:
            X_3(1) = X_3(1) - nx*l_per
            X_3(3) = X_3(3) + nz*l_per
        5:
            X_3(3) = X_3(3) + nz*l_per
        6:
            X_3(1) = X_3(1) + nx*l_per
            X_3(3) = X_3(3) - nz*l_per
        7:
            X_3(1) = X_3(1) + nx*l_per
        8:
            X_3(1) = X_3(1) + nx*l_per
            X_3(3) = X_3(3) + nz*l_per
    END CASE

    dir_1(1) = X_2(1) - X_1(1)
    dir_1(2) = X_2(2) - X_1(2)
    dir_1(3) = X_2(3) - X_1(3)

    dir_2(1) = X_3(1) - X_1(1)
    dir_2(2) = X_3(2) - X_1(2)
    dir_2(3) = X_3(3) - X_1(3)
    
    normal(1) = dir_1(2)*dir_2(3) - dir_2(2)*dir_1(3)
    normal(2) = dir_2(1)*dir_1(3) - dir_1(1)*dir_2(3)
    normal(3) = dir_1(1)*dir_2(2) - dir_2(1)*dir_1(2)

    normal_norm = SQRT(normal(1)^2 + normal(2)^2 + normal(3)^2)
    
    dA = (normal_norm / 2) / (n_int-1)^2

    LOOP FOR k = 1 TO 3
      normal(k) = normal(k) / normal_norm
    REPEAT

    LOOP FOR j = 1 TO (n_int-1)^2
      lambda_1 = bar_lambda_mat(j, 1)
      lambda_2 = bar_lambda_mat(j, 2)
      lambda_3 = bar_lambda_mat(j, 3)

      x(1) = lambda_1*X_1(1) + lambda_2*X_2(1) + lambda_3*X_3(1)
      x(2) = lambda_1*X_1(2) + lambda_2*X_2(2) + lambda_3*X_3(2)
      x(3) = lambda_1*X_1(3) + lambda_2*X_2(3) + lambda_3*X_3(3)

      df_comp(df, x, normal, t, dA, Lx, Lz, l_per, nx, nz)

      IF P_mat(i, 1, 2) = 0 AND ind_1 <= n_B THEN
        f_ext(3*ind_1-2) = f_ext(3*ind_1-2) + lambda_1*df(1)
        f_ext(3*ind_1-1) = f_ext(3*ind_1-1) + lambda_1*df(2)
        f_ext(3*ind_1)   = f_ext(3*ind_1)   + lambda_1*df(3)
      END IF
      IF P_mat(i, 2, 2) = 0 AND ind_2 <= n_B THEN
        f_ext(3*ind_2-2) = f_ext(3*ind_2-2) + lambda_2*df(1)
        f_ext(3*ind_2-1) = f_ext(3*ind_2-1) + lambda_2*df(2)
        f_ext(3*ind_2)   = f_ext(3*ind_2)   + lambda_2*df(3)
      END IF
      IF P_mat(i, 3, 2) = 0 AND ind_3 <= n_B THEN
        f_ext(3*ind_3-2) = f_ext(3*ind_3-2) + lambda_3*df(1)
        f_ext(3*ind_3-1) = f_ext(3*ind_3-1) + lambda_3*df(2)
        f_ext(3*ind_3)   = f_ext(3*ind_3)   + lambda_3*df(3)
      END IF
    REPEAT

    IF i = 125 AND normal(2)<0 THEN
      WRITE normal
    END IF

    !{IF t = 0.001 AND (f_ext(3*ind_1-1) > 0 OR f_ext(3*ind_2-1) > 0 OR f_ext(3*ind_3-1) > 0) THEN
      WRITE i, normal(2), df
      IF f_ext(3*ind_1-1) > 0 THEN
        WRITE f_ext(3*ind_1-1)
      ELSE IF f_ext(ind_2-1) > 0 THEN 
        WRITE f_ext(3*ind_2-1)
      ELSE IF f_ext(3*ind_3-1) > 0 THEN
        WRITE f_ext(3*ind_3-1)
      END IF
    END IF!}
    
  REPEAT





  !{LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    IF i > 4*(ind_mc-1) AND i <= 4*ind_mc THEN
      f_ext(3*i-1) = A*SIN(w*t)
    ELSE
      f_ext(3*i-1) = 0
    END IF
    f_ext(3*i) = 0
  REPEAT

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    f_ext(3*i) = 2
  REPEAT!}

END f_ext_sub


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
    P_mat(1+floor_ind, 3, 1) = 4*(1+(nx-1)*nz) - 3
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


SUBROUTINE bar_lambda_comp(ARRAY(*,3) OF REAL bar_lambda_mat^; INTEGER n_int)

    ARRAY(FLOOR(n_int*(n_int+1)/2), 3) OF REAL lambda_mat = 0

    REAL d_lambda = 1.0/(n_int-1)
    REAL lambda_1, lambda_2, lambda_3 = 0

    LOOP FOR i = 0 TO n_int-1
        LOOP FOR j = 0 TO n_int-i-1
            lambda_3 = i*d_lambda
            lambda_2 = j*d_lambda
            lambda_1 = 1.0 - lambda_2 - lambda_3

            lambda_mat(FLOOR(j+i*(2*n_int+1-i)/2+1), 1) = lambda_1
            lambda_mat(FLOOR(j+i*(2*n_int+1-i)/2+1), 2) = lambda_2
            lambda_mat(FLOOR(j+i*(2*n_int+1-i)/2+1), 3) = lambda_3
        REPEAT
    REPEAT

    INTEGER count = 1

    ARRAY(3) OF INTEGER sub_tri_vert_even = (1,     2,   n_int+1)
    ARRAY(3) OF INTEGER sub_tri_vert_odd  = (2, n_int+1, n_int+2)

    LOOP FOR i = 0 TO n_int-2
        LOOP FOR j = 0 TO 2*(n_int-i-1)-2
            IF j MOD 2 = 0 THEN
                bar_lambda_mat(count, 1) = (lambda_mat(sub_tri_vert_even(1) + FLOOR(j/2), 1) + lambda_mat(sub_tri_vert_even(2) + FLOOR(j/2), 1) + lambda_mat(sub_tri_vert_even(3) + FLOOR(j/2), 1)) / 3
                bar_lambda_mat(count, 2) = (lambda_mat(sub_tri_vert_even(1) + FLOOR(j/2), 2) + lambda_mat(sub_tri_vert_even(2) + FLOOR(j/2), 2) + lambda_mat(sub_tri_vert_even(3) + FLOOR(j/2), 2)) / 3
                bar_lambda_mat(count, 3) = (lambda_mat(sub_tri_vert_even(1) + FLOOR(j/2), 3) + lambda_mat(sub_tri_vert_even(2) + FLOOR(j/2), 3) + lambda_mat(sub_tri_vert_even(3) + FLOOR(j/2), 3)) / 3
            ELSE
                bar_lambda_mat(count, 1) = (lambda_mat(sub_tri_vert_odd(1) + FLOOR((j-1)/2), 1) + lambda_mat(sub_tri_vert_odd(2) + FLOOR((j-1)/2), 1) + lambda_mat(sub_tri_vert_odd(3) + FLOOR((j-1)/2), 1)) / 3
                bar_lambda_mat(count, 2) = (lambda_mat(sub_tri_vert_odd(1) + FLOOR((j-1)/2), 2) + lambda_mat(sub_tri_vert_odd(2) + FLOOR((j-1)/2), 2) + lambda_mat(sub_tri_vert_odd(3) + FLOOR((j-1)/2), 2)) / 3
                bar_lambda_mat(count, 3) = (lambda_mat(sub_tri_vert_odd(1) + FLOOR((j-1)/2), 3) + lambda_mat(sub_tri_vert_odd(2) + FLOOR((j-1)/2), 3) + lambda_mat(sub_tri_vert_odd(3) + FLOOR((j-1)/2), 3)) / 3
            END IF
            count = count + 1
        REPEAT
        sub_tri_vert_even(1) = sub_tri_vert_even(1) + n_int - i
        sub_tri_vert_even(2) = sub_tri_vert_even(2) + n_int - i
        sub_tri_vert_even(3) = sub_tri_vert_even(3) + n_int - i - 1

        sub_tri_vert_odd(1) = sub_tri_vert_odd(1) + n_int - i
        sub_tri_vert_odd(2) = sub_tri_vert_odd(2) + n_int - i - 1
        sub_tri_vert_odd(3) = sub_tri_vert_odd(3) + n_int - i - 1
    REPEAT
END bar_lambda_comp


! Cose in più per evitare doppie inclusioni


SUBROUTINE X_dot_comp_upd(TENSEGRITY this^)

    LOOP FOR i = 1 TO FLOOR((this.n_N-this.n_G)/2)
        this.X_dot(3*i-2) = this.l_b*[COS(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*COS(this.q_tilde(2*i+(this.n_N-this.n_G)))*this.q_tilde(2*i-1)-SIN(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*SIN(this.q_tilde(2*i+(this.n_N-this.n_G)))*this.q_tilde(2*i)]
        this.X_dot(3*i-1) = this.l_b*[COS(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*SIN(this.q_tilde(2*i+(this.n_N-this.n_G)))*this.q_tilde(2*i-1)+SIN(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*COS(this.q_tilde(2*i+(this.n_N-this.n_G)))*this.q_tilde(2*i)]
        this.X_dot(3*i)   = -this.l_b*SIN(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*this.q_tilde(2*i-1)
    REPEAT
    INTEGER ghost_ind, parent_ind
    LOOP FOR i = 1 TO this.n_G
        ghost_ind  = this.ghost_nodes(i, 1)
        parent_ind = this.ghost_nodes(i, 2)

        this.X_dot(3*ghost_ind-2) = this.X_dot(3*parent_ind-2)
        this.X_dot(3*ghost_ind-1) = this.X_dot(3*parent_ind-1)
        this.X_dot(3*ghost_ind)   = this.X_dot(3*parent_ind)
    REPEAT
END X_dot_comp_upd

SUBROUTINE X_comp_upd(TENSEGRITY this^)

    this.X = this.X_0

    LOOP FOR i = 1 TO FLOOR((this.n_N-this.n_G)/2)
        this.X(3*i-2) = this.X_0(3*i-2+3*FLOOR((this.n_N-this.n_G)/2)) + this.l_b*SIN(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*COS(this.q_tilde(2*i+(this.n_N-this.n_G)))
        this.X(3*i-1) = this.X_0(3*i-1+3*FLOOR((this.n_N-this.n_G)/2)) + this.l_b*SIN(this.q_tilde(2*i-1+(this.n_N-this.n_G)))*SIN(this.q_tilde(2*i+(this.n_N-this.n_G)))
        this.X(3*i)   = this.X_0(3*i  +3*FLOOR((this.n_N-this.n_G)/2)) + this.l_b*COS(this.q_tilde(2*i-1+(this.n_N-this.n_G)))
    REPEAT

    INTEGER ghost_ind, parent_ind, per_dir
    LOOP FOR i = 1 TO this.n_G
        ghost_ind  = this.ghost_nodes(i, 1)
        parent_ind = this.ghost_nodes(i, 2)
        per_dir    = this.ghost_nodes(i, 3)

        IF per_dir = 1 THEN
            this.X(3*ghost_ind-2) = this.X(3*parent_ind-2) - this.nx*this.l_per
            this.X(3*ghost_ind-1) = this.X(3*parent_ind-1) 
            this.X(3*ghost_ind)   = this.X(3*parent_ind)
        ELSE IF per_dir = 2 THEN
            this.X(3*ghost_ind-2) = this.X(3*parent_ind-2) 
            this.X(3*ghost_ind-1) = this.X(3*parent_ind-1)
            this.X(3*ghost_ind)   = this.X(3*parent_ind)   - this.nz*this.l_per
        ELSE IF per_dir = 3 THEN
            this.X(3*ghost_ind-2) = this.X(3*parent_ind-2) 
            this.X(3*ghost_ind-1) = this.X(3*parent_ind-1)
            this.X(3*ghost_ind)   = this.X(3*parent_ind)   + this.nz*this.l_per
        ELSE IF per_dir = 4 THEN
            this.X(3*ghost_ind-2) = this.X(3*parent_ind-2) + this.nx*this.l_per
            this.X(3*ghost_ind-1) = this.X(3*parent_ind-1) 
            this.X(3*ghost_ind)   = this.X(3*parent_ind)
        END IF
    REPEAT
END X_comp_upd


SUBROUTINE K_i_compute(ARRAY(*) OF REAL K_i^; TENSEGRITY this^; REAL t; ARRAY(*) OF REAL q_tilde)
    ARRAY(2*this.n_B) OF REAL Cq_dot
    ARRAY(3*this.n_B) OF REAL f_ext = 0
    ARRAY(2*this.n_B) OF REAL f_mom

     LOOP FOR i = 1 TO this.n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    f_ext(3*i)   = 0
  REPEAT

    ARRAY(3*this.n_B) OF REAL f_n = 0
    
    f_n_comp(f_n, this.n_N_dof, this.n_N, this.n_T, this.n_G, this.nx, this.nz, this.l_per, this.l_b, this.k, this.sigma, q_tilde, this.X_0, this.l_0, this.T_con, this.ghost_nodes)
    
    f_ext_sub(f_ext, this.n_B, this.n_P, this.n_N, this.n_N_dof, this.n_G, this.nx, this.nz, this.n_int, t, this.l_per, this.l_b, this.X_0, q_tilde, this.ghost_nodes,
              this.bar_lambda_mat, this.P_mat)

    LOOP FOR i = 1 TO 3*this.n_B
        f_n(i) = f_n(i) + f_ext(i)
    REPEAT
    
    f_mom_comp(f_mom, 2*this.n_B, this.n_q_tilde, this.l_b, f_n, q_tilde)

    Cq_dot_compute(Cq_dot, this.n_q_tilde, this.n_B, this.I_0, q_tilde)

    LOOP FOR i = 1 TO this.n_B
        K_i(2*i-1) = (f_mom(2*i-1) - Cq_dot(2*i-1))/this.I_0
        K_i(2*i)   = (f_mom(2*i) - Cq_dot(2*i))/(this.I_0*SIN(q_tilde(2*i-1+2*this.n_B))^2)    
    REPEAT

    LOOP FOR i = 1 TO this.n_B
        K_i(2*i-1+2*this.n_B) = q_tilde(2*i-1)
        K_i(2*i+2*this.n_B)   = q_tilde(2*i)
    REPEAT
END K_i_compute


SUBROUTINE timestep_tensegrity(TENSEGRITY this^; REAL t, deltat)
    ARRAY(this.n_q_tilde) OF REAL K_1 = 0, K_2 = 0, K_3 = 0
    ARRAY(this.n_q_tilde) OF REAL q_tilde_temp = 0
    
    q_tilde_temp = this.q_tilde
    
    K_i_compute(K_1, this, t, q_tilde_temp)

    LOOP FOR i = 1 TO this.n_q_tilde
        q_tilde_temp(i) = q_tilde_temp(i) + deltat/2*K_1(i)
    REPEAT
    K_i_compute(K_2, this, t + 0.5*deltat, q_tilde_temp)

    LOOP FOR i = 1 TO this.n_q_tilde
        q_tilde_temp(i) = q_tilde_temp(i) - deltat*K_1(i) + 2*deltat*K_2(i)
    REPEAT
    K_i_compute(K_3, this, t + deltat, q_tilde_temp)

    LOOP FOR i = 1 TO this.n_q_tilde
        this.q_tilde(i) = this.q_tilde(i) + deltat*[1/6*K_1(i) + 2/3*K_2(i) + 1/6*K_3(i)] 
    REPEAT
END timestep_tensegrity
