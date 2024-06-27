static VAR1::VAR2<VAR1::VAR3> FUN1(const VAR1::VAR4& VAR5,
                                                 int VAR6)
{
    
    
    
    
    
    
    
     
     
     if (VAR5.FUN2() != 3)

        return VAR7::FUN3();


 
     VAR8* VAR9 = VAR10::FUN4(VAR5.FUN5());
 
    if (VAR5.FUN2() > 0 && !FUN6(VAR5[0]) && !VAR11::FUN7(VAR5[0])) {
        VAR7::FUN8();
        return FUN9();
    }
    bool VAR12 = false;
    VAR13* VAR14 = FUN10(VAR5[0], VAR12);
    
    bool VAR15 = VAR5[1]->FUN11();
    if (VAR16::FUN7(VAR5[2])) {
        VAR17* VAR18 = VAR16::FUN4(VAR5[2]->FUN12());
        FUN13(VAR18 != NULL);
        ExceptionCode VAR19 = 0;
        switch (VAR6) {
            case 2: VAR9->FUN14(VAR14, VAR15, VAR18, VAR19); break;
            case 3: VAR9->FUN15(VAR14, VAR15, VAR18, VAR19); break;
            case 4: VAR9->FUN16(VAR14, VAR15, VAR18, VAR19); break;
            default: FUN17(); break;
        }
        if (VAR19)
            VAR7::FUN18(VAR19, VAR5.FUN19());
        return VAR1::FUN20();
    }

    if (VAR5[2].FUN21() || !VAR5[2]->FUN22()) {
        VAR7::FUN8();
        return FUN9();
    }
    VAR1::VAR2<VAR1::VAR20> VAR18 =
      VAR1::VAR21<VAR1::VAR20>::FUN23(VAR5[2]);
    uint32_t VAR22 = VAR18->FUN2();
    float* VAR23 = FUN24(VAR18, VAR22);
    if (!VAR23) {
        
        VAR7::FUN18(VAR24, VAR5.FUN19());
        return FUN9();
    }
    ExceptionCode VAR19 = 0;
    switch (VAR6) {
        case 2: VAR9->FUN14(VAR14, VAR15, VAR23, VAR22, VAR19); break;
        case 3: VAR9->FUN15(VAR14, VAR15, VAR23, VAR22, VAR19); break;
        case 4: VAR9->FUN16(VAR14, VAR15, VAR23, VAR22, VAR19); break;
        default: FUN17(); break;
    }
    FUN25(VAR23);
    if (VAR19)
        VAR7::FUN18(VAR19, VAR5.FUN19()); 
    return VAR1::FUN20();
}