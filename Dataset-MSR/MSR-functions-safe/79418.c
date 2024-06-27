static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
                              VAR5 *VAR6, VAR7 *VAR8)
{
    int64_t VAR9 = FUN2(VAR6->VAR10, VAR11,
                                      VAR6->VAR12, VAR13);
    int VAR14 = VAR9 < VAR15 ? 0 : 1;
    int VAR16   = VAR17;
    int VAR18 = 0;
    int VAR19   = 0;

    VAR20 *VAR21 = NULL;
    int      VAR22, VAR23;

    if (VAR8) {
        if (VAR4->VAR24)
            VAR19 = VAR8->VAR25;
        else
            VAR19 = VAR8->VAR26->VAR27;

        VAR21 = (VAR20*)FUN3(VAR8, VAR28,
                                                            &VAR22);
        if (VAR21 && VAR22 < 9 * sizeof(*VAR21))
            VAR21 = NULL;
    }

    if (VAR6->VAR16 & VAR29)
        VAR16 |= VAR30;

    if (VAR6->VAR31 == VAR32)
        VAR14 = 1;

    (VAR14 == 1) ? FUN4(VAR2, 104) : FUN4(VAR2, 92); 
    FUN5(VAR2, "");
    FUN6(VAR2, VAR14);
    FUN7(VAR2, VAR16);
    if (VAR14 == 1) {
        FUN8(VAR2, VAR6->VAR33);
        FUN8(VAR2, VAR6->VAR33);
    } else {
        FUN4(VAR2, VAR6->VAR33); 
        FUN4(VAR2, VAR6->VAR33); 
    }
    FUN4(VAR2, VAR6->VAR34); 
    FUN4(VAR2, 0); 
    if (!VAR6->VAR35 && VAR4->VAR31 == VAR32)
        (VAR14 == 1) ? FUN8(VAR2, FUN9(0xffffffffffffffff)) : FUN4(VAR2, 0xffffffff);
    else if (!VAR6->VAR35)
        (VAR14 == 1) ? FUN8(VAR2, 0) : FUN4(VAR2, 0);
    else
        (VAR14 == 1) ? FUN8(VAR2, VAR9) : FUN4(VAR2, VAR9);

    FUN4(VAR2, 0); 
    FUN4(VAR2, 0); 
    FUN10(VAR2, 0); 
    FUN10(VAR2, VAR19); 
    
    if (VAR6->VAR36->VAR27 == VAR37)
        FUN10(VAR2, 0x0100);
    else
        FUN10(VAR2, 0);
    FUN10(VAR2, 0); 

    
#if VAR38
    if (VAR8 && VAR8->VAR39) {
        VAR40 *VAR41 = FUN11(VAR8->VAR39, "", NULL, 0);
        VAR18 = (VAR41 && VAR41->VAR42) ? FUN12(VAR41->VAR42) : 0;
    }
#endif
    if (VAR21) {
        for (VAR23 = 0; VAR23 < 9; VAR23++)
            FUN4(VAR2, VAR21[VAR23]);
#if VAR38
    } else if (VAR18 == 90) {
        FUN13(VAR2,  0,  1, -1,  0, VAR6->VAR36->VAR43, 0);
    } else if (VAR18 == 180) {
        FUN13(VAR2, -1,  0,  0, -1, VAR6->VAR36->VAR44, VAR6->VAR36->VAR43);
    } else if (VAR18 == 270) {
        FUN13(VAR2,  0, -1,  1,  0, 0, VAR6->VAR36->VAR44);
#endif
    } else {
        FUN13(VAR2,  1,  0,  0,  1, 0, 0);
    }
    
    if (VAR8 && (VAR6->VAR36->VAR27 == VAR45 ||
               VAR6->VAR36->VAR27 == VAR46)) {
        int64_t VAR47;
        if (VAR6->VAR31 == VAR48) {
            VAR47 = VAR6->VAR36->VAR44 * 0x10000ULL;
        } else {
            VAR47 = FUN14(VAR8->VAR49.VAR50,
                                                  VAR6->VAR36->VAR44 * 0x10000LL,
                                                  VAR8->VAR49.VAR51);
            if (!VAR47 ||
                VAR6->VAR43 != VAR6->VAR36->VAR43 ||
                VAR47 > VAR52)
                VAR47 = VAR6->VAR36->VAR44 * 0x10000ULL;
        }
        if (VAR47 > VAR52) {
            FUN15(VAR4->VAR53, VAR54, "");
            VAR47 = 0;
        }
        FUN4(VAR2, VAR47);
        if (VAR6->VAR43 > 0xFFFF) {
            FUN15(VAR4->VAR53, VAR54, "");
            FUN4(VAR2, 0);
        } else
            FUN4(VAR2, VAR6->VAR43 * 0x10000U);
    } else {
        FUN4(VAR2, 0);
        FUN4(VAR2, 0);
    }
    return 0x5c;
}