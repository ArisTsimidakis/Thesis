static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    int VAR12;
    VAR13 *VAR14 = NULL;
    apr_status_t VAR15;
    
    int VAR16;

    VAR11 = (VAR10 *)FUN2(VAR2->VAR17);
    VAR16 = (VAR11->VAR18 == VAR19)
                      && VAR2->VAR20->VAR21->VAR22 != VAR23;

    FUN3(VAR2, VAR24, VAR25, VAR26, VAR27, -1);

    
    if ((VAR12 = FUN4(VAR2)) != VAR28) {
        return VAR12;
    }

    if (VAR2->VAR29 == VAR25 || VAR2->VAR29 == VAR27) {
        if (VAR2->VAR30.VAR31 == VAR32) {
            FUN5(VAR33, VAR34, 0, VAR2, FUN6(00128)
                          "",
                          FUN7(VAR2->VAR35, VAR2->VAR36, VAR2->VAR37, NULL));
            return VAR38;
        }

        
        if (VAR2->VAR30.VAR31 == VAR39) {
            FUN5(VAR33, VAR34, 0, VAR2, FUN6(00129)
                          "", VAR2->VAR36);
            return VAR38;
        }

        if ((VAR2->VAR40 != VAR41) &&
            VAR2->VAR37 && *VAR2->VAR37)
        {
            
            FUN5(VAR33, VAR34, 0, VAR2, FUN6(00130)
                          "",
                          FUN7(VAR2->VAR35, VAR2->VAR36, VAR2->VAR37, NULL));
            return VAR38;
        }

        
        if (VAR2->VAR29 != VAR25) {
            VAR42 *VAR43;

            VAR43 = FUN2(VAR2->VAR44);
            if (!VAR43->VAR45) {
                
                FUN5(VAR33, VAR46, 0, VAR2, FUN6(00131)
                              "",
                              VAR2->VAR47);
                return VAR48;
            }
        }


        if ((VAR15 = FUN8(&VAR14, VAR2->VAR36, VAR49 | VAR50
#if VAR51
                            | FUN9(VAR11->VAR52)
#endif
                                    , 0, VAR2->VAR35)) != VAR53) {
            FUN5(VAR33, VAR46, VAR15, VAR2, FUN6(00132)
                          "", VAR2->VAR36);
            return VAR54;
        }

        FUN10(VAR2, VAR2->VAR30.VAR55);
        FUN11(VAR2);
        FUN12(VAR2);
        FUN13(VAR2);
        FUN14(VAR2, VAR2->VAR30.VAR56);
        if (VAR16) {
            FUN15(VAR2->VAR57, "",
                           FUN16(VAR2->VAR35, VAR14));
        }

        VAR7 = FUN17(VAR2->VAR35, VAR4->VAR58);

        if ((VAR12 = FUN18(VAR2)) != VAR28) {
            FUN19(VAR14);
            VAR2->VAR15 = VAR12;
        }
        else {
            VAR9 = FUN20(VAR7, VAR14, 0, VAR2->VAR30.VAR56, VAR2->VAR35);

#if VAR59
            if (VAR11->VAR60 == VAR61) {
                (void)FUN21(VAR9, 0);
            }
#endif
        }

        VAR9 = FUN22(VAR4->VAR58);
        FUN23(VAR7, VAR9);

        VAR15 = FUN24(VAR2->VAR20, VAR7);
        FUN25(VAR7);

        if (VAR15 == VAR53
            || VAR2->VAR15 != VAR62
            || VAR4->VAR63) {
            return VAR28;
        }
        else {
            
            FUN5(VAR33, VAR64, VAR15, VAR2, FUN6(00133)
                          "",
                          VAR15);
            return VAR65;
        }
    }
    else {              
        if (VAR2->VAR29 == VAR66) {
            
            if (VAR2->VAR67
                && VAR2->VAR67[0] == 0x16
                && (VAR2->VAR67[1] == 0x2 || VAR2->VAR67[1] == 0x3)) {
                FUN5(VAR33, VAR46, 0, VAR2, FUN6(00134)
                              "", VAR2->VAR67);
            } else {
                FUN5(VAR33, VAR46, 0, VAR2, FUN6(00135)
                              "", VAR2->VAR67);
            }
            return VAR68;
        }

        if (VAR2->VAR29 == VAR26) {
            return FUN26(VAR2);
        }
        return VAR48;
    }
}