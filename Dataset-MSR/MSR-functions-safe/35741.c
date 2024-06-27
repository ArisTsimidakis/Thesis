static const char *FUN1(VAR1 *VAR2, 
                                           const char *VAR3,
                                           VAR4 *VAR5)
{
    apr_status_t VAR6;

    VAR7 *VAR8 =
        FUN2(VAR2->VAR9->VAR10, &VAR11);

    char *VAR12;
    VAR6 = FUN3(&VAR12, 
                            VAR8->VAR13, 
                            VAR3,
                            VAR14, 
                            VAR2->VAR15);

    if (VAR6 != VAR16) {
        return FUN4(VAR2->VAR15,
                            "", VAR3);
    }

    *(const char **) FUN5(VAR5) = VAR12;
    return NULL;
}