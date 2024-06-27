FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, Jbig2ComposeOp VAR8)
 {

    int VAR9, VAR10;

    int VAR11 = VAR5->VAR12;

    int VAR13 = VAR5->VAR14;

    int VAR15 = 0;

    int VAR16 = 0;










 
     
     if (VAR6 < 0) {
        VAR15 += -VAR6;
        VAR11 -= -VAR6;
        VAR6 = 0;
    }
    if (VAR7 < 0) {
        VAR16 += -VAR7;
        VAR13 -= -VAR7;
        VAR7 = 0;
    }
    if (VAR6 + VAR11 >= VAR4->VAR12)
        VAR11 = VAR4->VAR12 - VAR6;
    if (VAR7 + VAR13 >= VAR4->VAR14)
        VAR13 = VAR4->VAR14 - VAR7;

    switch (VAR8) {
    case VAR17:
        for (VAR10 = 0; VAR10 < VAR13; VAR10++) {
            for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
                FUN2(VAR4, VAR9 + VAR6, VAR10 + VAR7, FUN3(VAR5, VAR9 + VAR15, VAR10 + VAR16) | FUN3(VAR4, VAR9 + VAR6, VAR10 + VAR7));
            }
        }
        break;
    case VAR18:
        for (VAR10 = 0; VAR10 < VAR13; VAR10++) {
            for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
                FUN2(VAR4, VAR9 + VAR6, VAR10 + VAR7, FUN3(VAR5, VAR9 + VAR15, VAR10 + VAR16) & FUN3(VAR4, VAR9 + VAR6, VAR10 + VAR7));
            }
        }
        break;
    case VAR19:
        for (VAR10 = 0; VAR10 < VAR13; VAR10++) {
            for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
                FUN2(VAR4, VAR9 + VAR6, VAR10 + VAR7, FUN3(VAR5, VAR9 + VAR15, VAR10 + VAR16) ^ FUN3(VAR4, VAR9 + VAR6, VAR10 + VAR7));
            }
        }
        break;
    case VAR20:
        for (VAR10 = 0; VAR10 < VAR13; VAR10++) {
            for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
                FUN2(VAR4, VAR9 + VAR6, VAR10 + VAR7, (FUN3(VAR5, VAR9 + VAR15, VAR10 + VAR16) == FUN3(VAR4, VAR9 + VAR6, VAR10 + VAR7)));
            }
        }
        break;
    case VAR21:
        for (VAR10 = 0; VAR10 < VAR13; VAR10++) {
            for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
                FUN2(VAR4, VAR9 + VAR6, VAR10 + VAR7, FUN3(VAR5, VAR9 + VAR15, VAR10 + VAR16));
            }
        }
        break;
    }

    return 0;
}