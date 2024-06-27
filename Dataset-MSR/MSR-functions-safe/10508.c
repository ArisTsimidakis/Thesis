VAR1 FUN1(VAR2 *VAR3, int64_t VAR4,
                                   int VAR5, BdrvRequestFlags VAR6)
{
    VAR7 *VAR8 = VAR3->VAR9;
    struct IscsiTask VAR10;
    uint64_t VAR11;
    uint32_t VAR12;
    bool VAR13 = VAR8->VAR14;

    if (!FUN2(VAR4, VAR5, VAR8)) {
        return -VAR15;
    }

    if (VAR6 & VAR16) {
        if (!VAR13 && !VAR8->VAR17.VAR18) {
            
            VAR13 = true;
        }
        if (VAR13 && !VAR8->VAR17.VAR19) {
            
            VAR6 &= ~VAR16;
            VAR13 = VAR8->VAR14;
        }
    }

    if (!(VAR6 & VAR16) && !VAR8->VAR20) {
        
        return -VAR21;
    }

    VAR11 = FUN3(VAR4, VAR8);
    VAR12 = FUN3(VAR5, VAR8);

    if (VAR8->VAR22 == NULL) {
        VAR8->VAR22 = FUN4(VAR8->VAR23);
        if (VAR8->VAR22 == NULL) {
            return -VAR24;
        }
    }

    FUN5(VAR8, &VAR10);
VAR25:
    if (VAR13) {
        VAR10.VAR26 = FUN6(VAR8->VAR27, VAR8->VAR28, VAR11,
                                            VAR8->VAR22, VAR8->VAR23,
                                            VAR12, 0, !!(VAR6 & VAR16),
                                            0, 0, VAR29, &VAR10);
    } else {
        VAR10.VAR26 = FUN7(VAR8->VAR27, VAR8->VAR28, VAR11,
                                            VAR8->VAR22, VAR8->VAR23,
                                            VAR12, 0, !!(VAR6 & VAR16),
                                            0, 0, VAR29, &VAR10);
    }
    if (VAR10.VAR26 == NULL) {
        return -VAR24;
    }

    while (!VAR10.VAR30) {
        FUN8(VAR8);
        FUN9();
    }

    if (VAR10.VAR31 == VAR32 &&
        VAR10.VAR26->VAR33.VAR34 == VAR35 &&
        (VAR10.VAR26->VAR33.VAR36 == VAR37 ||
         VAR10.VAR26->VAR33.VAR36 == VAR38)) {
        
        VAR8->VAR20 = false;
        FUN10(VAR10.VAR26);
        return -VAR21;
    }

    if (VAR10.VAR26 != NULL) {
        FUN10(VAR10.VAR26);
        VAR10.VAR26 = NULL;
    }

    if (VAR10.VAR39) {
        VAR10.VAR30 = 0;
        goto VAR25;
    }

    if (VAR10.VAR31 != VAR40) {
        return VAR10.VAR41;
    }

    if (VAR6 & VAR16) {
        FUN11(VAR8, VAR4, VAR5);
    } else {
        FUN12(VAR8, VAR4, VAR5);
    }

    return 0;
}