static VAR1 FUN1(VAR2 * VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    OPJ_UINT32 VAR8 = 0;

    if (!VAR3->VAR9) {
        goto VAR10;
    } else {
        OPJ_UINT32 VAR11, VAR12;
        VAR3->VAR9 = 0;
        VAR3->VAR13 = 0;
        VAR3->VAR14 = 0;
        for (VAR11 = 0; VAR11 < VAR3->VAR15; VAR11++) {
            VAR5 = &VAR3->VAR16[VAR11];
            for (VAR12 = 0; VAR12 < VAR5->VAR17; VAR12++) {
                OPJ_UINT32 VAR13, VAR14;
                VAR7 = &VAR5->VAR18[VAR12];
                VAR13 = VAR5->VAR13 * (1u << (VAR7->VAR19 + VAR5->VAR17 - 1 - VAR12));
                VAR14 = VAR5->VAR14 * (1u << (VAR7->VAR20 + VAR5->VAR17 - 1 - VAR12));
                VAR3->VAR13 = !VAR3->VAR13 ? VAR13 : FUN2(VAR3->VAR13, VAR13);
                VAR3->VAR14 = !VAR3->VAR14 ? VAR14 : FUN2(VAR3->VAR14, VAR14);
            }
        }
    }
    if (!VAR3->VAR21) {
        VAR3->VAR22.VAR23 = VAR3->VAR23;
        VAR3->VAR22.VAR24 = VAR3->VAR24;
        VAR3->VAR22.VAR25 = VAR3->VAR25;
        VAR3->VAR22.VAR26 = VAR3->VAR26;
    }
    for (VAR3->VAR12 = VAR3->VAR22.VAR27; VAR3->VAR12 < VAR3->VAR22.VAR28; VAR3->VAR12++) {
        for (VAR3->VAR29 = VAR3->VAR22.VAR23; VAR3->VAR29 < VAR3->VAR22.VAR25;
                VAR3->VAR29 += (VAR30)(VAR3->VAR14 - (VAR31)(VAR3->VAR29 % (VAR30)VAR3->VAR14))) {
            for (VAR3->VAR32 = VAR3->VAR22.VAR24; VAR3->VAR32 < VAR3->VAR22.VAR26;
                    VAR3->VAR32 += (VAR30)(VAR3->VAR13 - (VAR31)(VAR3->VAR32 % (VAR30)VAR3->VAR13))) {
                for (VAR3->VAR11 = VAR3->VAR22.VAR33; VAR3->VAR11 < VAR3->VAR22.VAR34; VAR3->VAR11++) {
                    OPJ_UINT32 VAR35;
                    OPJ_INT32 VAR36, VAR37;
                    OPJ_INT32  VAR38, VAR39;
                    OPJ_UINT32  VAR40, VAR41;
                    OPJ_INT32  VAR42, VAR43;
                    VAR5 = &VAR3->VAR16[VAR3->VAR11];
                    if (VAR3->VAR12 >= VAR5->VAR17) {
                        continue;
                    }
                    VAR7 = &VAR5->VAR18[VAR3->VAR12];
                    VAR35 = VAR5->VAR17 - 1 - VAR3->VAR12;
                    VAR36 = FUN3(VAR3->VAR24, (VAR30)(VAR5->VAR13 << VAR35));
                    VAR37 = FUN3(VAR3->VAR23, (VAR30)(VAR5->VAR14 << VAR35));
                    VAR38 = FUN3(VAR3->VAR26, (VAR30)(VAR5->VAR13 << VAR35));
                     VAR39 = FUN3(VAR3->VAR25, (VAR30)(VAR5->VAR14 << VAR35));
                     VAR40 = VAR7->VAR19 + VAR35;
                     VAR41 = VAR7->VAR20 + VAR35;






















                     if (!((VAR3->VAR29 % (VAR30)(VAR5->VAR14 << VAR41) == 0) || ((VAR3->VAR29 == VAR3->VAR23) &&
                             ((VAR37 << VAR35) % (1 << VAR41))))) {
                         continue;
                    }
                    if (!((VAR3->VAR32 % (VAR30)(VAR5->VAR13 << VAR40) == 0) || ((VAR3->VAR32 == VAR3->VAR24) &&
                            ((VAR36 << VAR35) % (1 << VAR40))))) {
                        continue;
                    }

                    if ((VAR7->VAR44 == 0) || (VAR7->VAR45 == 0)) {
                        continue;
                    }

                    if ((VAR36 == VAR38) || (VAR37 == VAR39)) {
                        continue;
                    }

                    VAR42 = FUN4(FUN3(VAR3->VAR32,
                                                (VAR30)(VAR5->VAR13 << VAR35)), (VAR30)VAR7->VAR19)
                           - FUN4(VAR36, (VAR30)VAR7->VAR19);
                    VAR43 = FUN4(FUN3(VAR3->VAR29,
                                                (VAR30)(VAR5->VAR14 << VAR35)), (VAR30)VAR7->VAR20)
                           - FUN4(VAR37, (VAR30)VAR7->VAR20);
                    VAR3->VAR46 = (VAR31)(VAR42 + VAR43 * (VAR30)VAR7->VAR44);
                    for (VAR3->VAR47 = VAR3->VAR22.VAR48; VAR3->VAR47 < VAR3->VAR22.VAR49; VAR3->VAR47++) {
                        VAR8 = VAR3->VAR47 * VAR3->VAR50 + VAR3->VAR12 * VAR3->VAR51 + VAR3->VAR11 *
                                VAR3->VAR52 + VAR3->VAR46 * VAR3->VAR53;
                        if (!VAR3->VAR54[VAR8]) {
                            VAR3->VAR54[VAR8] = 1;
                            return VAR55;
                        }
VAR10:
                        ;
                    }
                }
            }
        }
    }

    return VAR56;
}