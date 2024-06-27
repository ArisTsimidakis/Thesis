FUN1(VAR1 *VAR2, int VAR3, int VAR4, const VAR5 *VAR6, size_t VAR7)
 {

    int VAR8;


     uint32_t VAR9 = 0;
 
     VAR2->VAR3 = VAR3;
    VAR2->VAR7 = VAR7;
    VAR2->VAR10 = 0;
    VAR2->VAR11 = 0;

    for (VAR8 = 0; VAR8 < VAR7 && VAR8 < 4; VAR8++)
        VAR9 |= (VAR6[VAR8] << ((3 - VAR8) << 3));
    VAR2->VAR9 = VAR9;
}