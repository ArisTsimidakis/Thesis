FUN1(VAR1 *VAR2, VAR3 *VAR4)
 {
     int VAR5;
     VAR3 *VAR6;

    int VAR7 = 0;


 
     for (VAR5 = 0; VAR5 < VAR4->VAR8; VAR5++) {
         VAR6 = FUN2(VAR2, VAR4->VAR9[VAR5]);
        if (VAR6 && ((VAR6->VAR10 & 63) == 0) &&
                VAR6->VAR11 && (((VAR12 *) VAR6->VAR11)->VAR13 > 0) && ((*((VAR12 *) VAR6->VAR11)->VAR14) != NULL))
            VAR7++;
    }

    return (VAR7);
}