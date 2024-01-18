SUBROUTINE f_ext_sub_wave(ARRAY(*) OF REAL f_ext^; ARRAY(*) OF REAL q_tilde; INTEGER n_B; REAL t; INTEGER n_N_dof, n_G, nx, nz, n_N; REAL l_per, l_b; ARRAY(*) OF REAL X_0; ARRAY(*,*) OF INTEGER ghost_nodes)

    REAL PI = 3.14159265359
    
    REAL c = 2
    REAL A = 3
    REAL k_x = 5

    ARRAY(3*n_N) OF REAL X = 0
    X_comp(X, n_N_dof, n_N, n_G, nx, nz, l_per, l_b, q_tilde, X_0, ghost_nodes)

    REAL x
    LOOP FOR i = 1 TO n_B
        x = X(3*i-2)
        
        f_ext(3*i-2) = 0
        f_ext(3*i-1) = A*COS(k_x*(x-c*t))
        f_ext(3*i)   = 0
    REPEAT
END f_ext_sub_wave