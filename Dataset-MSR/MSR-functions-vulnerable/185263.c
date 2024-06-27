bool VAR1::VAR2::FUN1(
    VAR3::VAR4* VAR5,
    VAR6* VAR7) {
  FUN2(VAR8->FUN3());

  VAR9 FUN4(VAR9::VAR10);
  if (VAR11) {
    
    if (!VAR12.FUN5()) {
      return false;
    }

    
    FilePath VAR13;
    if (!FUN6(VAR14, &VAR13))
      return false;

    
    
    VAR15.FUN7(VAR13);
    VAR15.FUN8(VAR16, VAR17);

    FUN9(FUN10(VAR18));
  } else {
    VAR15.FUN7(VAR17);
   }
 
   

  VAR19<VAR3::VAR20> VAR21;
   VAR22::string VAR23 = FUN11(this);

  if (!FUN12(VAR23, VAR24, VAR25,

                        VAR5, &VAR21))




     return false;
 














   
   
   VAR15.FUN13(VAR26,
                                  FUN14(VAR23));
  VAR15.FUN15(*VAR9::FUN16(),
                                VAR27,
                                FUN17(VAR27));

  
  ScopedHandle VAR28;
  ScopedHandle VAR29;
  if (!FUN18(VAR15.FUN19(),
                              VAR15.FUN20(),
                              VAR30,
                              false,
                              VAR31 | VAR32,
                              &VAR28,
                              &VAR29)) {
    return false;
  }

  HANDLE VAR33;
  if (VAR11) {
    if (!FUN21(VAR12, VAR28)) {
      FUN22(VAR34)
          << "";
      FUN23(VAR28, VAR35);
      return false;
    }

    VAR33 = VAR18;
  } else {
    VAR36 = VAR28.FUN24();
    VAR33 = VAR36;
  }

  if (!FUN25(VAR29)) {
    FUN22(VAR34) << "";
    FUN26(VAR35);
    return false;
  }

  
  
  ScopedHandle VAR37;
  if (!FUN27(FUN28(),
                       VAR33,
                       FUN28(),
                       VAR37.Receive(),
                       VAR38,
                       VAR39,
                       0)) {
    FUN22(VAR34) << "";
    FUN26(VAR35);
    return false;
   }
 
   VAR40 = VAR21.FUN24();


   *VAR7 = VAR37.FUN24();
   return true;
 }