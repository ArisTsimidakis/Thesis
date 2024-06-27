static int FUN1(VAR1 *VAR2, int VAR3, int VAR4,
                              int VAR5, int VAR6, int VAR7, int VAR8,
                              int VAR9, int VAR10,
                              int VAR11, int VAR12,
                              const int *VAR13, const int *VAR14)
{
    VAR15 *VAR16 = VAR2->VAR17;
    uint8_t VAR18;
    int VAR19[2];
    int VAR20[2];
    int VAR21;

    VAR19[0] = VAR13[0];
    VAR19[1] = VAR13[1];
    VAR20[0] = VAR14[0];
    VAR20[1] = VAR14[1];

    if (VAR16->VAR22.VAR23) {
        if (VAR11 == 1) {
            VAR16->VAR24.VAR25   = VAR16->VAR26.VAR25[VAR12];
            if (VAR2->VAR27.VAR28->VAR29 == 3) {
                VAR16->VAR24.VAR30 = VAR16->VAR26.VAR30[VAR12];
                VAR16->VAR24.VAR31     = VAR16->VAR26.VAR31[VAR12];
            } else {
                VAR16->VAR24.VAR30 = VAR16->VAR26.VAR30[0];
                VAR16->VAR24.VAR31     = VAR16->VAR26.VAR31[0];
            }
        }
    } else {
        VAR16->VAR24.VAR25   = VAR16->VAR26.VAR25[0];
        VAR16->VAR24.VAR30 = VAR16->VAR26.VAR30[0];
        VAR16->VAR24.VAR31     = VAR16->VAR26.VAR31[0];
    }

    if (VAR10 <= VAR2->VAR27.VAR28->VAR32 &&
        VAR10 >  VAR2->VAR27.VAR28->VAR33    &&
        VAR11     < VAR16->VAR22.VAR34       &&
        !(VAR16->VAR22.VAR23 && VAR11 == 0)) {
        VAR18 = FUN2(VAR2, VAR10);
    } else {
        int VAR35 = VAR2->VAR27.VAR28->VAR36 == 0 &&
                          VAR16->VAR22.VAR37 == VAR38 &&
                          VAR16->VAR22.VAR39 != VAR40 &&
                          VAR11 == 0;

        VAR18 = VAR10 > VAR2->VAR27.VAR28->VAR32 ||
                               (VAR16->VAR22.VAR23 && VAR11 == 0) ||
                               VAR35;
    }

    if (VAR2->VAR27.VAR28->VAR29 && (VAR10 > 2 || VAR2->VAR27.VAR28->VAR29 == 3)) {
        if (VAR11 == 0 || VAR19[0]) {
            VAR19[0] = FUN3(VAR2, VAR11);
            if (VAR2->VAR27.VAR28->VAR29 == 2 && (!VAR18 || VAR10 == 3)) {
                VAR19[1] = FUN3(VAR2, VAR11);
            }
        }

        if (VAR11 == 0 || VAR20[0]) {
            VAR20[0] = FUN3(VAR2, VAR11);
            if (VAR2->VAR27.VAR28->VAR29 == 2 && (!VAR18 || VAR10 == 3)) {
                VAR20[1] = FUN3(VAR2, VAR11);
            }
        }
    }

    if (VAR18) {
        const int VAR41 = 1 << (VAR10 - 1);
        const int VAR42 = VAR3 + VAR41;
        const int VAR43 = VAR4 + VAR41;

#VAR44 FUN4(VAR45, VAR46, VAR47)                                                    \
do {                                                                            \
    VAR21 = FUN1(VAR2, VAR45, VAR46, VAR3, VAR4, VAR7, VAR8, VAR9, \
                             VAR10 - 1, VAR11 + 1, VAR47,         \
                             VAR19, VAR20);                                   \
    if (VAR21 < 0)                                                                \
        return VAR21;                                                             \
} while (0)

        FUN4(VAR3, VAR4, 0);
        FUN4(VAR42, VAR4, 1);
        FUN4(VAR3, VAR43, 2);
        FUN4(VAR42, VAR43, 3);

#undef VAR48
    } else {
        int VAR49      = 1 << VAR2->VAR27.VAR28->VAR33;
        int VAR50 = VAR2->VAR27.VAR28->VAR33;
        int VAR51     = VAR2->VAR27.VAR28->VAR52;
        int VAR53         = 1;

        if (VAR16->VAR22.VAR37 == VAR54 || VAR11 != 0 ||
            VAR19[0] || VAR20[0] ||
            (VAR2->VAR27.VAR28->VAR29 == 2 && (VAR19[1] || VAR20[1]))) {
            VAR53 = FUN5(VAR2, VAR11);
        }

        VAR21 = FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8,
                                 VAR9, VAR10,
                                 VAR12, VAR53, VAR19, VAR20);
        if (VAR21 < 0)
            return VAR21;
        
        if (VAR53) {
            int VAR55, VAR56;
            for (VAR55 = 0; VAR55 < (1 << VAR10); VAR55 += VAR49)
                for (VAR56 = 0; VAR56 < (1 << VAR10); VAR56 += VAR49) {
                    int VAR57 = (VAR3 + VAR56) >> VAR50;
                    int VAR58 = (VAR4 + VAR55) >> VAR50;
                    VAR2->VAR53[VAR58 * VAR51 + VAR57] = 1;
                }
        }
        if (!VAR2->VAR59.VAR60) {
            FUN7(VAR2, VAR3, VAR4, VAR10);
            if (VAR2->VAR27.VAR61->VAR62 &&
                VAR16->VAR22.VAR63)
                FUN8(VAR2, VAR3, VAR4, VAR10);
        }
    }
    return 0;
}