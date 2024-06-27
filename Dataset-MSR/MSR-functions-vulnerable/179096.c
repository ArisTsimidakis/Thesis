static int FUN1(VAR1 *VAR2, void *VAR3,
                                int *VAR4, VAR5 *VAR6)
{
    int VAR7       = VAR6->VAR8;
    VAR9 *VAR10  = VAR2->VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    GetBitContext VAR19;
    int VAR20 = VAR10->VAR21;
    int VAR22= VAR10->VAR23;

    
    if (VAR7 == 0)
        return 0;
    if (VAR7 < 4)
        return -1;

    FUN2(&VAR19, VAR6->VAR3, VAR7 * 8);

    
    VAR10->VAR21  = 16 * (FUN3(&VAR19,  4) + 1);
    VAR10->VAR24  =       FUN3(&VAR19, 12);
    VAR10->VAR23 = 16 * (FUN3(&VAR19,  4) + 1);
    VAR10->VAR25 =       FUN3(&VAR19, 12);

    if (   VAR20 != VAR10->VAR21
        || VAR22!= VAR10->VAR23)
        FUN4(&VAR10->VAR26);

    if (VAR10->VAR27 == 2) {
        FUN5(&VAR19, 6);
        if (FUN6(&VAR19)) {
            FUN7(VAR2, "");
            return VAR28;
        }
        if (FUN6(&VAR19)) {
            FUN7(VAR2, "");
            return VAR28;
        }
    }

    
    VAR12 = VAR10->VAR24  / VAR10->VAR21;
    VAR14   = VAR10->VAR24  % VAR10->VAR21;
    VAR13 = VAR10->VAR25 / VAR10->VAR23;
    VAR15   = VAR10->VAR25 % VAR10->VAR23;

    
    if (VAR10->VAR29 < VAR10->VAR21 * VAR10->VAR23) {
        int VAR30 = 3 * VAR10->VAR21 * VAR10->VAR23;

        VAR10->VAR31 = FUN8(VAR10->VAR31, VAR30);
        if (!VAR10->VAR31) {
            FUN9(VAR2, VAR32, "");
            return FUN10(VAR33);
        }
        if (VAR10->VAR27 == 2) {
            VAR10->VAR34 = FUN11(VAR30);
            if (VAR10->VAR34 <= 0) {
                FUN9(VAR2, VAR32, "");
                return -1;
            }
            VAR10->VAR35 = FUN8(VAR10->VAR35, VAR10->VAR34);
            if (!VAR10->VAR35) {
                FUN9(VAR2, VAR32, "");
                return FUN10(VAR33);
            }
        }
    }
    VAR10->VAR29 = VAR10->VAR21 * VAR10->VAR23;

    
    if (VAR2->VAR36 == 0 && VAR2->VAR37 == 0) {
        FUN12(VAR2, VAR10->VAR24, VAR10->VAR25);
    }

    
    if (VAR2->VAR36 != VAR10->VAR24 || VAR2->VAR37 != VAR10->VAR25) {
        FUN9(VAR2, VAR32,
               "");
        FUN9(VAR2, VAR32, "",
               VAR2->VAR37, VAR2->VAR36, VAR10->VAR25, VAR10->VAR24);
        return VAR38;
    }

    
    VAR10->VAR39 = (VAR6->VAR40 & VAR41) && (VAR10->VAR27 == 2);
    if (VAR10->VAR39) {
        VAR10->VAR42 = FUN8(VAR10->VAR42, VAR6->VAR8);
        memcpy(VAR10->VAR42, VAR6->VAR3, VAR6->VAR8);
    }
    if(VAR10->VAR27 == 2 && !VAR10->VAR26)
        VAR10->VAR26 = FUN13((VAR13 + !!VAR15) * (VAR12 + !!VAR14)
                                * sizeof(VAR10->VAR26[0]));

    FUN14(VAR2, "",
            VAR10->VAR24, VAR10->VAR25, VAR10->VAR21, VAR10->VAR23,
            VAR12, VAR13, VAR14, VAR15);

    if ((VAR18 = FUN15(VAR2, &VAR10->VAR43)) < 0)
        return VAR18;

    
    for (VAR17 = 0; VAR17 < VAR13 + (VAR15 ? 1 : 0); VAR17++) {

        int VAR44  = VAR17 * VAR10->VAR23; 
        int VAR45 = (VAR17 < VAR13) ? VAR10->VAR23 : VAR15;

        
        for (VAR16 = 0; VAR16 < VAR12 + (VAR14 ? 1 : 0); VAR16++) {
            int VAR46 = VAR16 * VAR10->VAR21; 
            int VAR47 = (VAR16 < VAR12) ? VAR10->VAR21 : VAR14;
            int VAR48 = 0;

            
            int VAR8 = FUN3(&VAR19, 16);

            VAR10->VAR49    = 0;
            VAR10->VAR50 = 0;
            VAR10->VAR51 = 0;
            VAR10->VAR52     = 0;
            VAR10->VAR53    = VAR45;

            if (8 * VAR8 > FUN16(&VAR19)) {
                FUN17(&VAR10->VAR43);
                return VAR38;
            }

            if (VAR10->VAR27 == 2 && VAR8) {
                FUN5(&VAR19, 3);
                VAR10->VAR49    = FUN3(&VAR19, 2);
                VAR48          = FUN6(&VAR19);
                VAR10->VAR50 = FUN6(&VAR19);
                VAR10->VAR51 = FUN6(&VAR19);

                if (VAR10->VAR49 != 0 && VAR10->VAR49 != 2) {
                    FUN9(VAR2, VAR32,
                           "", VAR16, VAR17, VAR10->VAR49);
                    return VAR38;
                }

                if (VAR48) {
                    if (!VAR10->VAR54) {
                        FUN9(VAR2, VAR32,
                               "");
                        return VAR38;
                     }
                     VAR10->VAR52  = FUN3(&VAR19, 8);
                     VAR10->VAR53 = FUN3(&VAR19, 8);








                     FUN9(VAR2, VAR55,
                            "",
                            VAR16, VAR17, VAR10->VAR52, VAR10->VAR53);
                    VAR8 -= 2;
                }

                if (VAR10->VAR51)
                    FUN9(VAR2, VAR55, "", VAR16, VAR17);

                if (VAR10->VAR50) {
                    int VAR56 = FUN3(&VAR19, 8);
                    int VAR57 = FUN3(&VAR19, 8);
                    FUN9(VAR2, VAR55, "", VAR16, VAR17, VAR56, VAR57);
                    VAR8 -= 2;
                    FUN7(VAR2, "");
                    return VAR28;
                }
                if (!VAR10->VAR26 && (VAR10->VAR50 || VAR10->VAR51)) {
                    FUN9(VAR2, VAR32, ""
                           "");
                    return VAR38;
                }
                VAR8--; 
            }

            if (VAR48) {
                int VAR58;
                int VAR59 = (VAR10->VAR25 - VAR44 - 1) * VAR10->VAR43.VAR60[0];

                for (VAR58 = 0; VAR58 < VAR45; VAR58++)
                    memcpy(VAR10->VAR43.VAR3[0] + VAR59 - VAR58*VAR10->VAR43.VAR60[0] + VAR46*3,
                           VAR10->VAR54 + VAR59 - VAR58*VAR10->VAR43.VAR60[0] + VAR46*3,
                           VAR47 * 3);
            }

            
            if (VAR8) {
                if (FUN18(VAR2, VAR6, &VAR19, VAR8,
                                         VAR47, VAR45,
                                         VAR46, VAR44,
                                         VAR16 + VAR17 * (VAR12 + !!VAR14)))
                    FUN9(VAR2, VAR32,
                           "", VAR16, VAR17);
            }
        }
    }
    if (VAR10->VAR39 && VAR10->VAR27 == 2) {
        if (!VAR10->VAR54) {
            VAR10->VAR54 = FUN19(VAR10->VAR43.VAR60[0] * VAR2->VAR37);
            if (!VAR10->VAR54) {
                FUN9(VAR2, VAR32, "");
                return FUN10(VAR33);
            }
        }
        memcpy(VAR10->VAR54, VAR10->VAR43.VAR3[0], VAR10->VAR43.VAR60[0] * VAR2->VAR37);
    }

    if ((VAR18 = FUN20(VAR3, &VAR10->VAR43)) < 0)
        return VAR18;

    *VAR4 = 1;

    if ((FUN21(&VAR19) / 8) != VAR7)
        FUN9(VAR2, VAR32, "",
               VAR7, (FUN21(&VAR19) / 8));

    
    return VAR7;
}