INCLUDE dof_utils.h
INCLUDE f_ext_utils.h

SUBROUTINE K_i_compute(ARRAY(*) OF REAL K_i^; INTEGER n_q_tilde; INTEGER n_T_dof; REAL t; INTEGER n_N_dof; INTEGER n_N; INTEGER n_G; INTEGER n_T; INTEGER n_B; INTEGER n_f; INTEGER nx; INTEGER ny; REAL l_per; REAL l_b; REAL sigma; REAL k; REAL I_0; ARRAY(*) OF REAL q_tilde; ARRAY(*) OF REAL X_0; ARRAY(*) OF REAL l_0; ARRAY(*,*) OF INTEGER T_con; ARRAY(*,*) OF INTEGER ghost_nodes)
    n_f_prova = FLOOR(3*(n_N-n_G)/2)
    ARRAY(2*n_B) OF REAL Cq_dot
    ARRAY(n_N_dof) OF REAL f_ext
    ARRAY(n_f_prova) OF REAL f_n
    ARRAY(FLOOR(n_q_tilde/2)) OF REAL f_mom

    LOOP FOR i = 1 TO n_f_prova
        f_n(i) = 0
    REPEAT
    !WRITE f_n
    
    f_n_comp(f_n, n_f, n_N_dof, n_N, n_T, n_G, nx, ny, l_per, l_b, k, sigma, q_tilde, X_0, l_0, T_con, ghost_nodes)

    f_ext_sub(f_ext, n_N_dof, n_N, n_G, t)

    LOOP FOR i = 1 TO n_N_dof
        f_n(i) = f_n(i) + f_ext(i)
    REPEAT

    f_mom_comp(f_mom, FLOOR(n_q_tilde/2), n_q_tilde, l_b, f_n, q_tilde)

    !WRITE f_mom(31..32)

    Cq_dot_compute(Cq_dot, n_q_tilde, n_B, I_0, q_tilde)

    LOOP FOR i = 1 TO n_B
        K_i(2*i-1) = (f_mom(2*i-1) - Cq_dot(2*i-1))/I_0
        K_i(2*i)   = (f_mom(2*i) - Cq_dot(2*i))/(I_0*(SIN(q_tilde(2*i-1+FLOOR(n_q_tilde/2)))^2))
    REPEAT

    LOOP FOR i = 1 TO n_B
        K_i(2*i-1+2*n_B) = q_tilde(2*i-1)
        K_i(2*i+2*n_B)   = q_tilde(2*i)
    REPEAT

    

END K_i_compute