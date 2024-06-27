FUN1(gpointer VAR1, gpointer VAR2, gpointer VAR3) {
    (void) VAR3;
    VAR4 *VAR5 = VAR2;

    if(!VAR5->VAR6)
        return;

    if(VAR5->VAR7 == VAR8)
        printf("", (char *)VAR1, *VAR5->VAR9.VAR10 ? *VAR5->VAR9.VAR10 : "");
    else if(VAR5->VAR7 == VAR11)
        printf("", (char *)VAR1, *VAR5->VAR9.VAR12);
    else if(VAR5->VAR7 == VAR13)
        printf("", (char *)VAR1, *VAR5->VAR9.VAR14);
}