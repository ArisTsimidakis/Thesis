static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4,
                               int VAR5)
{
    int VAR6;
    size_t VAR7 = 0;
    const char *VAR8 = NULL;
    int VAR9;
    int VAR10;
    int VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    struct ohci_iso_td VAR16;
    uint32_t VAR17;
    uint16_t VAR18;
    int16_t VAR19;
    int VAR20;
    uint32_t VAR21, VAR22, VAR23 = 0;
    uint32_t VAR24, VAR25;

    VAR17 = VAR4->VAR26 & VAR27;

     if (FUN2(VAR2, VAR17, &VAR16)) {
         FUN3(VAR17);
         FUN4(VAR2);

        return 0;


     }
 
     VAR18 = FUN5(VAR16.VAR28, VAR29);
    VAR20 = FUN5(VAR16.VAR28, VAR30);
    VAR19 = FUN6(VAR2->VAR31, VAR18); 

    FUN7(
           VAR4->VAR26 & VAR27, VAR4->VAR32 & VAR27,
           VAR16.VAR28, VAR16.VAR33, VAR16.VAR34, VAR16.VAR35,
           VAR2->VAR31, VAR18,
           VAR20, VAR19);
    FUN8(
           VAR16.VAR36[0], VAR16.VAR36[1],
           VAR16.VAR36[2], VAR16.VAR36[3],
           VAR16.VAR36[4], VAR16.VAR36[5],
           VAR16.VAR36[6], VAR16.VAR36[7]);

    if (VAR19 < 0) {
        FUN9(VAR19);
        return 1;
    } else if (VAR19 > VAR20) {
        
        FUN10(VAR19,
                                                        VAR20);
        FUN11(VAR16.VAR28, VAR37, VAR38);
        VAR4->VAR26 &= ~VAR27;
        VAR4->VAR26 |= (VAR16.VAR34 & VAR27);
        VAR16.VAR34 = VAR2->VAR39;
        VAR2->VAR39 = VAR17;
        VAR11 = FUN5(VAR16.VAR28, VAR40);
        if (VAR11 < VAR2->VAR41)
            VAR2->VAR41 = VAR11;
        if (FUN12(VAR2, VAR17, &VAR16)) {
            FUN4(VAR2);
            return 1;
        }
        return 0;
    }

    VAR6 = FUN5(VAR4->VAR28, VAR42);
    switch (VAR6) {
    case VAR43:
        VAR8 = "";
        VAR9 = VAR44;
        break;
    case VAR45:
        VAR8 = "";
        VAR9 = VAR46;
        break;
    case VAR47:
        VAR8 = "";
        VAR9 = VAR48;
        break;
    default:
        FUN13(VAR6);
        return 1;
    }

    if (!VAR16.VAR33 || !VAR16.VAR35) {
        FUN14(VAR16.VAR33, VAR16.VAR35);
        return 1;
    }

    VAR21 = VAR16.VAR36[VAR19];
    VAR22 = VAR16.VAR36[VAR19 + 1];

    if (!(FUN5(VAR21, VAR49) & 0xe) || 
        ((VAR19 < VAR20) && 
         !(FUN5(VAR22, VAR49) & 0xe))) {
        FUN15(VAR21, VAR22);
        return 1;
    }

    if ((VAR19 < VAR20) && (VAR21 > VAR22)) {
        FUN16(VAR21, VAR22);
        return 1;
    }

    if ((VAR21 & 0x1000) == 0) {
        VAR24 = (VAR16.VAR33 & VAR50) |
            (VAR21 & VAR51);
    } else {
        VAR24 = (VAR16.VAR35 & VAR50) |
            (VAR21 & VAR51);
    }

    if (VAR19 < VAR20) {
        VAR23 = VAR22 - 1;
        if ((VAR23 & 0x1000) == 0) {
            VAR25 = (VAR16.VAR33 & VAR50) |
                (VAR23 & VAR51);
        } else {
            VAR25 = (VAR16.VAR35 & VAR50) |
                (VAR23 & VAR51);
        }
    } else {
        
        VAR25 = VAR16.VAR35;
    }

    if ((VAR24 & VAR50) != (VAR25 & VAR50)) {
        VAR7 = (VAR25 & VAR51) + 0x1001
            - (VAR24 & VAR51);
    } else {
        VAR7 = VAR25 - VAR24 + 1;
    }

    if (VAR7 && VAR6 != VAR43) {
        if (FUN17(VAR2, VAR24, VAR25, VAR2->VAR52, VAR7,
                             VAR53)) {
            FUN4(VAR2);
            return 1;
        }
    }

    if (!VAR5) {
        bool VAR54 = VAR19 == VAR20 &&
                       FUN5(VAR16.VAR28, VAR40) == 0;
        VAR13 = FUN18(VAR2, FUN5(VAR4->VAR28, VAR55));
        VAR15 = FUN19(VAR13, VAR9, FUN5(VAR4->VAR28, VAR56));
        FUN20(&VAR2->VAR57, VAR9, VAR15, 0, VAR17, false, VAR54);
        FUN21(&VAR2->VAR57, VAR2->VAR52, VAR7);
        FUN22(VAR13, &VAR2->VAR57);
        if (VAR2->VAR57.VAR58 == VAR59) {
            FUN23(VAR13, VAR15);
            return 1;
        }
    }
    if (VAR2->VAR57.VAR58 == VAR60) {
        VAR10 = VAR2->VAR57.VAR61;
    } else {
        VAR10 = VAR2->VAR57.VAR58;
    }

    FUN24(VAR21, VAR23, VAR24, VAR25,
                             VAR8, VAR7, VAR10);

    
    if (VAR6 == VAR43 && VAR10 >= 0 && VAR10 <= VAR7) {
        
        if (FUN17(VAR2, VAR24, VAR25, VAR2->VAR52, VAR10,
                             VAR62)) {
            FUN4(VAR2);
            return 1;
        }
        FUN11(VAR16.VAR36[VAR19], VAR49,
                    VAR63);
        FUN11(VAR16.VAR36[VAR19], VAR64, VAR10);
    } else if (VAR6 == VAR45 && VAR10 == VAR7) {
        
        FUN11(VAR16.VAR36[VAR19], VAR49,
                    VAR63);
        FUN11(VAR16.VAR36[VAR19], VAR64, 0);
    } else {
        if (VAR10 > (VAR65) VAR7) {
            FUN25(VAR10, VAR7);
            FUN11(VAR16.VAR36[VAR19], VAR49,
                        VAR38);
            FUN11(VAR16.VAR36[VAR19], VAR64,
                        VAR7);
        } else if (VAR10 >= 0) {
            FUN26(VAR10);
            FUN11(VAR16.VAR36[VAR19], VAR49,
                        VAR66);
        } else {
            switch (VAR10) {
            case VAR67:
            case VAR68:
                FUN11(VAR16.VAR36[VAR19], VAR49,
                            VAR69);
                FUN11(VAR16.VAR36[VAR19], VAR64,
                            0);
                break;
            case VAR70:
            case VAR71:
                FUN27(VAR10);
                FUN11(VAR16.VAR36[VAR19], VAR49,
                            VAR72);
                FUN11(VAR16.VAR36[VAR19], VAR64,
                            0);
                break;
            default:
                FUN28(VAR10);
                FUN11(VAR16.VAR36[VAR19], VAR49,
                            VAR73);
                break;
            }
        }
    }

    if (VAR19 == VAR20) {
        
        FUN11(VAR16.VAR28, VAR37, VAR63);
        VAR4->VAR26 &= ~VAR27;
        VAR4->VAR26 |= (VAR16.VAR34 & VAR27);
        VAR16.VAR34 = VAR2->VAR39;
        VAR2->VAR39 = VAR17;
        VAR11 = FUN5(VAR16.VAR28, VAR40);
        if (VAR11 < VAR2->VAR41)
            VAR2->VAR41 = VAR11;
    }
    if (FUN12(VAR2, VAR17, &VAR16)) {
        FUN4(VAR2);
    }
    return 1;
}