FUN1(VAR1 *VAR2, VAR3 *argv, VAR4 *VAR5) {
    (void) VAR2; (void) VAR5;
    VAR4 *VAR6;
    VAR7 **VAR8 = NULL;

    if(!FUN2(argv, 0))
       return;

    VAR8 = FUN3(FUN2(argv, 0), "", 2);
    if(VAR8[0])
        VAR6 = FUN4(FUN5(VAR8[0]));
    else
        return;

    FUN6(0, VAR8[1]?VAR8[1]:"", VAR6->VAR9);

    FUN7(VAR6, VAR10);
    FUN8(VAR8);
}