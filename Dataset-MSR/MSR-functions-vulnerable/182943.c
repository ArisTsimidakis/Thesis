static VAR1 FUN1(VAR2 * VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR6 *VAR7 = NULL;
    long VAR8 = 0;

    if (!VAR3->VAR9) {
        goto VAR10;
    } else {
        int VAR11, VAR12;
        VAR3->VAR9 = 0;
        VAR3->VAR13 = 0;
        VAR3->VAR14 = 0;
        for (VAR11 = 0; VAR11 < VAR3->VAR15; VAR11++) {
            VAR5 = &VAR3->VAR16[VAR11];
            for (VAR12 = 0; VAR12 < VAR5->VAR17; VAR12++) {
                int VAR13, VAR14;
                VAR7 = &VAR5->VAR18[VAR12];
                VAR13 = VAR5->VAR13 * (1 << (VAR7->VAR19 + VAR5->VAR17 - 1 - VAR12));
                VAR14 = VAR5->VAR14 * (1 << (VAR7->VAR20 + VAR5->VAR17 - 1 - VAR12));
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
                VAR3->VAR29 += VAR3->VAR14 - (VAR3->VAR29 % VAR3->VAR14)) {
            for (VAR3->VAR30 = VAR3->VAR22.VAR24; VAR3->VAR30 < VAR3->VAR22.VAR26;
                    VAR3->VAR30 += VAR3->VAR13 - (VAR3->VAR30 % VAR3->VAR13)) {
                for (VAR3->VAR11 = VAR3->VAR22.VAR31; VAR3->VAR11 < VAR3->VAR22.VAR32; VAR3->VAR11++) {
                    int VAR33;
                    int VAR34, VAR35;
                    int VAR36, VAR37;
                    int VAR38, VAR39;
                    int VAR40, VAR41;
                    VAR5 = &VAR3->VAR16[VAR3->VAR11];
                    if (VAR3->VAR12 >= VAR5->VAR17) {
                        continue;
                    }
                    VAR7 = &VAR5->VAR18[VAR3->VAR12];
                    VAR33 = VAR5->VAR17 - 1 - VAR3->VAR12;
                    VAR34 = FUN3(VAR3->VAR24, VAR5->VAR13 << VAR33);
                    VAR35 = FUN3(VAR3->VAR23, VAR5->VAR14 << VAR33);
                    VAR36 = FUN3(VAR3->VAR26, VAR5->VAR13 << VAR33);
                    VAR37 = FUN3(VAR3->VAR25, VAR5->VAR14 << VAR33);
                    VAR38 = VAR7->VAR19 + VAR33;
                    VAR39 = VAR7->VAR20 + VAR33;

                    
                    if (VAR38 >= 31 || ((VAR5->VAR13 << VAR38) >> VAR38) != VAR5->VAR13 ||
                            VAR39 >= 31 || ((VAR5->VAR14 << VAR39) >> VAR39) != VAR5->VAR14) {
                        continue;
                    }

                    if (!((VAR3->VAR29 % (VAR5->VAR14 << VAR39) == 0) || ((VAR3->VAR29 == VAR3->VAR23) &&
                            ((VAR35 << VAR33) % (1 << VAR39))))) {
                        continue;
                    }
                    if (!((VAR3->VAR30 % (VAR5->VAR13 << VAR38) == 0) || ((VAR3->VAR30 == VAR3->VAR24) &&
                            ((VAR34 << VAR33) % (1 << VAR38))))) {
                        continue;
                    }

                    if ((VAR7->VAR42 == 0) || (VAR7->VAR43 == 0)) {
                        continue;
                    }

                    if ((VAR34 == VAR36) || (VAR35 == VAR37)) {
                        continue;
                    }

                    VAR40 = FUN4(FUN3(VAR3->VAR30, VAR5->VAR13 << VAR33), VAR7->VAR19)
                           - FUN4(VAR34, VAR7->VAR19);
                    VAR41 = FUN4(FUN3(VAR3->VAR29, VAR5->VAR14 << VAR33), VAR7->VAR20)
                           - FUN4(VAR35, VAR7->VAR20);
                    VAR3->VAR44 = VAR40 + VAR41 * VAR7->VAR42;
                     for (VAR3->VAR45 = VAR3->VAR22.VAR46; VAR3->VAR45 < VAR3->VAR22.VAR47; VAR3->VAR45++) {
                         VAR8 = VAR3->VAR45 * VAR3->VAR48 + VAR3->VAR12 * VAR3->VAR49 + VAR3->VAR11 *
                                 VAR3->VAR50 + VAR3->VAR44 * VAR3->VAR51;










                         if (!VAR3->VAR52[VAR8]) {
                             VAR3->VAR52[VAR8] = 1;
                             return VAR53;
                        }
VAR10:
                        ;
                    }
                }
            }
        }
    }

    return VAR54;
}