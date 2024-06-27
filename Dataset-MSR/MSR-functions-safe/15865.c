static void FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = FUN3(VAR2->VAR8);
    int VAR9 = VAR2->VAR10 ? VAR2->VAR11 : 1;

    if (!VAR7->VAR12) {
        return;
    }
    if (VAR7->VAR12->VAR13->VAR14 != VAR15) {
        return;
    }

    if (!FUN4(VAR7->VAR12)) {
        return;
    }

    if (!!VAR2->VAR16 ==
        (FUN5(VAR2, VAR3) && !VAR7->VAR12->VAR17)) {
        return;
    }
    if (!VAR2->VAR16) {
        int VAR18;
        if (!FUN6(FUN4(VAR7->VAR12), VAR5)) {
            return;
        }
        VAR2->VAR16 = 1;
        VAR18 = FUN7(VAR5, VAR2->VAR8->VAR19, VAR9);
        if (VAR18 < 0) {
            FUN8(""
                         "", -VAR18);
            VAR2->VAR16 = 0;
        }
    } else {
        FUN9(VAR5, VAR2->VAR8->VAR19, VAR9);
        VAR2->VAR16 = 0;
    }
}