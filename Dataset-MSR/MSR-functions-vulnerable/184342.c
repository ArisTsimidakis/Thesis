bool VAR1::FUN1(VAR2::VAR3& VAR4, const VAR5* VAR6, VAR7& VAR8)


 {
     if (!FUN2())
         return false;

    VAR5* VAR9 = VAR10.FUN3();
    if (!VAR9 || !VAR9->FUN4())
        return false;

    while (!VAR9->FUN5()) {
        VAR5* VAR11 = VAR9->FUN6();
        if (!VAR11)
            break;
        VAR9 = VAR11;
    }

     if (VAR6 != VAR9)
         return false;
 

    VAR12 FUN7(VAR13->FUN8(VAR4));


     VAR14 = VAR15::FUN9(VAR13->FUN10(), VAR13->FUN11(), FUN12(VAR14));
 
     VAR16* VAR17 = VAR9->FUN13();
    FUN14(VAR17);

    VAR18* VAR19 = VAR17->FUN15()->FUN16(VAR14, VAR20::VAR21);
    if (!VAR19)
        return false;

    VAR22 = true;

    
    
    VAR8.VAR23 = VAR19->FUN17();
    VAR8.VAR24 = VAR19->FUN18();

    VAR25.VAR23 = 0;
    VAR25.VAR24 = 0;

    FUN19(VAR26, "",
        VAR4.FUN20(), VAR4.FUN21(), VAR8.VAR23, VAR8.VAR24);

    return true;
}