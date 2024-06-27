static VAR1::VAR2<VAR1::VAR3> FUN1(const VAR1::VAR4& VAR5)
 {
     FUN2("");
     if (VAR5.FUN3() < 3)

        return VAR6::FUN4();


     VAR7* VAR8 = VAR9::FUN5(VAR5.FUN6());
     ExceptionCode VAR10 = 0;
     {
    FUN7(VAR11<>, VAR12, FUN8(VAR5, 0, VAR13));
    FUN9(float, VAR14, static_cast<float>(FUN8(VAR5, 1, VAR13)->FUN10()));
    FUN9(int, VAR15, VAR16::FUN11(FUN8(VAR5, 2, VAR13)) ? VAR16::FUN5(VAR1::VAR2<VAR1::VAR17>::FUN12(FUN8(VAR5, 2, VAR13))) : 0);
    VAR18<bool> VAR19 = VAR8->FUN13(VAR12, VAR14, VAR15, VAR10);
    if (FUN14(VAR10))
        goto VAR20;
    return FUN15(VAR19.FUN16(), VAR5.FUN17());
    }
    VAR20:
    VAR6::FUN18(VAR10, VAR5.FUN17());
    return VAR1::VAR2<VAR1::VAR3>();
}