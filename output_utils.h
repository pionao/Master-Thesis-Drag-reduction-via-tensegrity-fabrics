SUBROUTINE mat_to_csv_real(ARRAY(*,*) OF REAL arr; STRING file_name)

    output = CREATE(file_name)

    LOOP FOR i = LO1(arr) TO HI1(arr)
        LOOP FOR j = LO2(arr) TO HI2(arr)
            WRITE TO output arr(i,j) ./.
            IF j = HI2(arr) THEN
                WRITE TO output
            ELSE
                WRITE TO output ", " ./.
            END IF
        REPEAT
    REPEAT
END mat_to_csv_real


SUBROUTINE vec_to_csv_real(ARRAY(*) OF REAL arr; STRING file_name)

    output = CREATE(file_name)

    LOOP FOR i = LO(arr) TO HI(arr)
        WRITE TO output arr(i) ./.
        WRITE TO output
    REPEAT
END vec_to_csv_real


SUBROUTINE mat_to_csv_int(ARRAY(*,*) OF INTEGER arr; STRING file_name)

    output = CREATE(file_name)

    LOOP FOR i = LO1(arr) TO HI1(arr)
        LOOP FOR j = LO2(arr) TO HI2(arr)
            WRITE TO output arr(i,j) ./.
            IF j = HI2(arr) THEN
                WRITE TO output
            ELSE
                WRITE TO output ", " ./.
            END IF
        REPEAT
    REPEAT
END mat_to_csv_int


SUBROUTINE vec_to_csv_int(ARRAY(*) OF INTEGER arr; STRING file_name)

    output = CREATE(file_name)

    LOOP FOR i = LO(arr) TO HI(arr)
        WRITE TO output arr(i) ./.
        WRITE TO output
    REPEAT
END vec_to_csv_int