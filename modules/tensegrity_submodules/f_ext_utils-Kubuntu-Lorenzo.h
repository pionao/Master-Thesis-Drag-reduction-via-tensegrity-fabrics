SUBROUTINE f_ext_sub(ARRAY(*) OF REAL f_ext^; INTEGER n_B; REAL t; ARRAY(*) OF REAL X)

  ARRAY(3) normal, dir_1, dir_2 = 0
  INTEGER ind_1, ind_2 = 0
  LOOP FOR i = 1 TO n_P
    ind_1 = P_mat(i, 1, 1)
    ind_2 = P_mat(i, 2, 1)

    dir_1 = (X(3*ind_1 - 2), X(3*ind_1 - 1), X(3*ind_1))
    dir_2 = (X(3*ind_2 - 2), X(3*ind_2 - 1), X(3*ind_2))
    
    normal(1) = dir_1(2)*dir_2(3) - dir_2(2)*dir_1(3)
    normal(2) = dir_2(1)*dir_1(3) - dir_1(1)*dir_2(3)
    normal(3) = dir_1(1)*dir_2(2) - dir_2(1)*dir_1(2)

    normal_norm = SQRT(normal(1)^2 + normal(2)^2 + normal(3)^2)

    LOOP FOR k = 1 TO 3
      normal(k) = normal(k) / normal_norm
    REPEAT

    
    
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
    f_ext(3*i-2) = A
    f_ext(3*i-1) = 0
    f_ext(3*i) = 0
  REPEAT!}

END f_ext_sub