FUN1(VAR1 *const VAR2)
{
    VAR1 *VAR3 = FUN2(VAR2, VAR4);
    if (!VAR3) {
        return VAR5;
    }

    const char *VAR6 = FUN3(VAR3);
    if (!VAR6) {
        FUN4("");
        return VAR7;
    }

    if (FUN5(VAR6, "") == 0) {
        FUN6("");
        return VAR5;
    }

    if ((FUN5(VAR6, "") != 0) && (FUN5(VAR6, "") != 0)) {
        FUN7("", VAR6);
        return VAR7;
    }

    VAR1 *VAR8 = FUN2(VAR3, VAR9);
    if (!VAR8) {
        FUN7("");
        return VAR7;
    }

    VAR1 *VAR10 = FUN8(VAR8, VAR11);
    if (!VAR10) {
        FUN7("");
        return VAR7;
    }

    char *VAR12 = FUN9(VAR10);
    if (!VAR12) {
        FUN7("");
         return VAR7;
     }
 
















     const VAR13 *VAR14 = FUN10(VAR10);
     const VAR13 *VAR15 = FUN11(VAR10);
 
    
    if (!VAR14) VAR14 = VAR15;
 
     VAR16 *VAR17 = FUN12(VAR15);
     VAR16 *VAR18 = FUN12(VAR14);

    VAR16 *VAR19 = FUN12(FUN13());
 
     
     char *VAR20 = NULL;
    VAR1 *VAR21 = FUN2(VAR10, VAR22);
    if (VAR21) {
        VAR20 = FUN14(VAR21);
    }

    
    if (FUN5(VAR19->VAR23, VAR18->VAR23) == 0) {
        FUN15(VAR17->VAR23, VAR17->VAR24, VAR12, VAR20);

    
    } else {
        FUN16(VAR18->VAR23, VAR12, VAR20);
    }

    VAR25 *VAR26 = FUN17();
    FUN18(VAR26, VAR12);
    FUN18(VAR26, VAR20);

    FUN19(VAR17);
    FUN19(VAR18);
    FUN19(VAR19);

    return VAR7;
}