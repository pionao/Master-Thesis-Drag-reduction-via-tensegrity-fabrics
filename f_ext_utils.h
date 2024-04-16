SUBROUTINE df_comp(ARRAY(3) OF REAL df^, x, normal; REAL t, dA, Lx, Lz)
    
  REAL c = 2
  REAL A = 500
  REAL k_x = 5
  REAL w = 10

  REAL p = A*COS(k_x*(x(1)-c*t))
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

      df_comp(df, x, normal, t, dA, Lx, Lz)

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