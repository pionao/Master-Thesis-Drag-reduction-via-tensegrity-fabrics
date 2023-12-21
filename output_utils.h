SUBROUTINE mat_to_csv(ARRAY(*,*) OF REAL arr)

    output = CREATE("output.csv")

    LOOP FOR j = LO2(arr) TO HI2(arr)
        LOOP FOR i = LO(arr) TO HI(arr)
            WRITE TO output arr(i,j) ./.
            IF NOT(j MOD HI2(arr)=0)
                WRITE TO output ", "
            ELSE
                WRITE TO output
            END IF
        REPEAT
    REPEAT

END mat_to_csv