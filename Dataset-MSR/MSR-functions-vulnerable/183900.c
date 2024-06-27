VAR1* VAR2::FUN1(VAR1* VAR3, const VAR4& VAR5, VAR6& VAR7)
{
    
    if (VAR3->FUN2() || (VAR3->FUN3() && VAR3->FUN3()->FUN2())) {
        FUN4(VAR5);
        return 0;
     }
 
     VAR1* VAR8 = VAR3->FUN5();


     VAR9<VAR10> VAR11 = VAR10::FUN6(VAR12);
     VAR11->FUN7(VAR5, VAR3->FUN8() ? VAR3->FUN8() : VAR12->FUN9());
 
    
    VAR13* VAR14 = VAR3->FUN3();
    VAR15<VAR16<VAR17> > VAR18;
    for (VAR1* VAR19 = VAR14->FUN10(); VAR19; VAR19 = VAR19->FUN11())
        VAR18.FUN12(FUN13(VAR19, 0));

    
    String VAR20 = VAR5;
    VAR20.FUN14();
    VAR15<VAR16<VAR17> > VAR21;
    for (VAR1* VAR19 = VAR14->FUN10(); VAR19 != VAR3; VAR19 = VAR19->FUN11())
        VAR21.FUN12(FUN13(VAR19, 0));
    for (VAR1* VAR19 = VAR11->FUN10(); VAR19; VAR19 = VAR19->FUN11()) {
        if (VAR19->FUN15(VAR22) && !VAR19->FUN10() && VAR20.FUN16("") == VAR23)
            continue; 
        if (VAR19->FUN15(VAR24) && !VAR19->FUN10() && VAR20.FUN16("") == VAR23)
            continue; 
        VAR21.FUN12(FUN13(VAR19, &VAR25));
    }
    for (VAR1* VAR19 = VAR3->FUN11(); VAR19; VAR19 = VAR19->FUN11())
        VAR21.FUN12(FUN13(VAR19, 0));

    if (!FUN17(VAR14, VAR18, VAR21, VAR7)) {
        
        VAR7 = 0;
        if (!VAR26->FUN18(VAR14, VAR11.FUN19(), VAR3, VAR7))
            return 0;
    }
    return VAR8 ? VAR8->FUN11() : VAR14->FUN10();
}