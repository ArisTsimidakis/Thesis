VAR1::VAR2<VAR1::VAR3> VAR4::FUN1(const VAR1::VAR5& VAR6)
{
    FUN2("");
     VAR7* VAR8 = VAR4::FUN3(VAR6.FUN4());
 
     if (VAR6.FUN5() < 1)

        return VAR9::FUN6();


 
     FUN7(VAR10<VAR11>, VAR12, VAR6[0]);
     if (VAR6.FUN5() <= 1) {
        VAR8->FUN8(VAR12);
        return VAR1::VAR2<VAR1::VAR3>();
    }
    VAR13<VAR14> VAR15;
    if (!FUN9(VAR6[1]) && VAR6[1]->FUN10()) {
        FUN11(VAR1::VAR2<VAR1::VAR16>, VAR17, VAR1::VAR2<VAR1::VAR16>::FUN12(VAR6[1]));
        VAR15 = VAR14::FUN13();
        VAR1::VAR18<VAR1::VAR3> VAR19 = VAR17->FUN14(VAR1::VAR20::FUN15(""));
        if (!VAR19.FUN16() && !FUN9(VAR19)) {
            FUN11(bool, VAR21, VAR19->FUN17());
            VAR15->FUN18(VAR21);
        }
        VAR1::VAR18<VAR1::VAR3> VAR22 = VAR17->FUN14(VAR1::VAR20::FUN15(""));
        if (!VAR22.FUN16() && !FUN9(VAR22)) {
            FUN11(bool, VAR23, VAR22->FUN17());
            VAR15->FUN19(VAR23);
        }
    }
    VAR13<VAR24> VAR25;
    if (VAR6.FUN5() > 2 && !VAR6[2]->FUN20() && !VAR6[2]->FUN21()) {
        if (!VAR6[2]->FUN10())
            return FUN22(VAR26, VAR6.FUN23());
        VAR25 = VAR27::FUN13(VAR6[2], FUN24());
    }
    VAR13<VAR28> VAR29;
    if (VAR6.FUN5() > 3 && !VAR6[3]->FUN20() && !VAR6[3]->FUN21()) {
        if (!VAR6[3]->FUN10())
            return FUN22(VAR26, VAR6.FUN23());
        VAR29 = VAR30::FUN13(VAR6[3], FUN24());
    }
    VAR8->FUN8(VAR12, VAR15, VAR25, VAR29);
    return VAR1::VAR2<VAR1::VAR3>();
}