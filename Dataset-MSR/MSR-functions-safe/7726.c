static void VAR1 FUN1(void *VAR2)
{
    VAR3 *VAR4 = VAR2;
    size_t VAR5 = 7;
    int32_t VAR6;
    struct stat VAR7;
    V9fsQID VAR8;
    V9fsString VAR9;
    VAR10 *VAR11;
    gid_t VAR12;
    int VAR13;
    int VAR14 = 0;

    FUN2(&VAR9);
    VAR14 = FUN3(VAR4, VAR5, "", &VAR6, &VAR9, &VAR13, &VAR12);
    if (VAR14 < 0) {
        goto VAR15;
    }
    FUN4(VAR4->VAR16, VAR4->VAR17, VAR6, VAR9.VAR18, VAR13, VAR12);

    if (FUN5(VAR9.VAR18)) {
        VAR14 = -VAR19;
        goto VAR15;
    }

    if (!strcmp("", VAR9.VAR18) || !strcmp("", VAR9.VAR18)) {
        VAR14 = -VAR20;
        goto VAR15;
    }

    VAR11 = FUN6(VAR4, VAR6);
    if (VAR11 == NULL) {
        VAR14 = -VAR19;
        goto VAR15;
    }
    VAR14 = FUN7(VAR4, VAR11, &VAR9, VAR13, VAR11->VAR21, VAR12, &VAR7);
    if (VAR14 < 0) {
        goto VAR22;
    }
    FUN8(&VAR7, &VAR8);
    VAR14 = FUN9(VAR4, VAR5, "", &VAR8);
    if (VAR14 < 0) {
        goto VAR22;
    }
    VAR14 += VAR5;
    FUN10(VAR4->VAR16, VAR4->VAR17,
                            VAR8.VAR23, VAR8.VAR24, VAR8.VAR25, VAR14);
VAR22:
    FUN11(VAR4, VAR11);
VAR15:
    FUN12(VAR4, VAR14);
    FUN13(&VAR9);
}