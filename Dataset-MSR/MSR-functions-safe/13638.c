static unsigned int FUN1(VAR1 *VAR2, const char *VAR3,
                                  unsigned char *VAR4,
                                  unsigned int VAR5)
{
    unsigned int VAR6 = 0;
    int VAR7;
    VAR8 *VAR9 = NULL;

    if (VAR10)
        FUN2(VAR11, "");
    if (!VAR3) {
        FUN2(VAR12, "");
        goto VAR13;
    }
    if (VAR10)
        FUN2(VAR11, "",
                   (int)strlen(VAR3), VAR3);

    
    if (strcmp(VAR3, VAR14) != 0) {
        FUN2(VAR11, ""
                   "", VAR3, VAR14);
        goto VAR13;
    }
    if (VAR10)
        FUN2(VAR11, "");

    
    VAR7 = FUN3(&VAR9, VAR15);
    if (!VAR7) {
        FUN2(VAR12, "",
                   VAR15);
        if (VAR9)
            FUN4(VAR9);
        return 0;
    }
    if (FUN5(VAR9) > (int)VAR5) {
        FUN2(VAR12,
                   "",
                   VAR5, FUN5(VAR9));
        FUN4(VAR9);
        return 0;
    }

    VAR7 = FUN6(VAR9, VAR4);
    FUN4(VAR9);

    if (VAR7 < 0)
        goto VAR13;
    VAR6 = (unsigned int)VAR7;

    if (VAR10)
        FUN2(VAR11, "", VAR6);
    return VAR6;
 VAR13:
    if (VAR10)
        FUN2(VAR12, "");
    return 0;
}