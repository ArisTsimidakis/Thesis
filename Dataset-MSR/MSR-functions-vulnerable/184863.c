bool VAR1::FUN1(VAR2* VAR3)
 {


     VAR4* VAR5 = FUN2().FUN3();
     if (VAR6 || !VAR5)
         return VAR6;

    VAR6 = true;
    VAR7 = false;

    
    if (!FUN4(VAR3)) {
        VAR6 = false;
        return false;
    }

    StringPairVector VAR8;
    FUN5(VAR8);
    VAR9<VAR10> VAR11 = VAR10::FUN6(this, VAR8, &FUN2(), VAR12);
    VAR5->FUN7()->FUN8()->FUN9(VAR11.FUN10());

    if (FUN11(VAR2::FUN12(FUN13().VAR13)))
        VAR7 = true;

    VAR6 = false;

    if (VAR7)
        FUN14(VAR3, true, true, VAR12);

    return VAR7;
}