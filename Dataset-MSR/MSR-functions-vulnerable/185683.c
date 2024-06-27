void VAR1::FUN1() {
  if (VAR2.FUN2()) {
    FUN3();
    return;
  }

  FUN4(VAR3);

  if (FUN5()) {
    const VAR4& VAR5 = VAR2.FUN6();
    
    
    
    
    if (FUN7(VAR2)) {
      VAR6::State VAR7;

      if (VAR2.FUN8()) {
        auto& VAR8 = FUN9(VAR2);
        VAR7.VAR9 = FUN10(VAR8);
        VAR5.FUN11(
            VAR7.VAR10, VAR8.FUN12(), VAR4::VAR11,
            VAR4::VAR12,
            VAR4::VAR13);

        if (VAR14::FUN13() ||
            VAR14::FUN14()) {
          
          
          
          
          VAR7.VAR15 = VAR16.VAR17.VAR15;
          if (VAR5.FUN15() && !VAR7.VAR15) {
            VAR7.VAR15 =
                VAR18<const VAR19>::FUN16(&VAR2);
          }
          VAR7.VAR20 =
              FUN17(VAR8);
        }
      }

      VAR7.VAR21 =
          VAR16.VAR17.VAR22;

      if (VAR14::FUN13() ||
          VAR14::FUN14()) {
        VAR7.VAR23 =
            VAR2.FUN18()
                ? VAR6::VAR24::VAR25
                : VAR6::VAR24::VAR26;
        VAR7.VAR27 = FUN19(
             VAR2.FUN20(), VAR28::VAR29);
       }
 

      FUN21(VAR3->FUN1(VAR16.VAR17.VAR30,


                                             VAR31::move(VAR7)));
     } else {
       FUN22(VAR3->FUN23());
    }
  }

  if (VAR3->FUN24()) {
    VAR16.VAR17.VAR30 = VAR3->FUN24();
    if (VAR2.FUN6().FUN15()) {
      VAR16.VAR17.VAR15 =
          VAR3->FUN24()->FUN25();
      VAR16.VAR17.VAR22 = false;
    } else {
      VAR16.VAR17.VAR15 = 0;
      VAR16.VAR17.VAR22 = true;
    }
  }
}