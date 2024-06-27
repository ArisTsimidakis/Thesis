static void VAR1 FUN1(void *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = NULL;
    int VAR6, VAR7 = 0;
    V9fsPath VAR8, VAR9;
    uint16_t VAR10;
    struct stat VAR11;
    size_t VAR12 = 7;
    int32_t VAR13, VAR14;
    VAR15 *VAR16 = NULL;
    VAR17 *VAR18;
    VAR17 *VAR19 = NULL;
    VAR20 *VAR21 = VAR2;
    VAR22 *VAR23 = VAR21->VAR23;
    V9fsQID VAR24;

    VAR7 = FUN2(VAR21, VAR12, "", &VAR13, &VAR14, &VAR10);
    if (VAR7 < 0) {
        FUN3(VAR21, VAR7);
        return ;
    }
    VAR12 += VAR7;

    FUN4(VAR21->VAR25, VAR21->VAR26, VAR13, VAR14, VAR10);

    if (VAR10 && VAR10 <= VAR27) {
        VAR16 = FUN5(sizeof(VAR16[0]) * VAR10);
        VAR5   = FUN5(sizeof(VAR5[0]) * VAR10);
        for (VAR6 = 0; VAR6 < VAR10; VAR6++) {
            VAR7 = FUN2(VAR21, VAR12, "", &VAR16[VAR6]);
            if (VAR7 < 0) {
                goto VAR28;
            }
            if (FUN6(VAR16[VAR6].VAR29)) {
                VAR7 = -VAR30;
                goto VAR28;
            }
            VAR12 += VAR7;
        }
    } else if (VAR10 > VAR27) {
        VAR7 = -VAR31;
        goto VAR28;
    }
    VAR18 = FUN7(VAR21, VAR13);
    if (VAR18 == NULL) {
        VAR7 = -VAR30;
        goto VAR28;
    }

    FUN8(&VAR8);
    FUN8(&VAR9);

    VAR7 = FUN9(VAR21, VAR18, &VAR24);
    if (VAR7 < 0) {
        goto VAR32;
    }

    
    FUN10(&VAR8, &VAR18->VAR9);
    FUN10(&VAR9, &VAR18->VAR9);
    for (VAR3 = 0; VAR3 < VAR10; VAR3++) {
        if (FUN11(&VAR21->VAR23->VAR33, &VAR24) ||
            strcmp("", VAR16[VAR3].VAR29)) {
            VAR7 = FUN12(VAR21, &VAR8, VAR16[VAR3].VAR29,
                                       &VAR9);
            if (VAR7 < 0) {
                goto VAR32;
            }

            VAR7 = FUN13(VAR21, &VAR9, &VAR11);
            if (VAR7 < 0) {
                goto VAR32;
            }
            FUN14(&VAR11, &VAR24);
            FUN10(&VAR8, &VAR9);
        }
        memcpy(&VAR5[VAR3], &VAR24, sizeof(VAR24));
    }
    if (VAR13 == VAR14) {
        if (VAR18->VAR34 != VAR35) {
            VAR7 = -VAR31;
            goto VAR32;
        }
        FUN15(VAR23);
        FUN10(&VAR18->VAR9, &VAR9);
        FUN16(VAR23);
    } else {
        VAR19 = FUN17(VAR23, VAR14);
        if (VAR19 == NULL) {
            VAR7 = -VAR31;
            goto VAR32;
        }
        VAR19->VAR36 = VAR18->VAR36;
        FUN10(&VAR19->VAR9, &VAR9);
    }
    VAR7 = FUN18(VAR21, VAR10, VAR5);
    FUN19(VAR21->VAR25, VAR21->VAR26, VAR10, VAR5);
VAR32:
    FUN20(VAR21, VAR18);
    if (VAR19) {
        FUN20(VAR21, VAR19);
    }
    FUN21(&VAR8);
    FUN21(&VAR9);
VAR28:
    FUN3(VAR21, VAR7);
    if (VAR10 && VAR10 <= VAR27) {
        for (VAR3 = 0; VAR3 < VAR10; VAR3++) {
            FUN22(&VAR16[VAR3]);
        }
        FUN23(VAR16);
        FUN23(VAR5);
    }
}