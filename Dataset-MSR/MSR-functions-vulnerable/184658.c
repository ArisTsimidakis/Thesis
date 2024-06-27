void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  VAR2::VAR3 FUN2(VAR4);  
  
  if (VAR5.FUN3() > 1 && VAR5[0] == '') {
    VAR5 = VAR5.FUN4(1, VAR5.FUN3() - 2);
  }

  if (VAR5 == VAR6) {
    FUN5(true);
    return;
  }

  if (VAR5 == VAR7) {
    FUN5(false);
    return;
  }

  if (VAR5 == VAR8) {
    
    GURL VAR9;
    VAR10::UrlCheckResult VAR11 =
        VAR12[0].VAR11;
    if (VAR11 == VAR10::VAR13) {
      VAR9 = VAR14::FUN6(FUN7(VAR15));
    } else if (VAR11 == VAR10::VAR16 ||
               VAR11 == VAR10::VAR17) {
      VAR9 = VAR14::FUN6(FUN7(VAR18));
    } else {
      FUN8();
    }
    FUN9()->FUN10(VAR9, FUN7(), VAR19, VAR20::VAR21);
    return;
  }

  if (VAR5 == VAR22) {
    
    VAR23 FUN11(VAR24);
    FUN9()->FUN10(VAR9, FUN7(), VAR19, VAR20::VAR21);
    return;
  }

  if (VAR5 == VAR25) {
    FUN12();
    
    return;
   }
 
   if (VAR5 == VAR26) {

    FUN13();

    




































     return;
   }
 
  
  
  int VAR27 = 0;
  size_t VAR28 = VAR5.FUN14('');
  if (VAR28 != VAR2::VAR3::VAR29) {
    FUN15(VAR28 < VAR5.FUN16() - 1);
    bool VAR30 = VAR31::FUN17(VAR31::FUN18(VAR5.FUN19() +
                                                      VAR28 + 1,
                                                      VAR5.FUN20()),
                                    &VAR27);
    VAR5 = VAR5.FUN4(0, VAR28);
    FUN15(VAR30);
  }

  if (VAR27 >= static_cast<int>(VAR12.FUN16())) {
    FUN8();
    return;
  }

  VAR2::string VAR32 = VAR12[VAR27].VAR9.FUN21();
  if (VAR5 == VAR33) {
    
    
    
    VAR10::UrlCheckResult VAR11 =
        VAR12[VAR27].VAR11;
    FUN15(VAR11 == VAR10::VAR16 ||
           VAR11 == VAR10::VAR17);
    GURL VAR34 =
        VAR35::FUN22(
            VAR36,
            VAR32,
            VAR11 == VAR10::VAR17);
    FUN9()->FUN10(
        VAR34, FUN7(), VAR19, VAR20::VAR21);
    return;
  }

  if (VAR5 == VAR37) {
    
    VAR2::string VAR38 =
        VAR31::FUN23(VAR39,
            VAR40::FUN24(VAR32, true).FUN25());
    VAR23 FUN26(VAR38);
    VAR41 = VAR14::FUN6(VAR41);
    FUN15(VAR12[VAR27].VAR11 ==
           VAR10::VAR13);
    FUN9()->FUN10(
        VAR41, FUN7(), VAR19, VAR20::VAR21);
    return;
  }

  FUN8() << "" << VAR5;
}