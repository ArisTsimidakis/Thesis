VAR1 *FUN1(const VAR2 *VAR3, VAR1 *VAR4)
{
    VAR1 *VAR5;
    int VAR6, VAR7;

    if (VAR4 == NULL)
        VAR5 = FUN2();
    else
        VAR5 = VAR4;
    if (VAR5 == NULL) {
        FUN3(VAR8, VAR9);
        goto VAR10;
         FUN3(VAR8, VAR9);
         goto VAR10;
     }

    if (FUN4(VAR3))


         VAR5->VAR11 = VAR12;
     else
         VAR5->VAR11 = VAR13;
    if (VAR5->VAR14 < VAR6 + 4) {
        unsigned char *VAR15 = FUN5(VAR5->VAR16, VAR6 + 4);
        if (!VAR15) {
            FUN3(VAR8, VAR17);
            goto VAR10;
        }
        VAR5->VAR16 = VAR15;
    }
    VAR5->VAR14 = FUN6(VAR3, VAR5->VAR16);
    
    if (!VAR5->VAR14) {
        VAR5->VAR16[0] = 0;
        VAR5->VAR14 = 1;
    }
    return (VAR5);
 VAR10:
    if (VAR5 != VAR4)
        FUN7(VAR5);
    return (NULL);
}