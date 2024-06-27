void VAR1::FUN1(
    const VAR2& VAR3) {
  FUN2("", "");
  VAR4::TimeTicks VAR5 = VAR4::VAR6::FUN3();
  
  VAR4::File VAR7 = VAR8::FUN4(VAR3.VAR9);
  const WebString VAR10 =
      VAR11::FUN5(VAR3.VAR12);
  FUN6(!VAR10.FUN7());

  
  
  VAR13::VAR14<VAR15> VAR16;
  VAR13::VAR17<VAR13::VAR18> VAR19;
  VAR20 FUN8(VAR3,
                                        &VAR19);

  MhtmlSaveStatus VAR21 = VAR22::VAR23;
  bool VAR24 = false;

  
  if (FUN9()) {
    FUN2("",
                 "");
    
    
    VAR16.FUN10(VAR25::FUN11(
        VAR10, FUN12(), &VAR26));
    if (VAR16.FUN13().FUN7())
      VAR21 = VAR22::VAR27;
    else
      VAR24 = true;
  }

  
  
  
  if (VAR21 == VAR22::VAR23) {
    FUN2("",
                 "");
    
    
    VAR16.FUN10(VAR25::FUN14(
        VAR10, FUN12(), &VAR26));
    VAR24 |= !VAR16.FUN13().FUN7();
  }

  
  

  
  
  
  VAR4::TimeDelta VAR28 = VAR4::VAR6::FUN3() - VAR5;
  FUN15(
      "",
      VAR28);

  if (VAR21 == VAR22::VAR23 && VAR24) {
    VAR4::FUN16(
        VAR29, {VAR4::FUN17()},
        VAR4::FUN18(&VAR30, VAR4::FUN19(&VAR16),
                   VAR4::FUN19(&VAR7)),
        VAR4::FUN18(&VAR1::VAR31,
                   VAR32.FUN20(), VAR3.VAR33,
                   VAR4::FUN19(&VAR19),
                   VAR28));
  } else {
    VAR7.FUN21();
    FUN22(VAR3.VAR33, VAR19,
                               VAR28, VAR21);
  }
}