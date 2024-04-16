INCLUDE dof_utils.h
INCLUDE f_ext_utils.h
INCLUDE f_ext_wave.h
!USE rtchecks

SUBROUTINE K_i_compute(ARRAY(*) OF REAL K_i^; INTEGER n_q_tilde; INTEGER n_T_dof; REAL t; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; INTEGER n_T; INTEGER n_B; INTEGER n_P; INTEGER nx; INTEGER nz; INTEGER n_int; REAL l_per; REAL l_b; REAL sigma; REAL k; REAL I_0; ARRAY(*) OF REAL q_tilde; ARRAY(*) OF REAL X_0; ARRAY(*) OF REAL l_0; ARRAY(*,*) OF INTEGER T_con; ARRAY(*,*) OF INTEGER ghost_nodes; ARRAY(*,*,*) OF INTEGER P_mat; ARRAY(*,*) OF REAL bar_lambda_mat)
    ARRAY(2*n_B) OF REAL Cq_dot
    ARRAY(3*n_B) OF REAL f_ext = 0
    ARRAY(2*n_B) OF REAL f_mom

     LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    f_ext(3*i)   = 0
  REPEAT

    ARRAY(3*n_B) OF REAL f_n = 0
    !{LOOP FOR i = 1 TO 3*n_B
        f_n(i) = 0
    REPEAT!}
    
    f_n_comp(f_n, n_N_dof, n_N, n_T, n_G, nx, nz, l_per, l_b, k, sigma, q_tilde, X_0, l_0, T_con, ghost_nodes)

    !f_ext_sub(f_ext, n_B, t)
    !f_ext_sub_wave(f_ext, q_tilde, n_B, t, n_N_dof, n_G, nx, nz, n_N, l_per, l_b, X_0, ghost_nodes)
    
    f_ext_sub(f_ext, n_B, n_P, n_N, n_N_dof, n_G, nx, nz, n_int, t, l_per, l_b, X_0, q_tilde, ghost_nodes, bar_lambda_mat, P_mat)
    !WRITE f_ext(3*32)

    LOOP FOR i = 1 TO 3*n_B
        f_n(i) = f_n(i) + f_ext(i)
    REPEAT
    
    f_mom_comp(f_mom, 2*n_B, n_q_tilde, l_b, f_n, q_tilde)

    Cq_dot_compute(Cq_dot, n_q_tilde, n_B, I_0, q_tilde)

    LOOP FOR i = 1 TO n_B
        K_i(2*i-1) = (f_mom(2*i-1) - Cq_dot(2*i-1))/I_0
        K_i(2*i)   = (f_mom(2*i) - Cq_dot(2*i))/(I_0*SIN(q_tilde(2*i-1+2*n_B))^2)    
    REPEAT

    LOOP FOR i = 1 TO n_B
        K_i(2*i-1+2*n_B) = q_tilde(2*i-1)
        K_i(2*i+2*n_B)   = q_tilde(2*i)
    REPEAT
END K_i_compute