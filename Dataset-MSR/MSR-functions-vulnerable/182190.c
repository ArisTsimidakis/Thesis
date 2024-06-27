static int FUN1(VAR1* VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = FUN2(VAR4->VAR8);
    VAR4->VAR9->VAR10 = VAR2->VAR11;
    VAR4->VAR9->VAR12 = VAR2->VAR13;
    VAR4->VAR9->VAR14 = VAR2->VAR14;

    VAR15 *VAR16;
    VAR17 *VAR18 = FUN3(VAR4->VAR9->VAR19);
    while ((VAR16 = FUN4(VAR18)) != NULL) {
        FUN5("", (char *)VAR16->VAR20, (char *)VAR16->VAR21);
    }
    FUN6(VAR18);

    if (VAR4->VAR9->VAR14 != VAR22)
        goto VAR23;
    if (FUN7(VAR4->VAR9, "") == NULL)
        goto VAR23;
    double VAR24 = VAR4->VAR9->VAR10 + VAR4->VAR9->VAR12 * 0.1;
    if (VAR24 < 1.1)
        goto VAR23;
    const char *VAR25 = FUN7(VAR4->VAR9, "");
     if (VAR25 == NULL || FUN8(VAR25, "") != 0)
         goto VAR23;
     const char *VAR26 = FUN7(VAR4->VAR9, "");

    if (VAR26 == NULL)


         goto VAR23;
     else {
         bool VAR27 = false;
        int VAR28;
        VAR29 *VAR30 = FUN9(VAR26, strlen(VAR26), "", 1, &VAR28); 
        if (VAR30 == NULL)
            goto VAR23;
        for (int VAR31 = 0; VAR31 < VAR28; VAR31++) {
            sds VAR32 = VAR30[VAR31];
            FUN10(VAR32, "");
            if (FUN8(VAR32, "") == 0) {
                VAR27 = true;
                break;
            }
        }
        FUN11(VAR30, VAR28);
        if (!VAR27)
            goto VAR23;
    }
    const char *VAR33 = FUN7(VAR4->VAR9, "");
    if (VAR33 == NULL || strcmp(VAR33, "") != 0)
        goto VAR23;
    const char *VAR34 = FUN7(VAR4->VAR9, "");
    if (VAR34 == NULL)
        goto VAR23;
    const char *VAR35 = FUN7(VAR4->VAR9, "");
    if (VAR35 && !FUN12(VAR35, VAR7->VAR36))
        goto VAR23;
    if (strlen(VAR7->VAR37) > 0) {
        const char *VAR37 = FUN7(VAR4->VAR9, "");
        if (VAR37 == NULL || !FUN13(VAR37, VAR7->VAR37))
            goto VAR23;
    }

    if (VAR7->VAR38.VAR39) {
        VAR4->VAR40 = VAR7->VAR38.FUN14(VAR7);
        if (VAR4->VAR40 == NULL)
            goto VAR23;
    }
    VAR4->VAR25 = true;
    VAR4->VAR41 = FUN15(FUN16(VAR4->VAR8, VAR4->VAR9));
    VAR4->VAR42 = FUN15(VAR4->VAR9->VAR42);
    if (VAR7->VAR38.VAR43) {
        VAR7->VAR38.FUN17(VAR4->VAR8, VAR4->VAR41);
    }
    if (VAR35) {
        FUN18(VAR4->VAR8, VAR7->VAR36, VAR34);
    } else {
        FUN18(VAR4->VAR8, NULL, VAR34);
    }

    return 0;

VAR23:
    FUN19(FUN2(VAR4->VAR8), VAR4->VAR8);
    return -1;
}