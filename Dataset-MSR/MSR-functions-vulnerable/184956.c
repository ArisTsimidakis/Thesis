void VAR1::FUN1()
 {
     FUN2(FUN3()->FUN4());
 










     VAR2* VAR3 = FUN3()->FUN5();
     VAR4* VAR5 = FUN3()->FUN6();
 
    VAR6<VAR7> FUN7(VAR7::FUN8(VAR3, *this));
    VAR8 = VAR9.FUN9();
    VAR5->FUN10(VAR8);
    FUN11();

    VAR6<VAR10> VAR11 = VAR10::FUN8(VAR3, *this);
    VAR12 = VAR11.FUN9();
    VAR5->FUN10(VAR11);

    VAR6<VAR13> VAR14 = VAR13::FUN8(VAR3, *this);
    VAR15 = VAR14.FUN9();
    VAR5->FUN10(VAR14);

    bool VAR16 = false;
    if (VAR17::FUN12(this))
        VAR16 = true;
    VAR6<VAR18> VAR19 = VAR3->FUN13() ? VAR3->FUN13()->FUN14() : VAR18::FUN15();
    if (VAR19->FUN16(FUN17())) {
        VAR16 = true;
        VAR20 = true;
    }
    if (VAR16) {
        VAR6<VAR21> VAR22 = VAR21::FUN8(VAR3, *this);
        VAR23 = VAR22.FUN9();
        VAR5->FUN10(VAR23);
        VAR24 = true;
        FUN18();
    }
}