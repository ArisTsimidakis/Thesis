void VAR1::FUN1(const VAR2& VAR3)
{
    FUN2(VAR4, VAR5);

    VAR6* VAR7 = FUN3(VAR4);
    VAR8* VAR9 = FUN4(FUN5(VAR3.FUN6().FUN7().FUN8()),
                                           VAR3.FUN9(),
                                           VAR3.FUN10().FUN7().FUN8());
    gboolean VAR10 = false;
    FUN11(VAR7, "", VAR4, VAR3.FUN12().FUN7().FUN8(), VAR9, &VAR10);

    if (VAR10) {
        FUN13(VAR9);
        return;
    }

    if (!FUN14(VAR3)) {
        FUN13(VAR9);
        return;
    }

    String VAR11;
    VAR12* VAR13 = 0;
    VAR12* VAR14 = FUN15(VAR15"", NULL, NULL);
    VAR16* VAR17 = FUN16(VAR14);
    FUN17(VAR14);

    if (!VAR17)
        VAR11 = VAR18::FUN18("", VAR9->VAR19);
    else {
        gboolean VAR20 = FUN19(VAR17, 0, &VAR13, 0, 0, 0);
        if (!VAR20)
            VAR11 = VAR18::FUN18("", VAR9->VAR19);
        else
            VAR11 = VAR18::FUN18(VAR13, VAR3.FUN12().FUN7().FUN8(), VAR9->VAR19);
    }

    FUN20(VAR4, VAR11.FUN7().FUN8(), 0, VAR3.FUN12().FUN7().FUN8());

    FUN17(VAR13);

    if (VAR17)
        FUN21(VAR17);

    FUN13(VAR9);
}