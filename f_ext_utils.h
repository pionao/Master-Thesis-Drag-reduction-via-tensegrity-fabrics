SUBROUTINE f_ext_sub(ARRAY(*) OF REAL f_ext^; INTEGER n_B; REAL t)

  INTEGER nx = 11, ny = 11

  REAL w = 4*PI
  REAL A = 0

  ind_mc = nx*(ny+1)/2-(nx-1)/2

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    IF i > 4*(ind_mc-1) AND i <= 4*ind_mc THEN
      f_ext(3*i) = A
    ELSE
      f_ext(3*i) = 0
    END IF
  REPEAT
END f_ext_sub