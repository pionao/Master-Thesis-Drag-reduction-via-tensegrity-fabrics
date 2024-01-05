! Inclusioni

INCLUDE RK3_utils.h

! Definizione funzioni


SUBROUTINE simulate(ARRAY(*) OF REAL t_vec^; ARRAY(*,*) OF REAL q_tilde_arr^; INTEGER n_t; INTEGER n_q_tilde; REAL dt; INTEGER n_T; INTEGER n_B; INTEGER n_N; INTEGER n_N_dof; INTEGER n_T_dof; INTEGER n_G; INTEGER nx; INTEGER ny; ARRAY(*) OF REAL q_0_tilde; ARRAY(*) OF REAL X_0; REAL I_0; REAL l_b; REAL l_per; REAL sigma; REAL k; ARRAY(*,*) OF INTEGER T_con; ARRAY(*,*) OF INTEGER ghost_nodes; ARRAY(*) OF REAL l_0)

    ARRAY(n_q_tilde) OF REAL K_1, K_2, K_3
    ARRAY(n_q_tilde) OF REAL q_tilde_i, q_tilde_i_temp
    REAL t_i 
    
    q_tilde_i = q_0_tilde

    LOOP FOR i = 1 TO n_q_tilde
            q_tilde_arr(i, 1) = q_tilde_i(i)
    REPEAT
    
    LOOP FOR i = 1 TO n_t-1
        t_i = t_vec(i)
        
        q_tilde_i_temp = q_tilde_i
        
        K_i_compute(K_1, n_q_tilde, n_T_dof, t_i, n_N_dof, n_N, n_G, n_T, n_B, nx, ny, l_per, l_b, sigma, k, I_0, q_tilde_i_temp, X_0, l_0, T_con, ghost_nodes)
        
        LOOP FOR j = 1 TO n_q_tilde
            q_tilde_i_temp(j) = q_tilde_i_temp(j) + dt/2*K_1(j)
        REPEAT 
        K_i_compute(K_2, n_q_tilde, n_T_dof, t_i + 0.5*dt, n_N_dof, n_N, n_G, n_T, n_B, nx, ny, l_per, l_b, sigma, k, I_0, q_tilde_i_temp, X_0, l_0, T_con, ghost_nodes)

        LOOP FOR j = 1 TO n_q_tilde
            q_tilde_i_temp(j) = q_tilde_i_temp(j) - dt*K_1(j) + 2*dt*K_2(j)
        REPEAT
        K_i_compute(K_3, n_q_tilde, n_T_dof, t_i + dt, n_N_dof, n_N, n_G, n_T, n_B, nx, ny, l_per, l_b, sigma, k, I_0, q_tilde_i_temp, X_0, l_0, T_con, ghost_nodes)

        LOOP FOR j = 1 TO n_q_tilde
            q_tilde_i(j) = q_tilde_i(j) + dt*[1/6*K_1(j) + 2/3*K_2(j) + 1/6*K_3(j)] 
        REPEAT

        LOOP FOR j = 1 TO n_q_tilde
            q_tilde_arr(j, i+1) = q_tilde_i(j)
        REPEAT
        
        t_vec(i+1) = t_i + dt
    REPEAT
END simulate
