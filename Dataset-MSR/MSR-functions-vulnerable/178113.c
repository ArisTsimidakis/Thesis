FUN1(unsigned char *VAR1, int VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;

    *VAR4 = VAR7;
    if (VAR2 < 4) {
        *VAR4 = VAR8;
        return NULL;
    }

    VAR6 = FUN2(VAR5, 1);
    VAR6->VAR9 = FUN3(VAR1, VAR2);
     VAR6->VAR10 = VAR2;
     *VAR4 = FUN4(VAR6);
     if (*VAR4 != VAR11) {

        FUN5(VAR6);


         return NULL;
     }
     *VAR4 = FUN6(VAR6);
     if (*VAR4 != VAR11) {

        FUN5(VAR6);


         VAR6 = NULL;
     }
     return VAR6;
}