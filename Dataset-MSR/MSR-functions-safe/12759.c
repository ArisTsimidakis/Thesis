VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    int VAR6 = -1;
    unsigned long VAR7;

    VAR7 = VAR3->VAR8->VAR9.VAR10->VAR11;

    
    if ((VAR7 & VAR12) && !FUN2(VAR3, VAR5, &VAR6))
        goto VAR13;

    if (VAR7 & VAR14) {
        
        if (FUN3(VAR5) != 0) {
            VAR6 = VAR15;
            FUN4(VAR16,
                   VAR17);
            goto VAR13;
        }
        
        if (!FUN5(VAR3, NULL, 0, 0)) {
            VAR6 = VAR18;
            FUN4(VAR16, VAR19);
            goto VAR13;
        }
    } else if (VAR7 & (VAR20 | VAR21)) {
        if (!FUN6(VAR3, VAR5, &VAR6))
            goto VAR13;
    } else if (VAR7 & (VAR22 | VAR23)) {
        if (!FUN7(VAR3, VAR5, &VAR6))
            goto VAR13;
    } else if (VAR7 & (VAR24 | VAR25)) {
        if (!FUN8(VAR3, VAR5, &VAR6))
            goto VAR13;
    } else if (VAR7 & VAR26) {
        if (!FUN9(VAR3, VAR5, &VAR6))
            goto VAR13;
    } else if (VAR7 & VAR27) {
        if (!FUN10(VAR3, VAR5, &VAR6))
            goto VAR13;
    } else {
        VAR6 = VAR15;
        FUN4(VAR16,
               VAR28);
        goto VAR13;
    }

    return VAR29;
 VAR13:
    if (VAR6 != -1)
        FUN11(VAR3, VAR30, VAR6);
#ifndef VAR31
    FUN12(VAR3->VAR8->VAR9.VAR32, VAR3->VAR8->VAR9.VAR33);
    VAR3->VAR8->VAR9.VAR32 = NULL;
#endif
    FUN13(VAR3);
    return VAR34;
}