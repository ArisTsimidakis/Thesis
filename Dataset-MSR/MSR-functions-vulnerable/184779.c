static VAR1::VAR2<VAR1::VAR3> FUN1(const VAR1::VAR4& VAR5)
 {
     FUN2("");
     if (VAR5.FUN3() < 2)

        return VAR6::FUN4();


     VAR7* VAR8 = VAR9::FUN5(VAR5.FUN6());
     ExceptionCode VAR10 = 0;
     {
    FUN7(VAR11<>, VAR12, FUN8(VAR5, 0, VAR13));
    FUN9(VAR7*, VAR14, VAR9::FUN10(FUN8(VAR5, 1, VAR13)) ? VAR9::FUN5(VAR1::VAR2<VAR1::VAR15>::FUN11(FUN8(VAR5, 1, VAR13))) : 0);
    VAR16<VAR7> VAR17 = VAR8->FUN12(VAR12, VAR14, VAR10);
    if (FUN13(VAR10))
        goto VAR18;
    return FUN14(VAR17.FUN15(), VAR5.FUN16());
    }
    VAR18:
    VAR6::FUN17(VAR10, VAR5.FUN16());
    return VAR1::VAR2<VAR1::VAR3>();
}