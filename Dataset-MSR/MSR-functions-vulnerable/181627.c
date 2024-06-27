static VAR1 FUN1(VAR2 * VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    OPJ_UINT32 VAR8 = 0;

    if (!VAR3->VAR9) {
        VAR5 = &VAR3->VAR10[VAR3->VAR11];
        goto VAR12;
    } else {
        VAR3->VAR9 = 0;
    }

    for (VAR3->VAR11 = VAR3->VAR13.VAR14; VAR3->VAR11 < VAR3->VAR13.VAR15; VAR3->VAR11++) {
        OPJ_UINT32 VAR16;
        VAR5 = &VAR3->VAR10[VAR3->VAR11];
        VAR3->VAR17 = 0;
        VAR3->VAR18 = 0;
        for (VAR16 = 0; VAR16 < VAR5->VAR19; VAR16++) {
            OPJ_UINT32 VAR17, VAR18;
            VAR7 = &VAR5->VAR20[VAR16];
            VAR17 = VAR5->VAR17 * (1u << (VAR7->VAR21 + VAR5->VAR19 - 1 - VAR16));
            VAR18 = VAR5->VAR18 * (1u << (VAR7->VAR22 + VAR5->VAR19 - 1 - VAR16));
            VAR3->VAR17 = !VAR3->VAR17 ? VAR17 : FUN2(VAR3->VAR17, VAR17);
            VAR3->VAR18 = !VAR3->VAR18 ? VAR18 : FUN2(VAR3->VAR18, VAR18);
        }
        if (!VAR3->VAR23) {
            VAR3->VAR13.VAR24 = VAR3->VAR24;
            VAR3->VAR13.VAR25 = VAR3->VAR25;
            VAR3->VAR13.VAR26 = VAR3->VAR26;
            VAR3->VAR13.VAR27 = VAR3->VAR27;
        }
        for (VAR3->VAR28 = VAR3->VAR13.VAR24; VAR3->VAR28 < VAR3->VAR13.VAR26;
                VAR3->VAR28 += (VAR29)(VAR3->VAR18 - (VAR30)(VAR3->VAR28 % (VAR29)VAR3->VAR18))) {
            for (VAR3->VAR31 = VAR3->VAR13.VAR25; VAR3->VAR31 < VAR3->VAR13.VAR27;
                    VAR3->VAR31 += (VAR29)(VAR3->VAR17 - (VAR30)(VAR3->VAR31 % (VAR29)VAR3->VAR17))) {
                for (VAR3->VAR16 = VAR3->VAR13.VAR32;
                        VAR3->VAR16 < FUN2(VAR3->VAR13.VAR33, VAR5->VAR19); VAR3->VAR16++) {
                    OPJ_UINT32 VAR34;
                    OPJ_INT32 VAR35, VAR36;
                    OPJ_INT32 VAR37, VAR38;
                    OPJ_UINT32 VAR39, VAR40;
                    OPJ_INT32 VAR41, VAR42;
                    VAR7 = &VAR5->VAR20[VAR3->VAR16];
                    VAR34 = VAR5->VAR19 - 1 - VAR3->VAR16;
                    VAR35 = FUN3(VAR3->VAR25, (VAR29)(VAR5->VAR17 << VAR34));
                    VAR36 = FUN3(VAR3->VAR24, (VAR29)(VAR5->VAR18 << VAR34));
                    VAR37 = FUN3(VAR3->VAR27, (VAR29)(VAR5->VAR17 << VAR34));
                     VAR38 = FUN3(VAR3->VAR26, (VAR29)(VAR5->VAR18 << VAR34));
                     VAR39 = VAR7->VAR21 + VAR34;
                     VAR40 = VAR7->VAR22 + VAR34;






















                     if (!((VAR3->VAR28 % (VAR29)(VAR5->VAR18 << VAR40) == 0) || ((VAR3->VAR28 == VAR3->VAR24) &&
                             ((VAR36 << VAR34) % (1 << VAR40))))) {
                         continue;
                    }
                    if (!((VAR3->VAR31 % (VAR29)(VAR5->VAR17 << VAR39) == 0) || ((VAR3->VAR31 == VAR3->VAR25) &&
                            ((VAR35 << VAR34) % (1 << VAR39))))) {
                        continue;
                    }

                    if ((VAR7->VAR43 == 0) || (VAR7->VAR44 == 0)) {
                        continue;
                    }

                    if ((VAR35 == VAR37) || (VAR36 == VAR38)) {
                        continue;
                    }

                    VAR41 = FUN4(FUN3(VAR3->VAR31,
                                                (VAR29)(VAR5->VAR17 << VAR34)), (VAR29)VAR7->VAR21)
                           - FUN4(VAR35, (VAR29)VAR7->VAR21);
                    VAR42 = FUN4(FUN3(VAR3->VAR28,
                                                (VAR29)(VAR5->VAR18 << VAR34)), (VAR29)VAR7->VAR22)
                           - FUN4(VAR36, (VAR29)VAR7->VAR22);
                    VAR3->VAR45 = (VAR30)(VAR41 + VAR42 * (VAR29)VAR7->VAR43);
                    for (VAR3->VAR46 = VAR3->VAR13.VAR47; VAR3->VAR46 < VAR3->VAR13.VAR48; VAR3->VAR46++) {
                        VAR8 = VAR3->VAR46 * VAR3->VAR49 + VAR3->VAR16 * VAR3->VAR50 + VAR3->VAR11 *
                                VAR3->VAR51 + VAR3->VAR45 * VAR3->VAR52;
                        if (!VAR3->VAR53[VAR8]) {
                            VAR3->VAR53[VAR8] = 1;
                            return VAR54;
                        }
VAR12:
                        ;
                    }
                }
            }
        }
    }

    return VAR55;
}