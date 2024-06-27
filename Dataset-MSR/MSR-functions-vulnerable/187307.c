void VAR1::FUN1(VAR2* VAR3, const VAR4& VAR5, const VAR4& VAR6, VAR7<VAR8> VAR9)
{
    if (!VAR10) {
        VAR9->FUN2(FUN3(VAR11::VAR12, ""));
        return;
    }

    VAR13<VAR14> VAR15 = VAR3->FUN4();
    String VAR16;
    
    if (!VAR3->FUN5(VAR16)) {
        VAR9->FUN2(FUN3(VAR11::VAR17, VAR16));
        return;
    }

    KURL VAR18 = FUN6(FUN6(), VAR15->FUN7());
    if (!VAR19::FUN8(VAR18.FUN9())) {
        VAR9->FUN2(FUN3(VAR11::VAR17, FUN10("" + VAR15->FUN7() + "")));
        return;
    }

    KURL VAR20 = VAR5;
    VAR20.FUN11();
    if (!VAR15->FUN12(VAR20)) {
        VAR13<VAR14> VAR21 = VAR14::FUN13(VAR20);
        VAR9->FUN2(FUN3(VAR11::VAR17, FUN10("" + VAR21->FUN7() + "" + VAR15->FUN7() + "")));
        return;
    }
    if (!VAR19::FUN8(VAR20.FUN9())) {
        VAR9->FUN2(FUN3(VAR11::VAR17, FUN10("" + VAR20.FUN14() + "")));
        return;
    }

    KURL VAR22 = VAR6;
    VAR22.FUN11();

    if (!VAR15->FUN12(VAR22)) {
        VAR13<VAR14> VAR23 = VAR14::FUN13(VAR22);
        VAR9->FUN2(FUN3(VAR11::VAR17, FUN10("" + VAR23->FUN7() + "" + VAR15->FUN7() + "")));
        return;
    }
    if (!VAR19::FUN8(VAR22.FUN9())) {
        VAR9->FUN2(FUN3(VAR11::VAR17, FUN10("" + VAR22.FUN14() + "")));
        return;
    }

    WebString VAR24;
    if (!VAR10->FUN15(VAR22, VAR20, &VAR24)) {
        VAR9->FUN2(FUN3(VAR11::VAR25, VAR26::FUN16("" + VAR24.FUN17())));
         return;
     }
 
















     VAR10->FUN18(VAR22, VAR20, VAR9.FUN19());
 }