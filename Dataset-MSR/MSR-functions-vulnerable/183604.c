void VAR1::FUN1(VAR2* VAR3,
                                       const VAR4& VAR5) {
  static const int VAR6 = 206;
  static const int VAR7 = 200;

  VAR8* VAR9 = FUN2(VAR3);
  if (!VAR9)
    return;

  ResponseInfo VAR10;
  FUN3(VAR5, &VAR10);

  bool VAR11 = true;
  if (VAR9->FUN4()) {
    if (VAR5.FUN5() == VAR6) {
      FUN6(VAR5, VAR9);
      return;
    } else if (VAR5.FUN5() == VAR7) {
      
      
      
      
      
      
      
      
      
      if (!FUN7(VAR3)) {
        FUN8();
        return;
      }

      
      
      VAR11 = false;

      delete VAR9;
      VAR9 = NULL;

      
       for (size_t VAR12 = 0; VAR12 < VAR13.FUN9(); ++VAR12) {
         if (VAR13[VAR12].VAR3.FUN10() == VAR3) {
           VAR8* VAR14 =

              VAR15->FUN11(VAR13[VAR12].VAR16, VAR17,

                                              false, 0, NULL);


           VAR13[VAR12].VAR9 = VAR14;
           VAR9 = VAR14;
           break;
        }
      }

      FUN12(VAR9 != NULL);
    }
  }

  
  
  
  
  VAR3->FUN13(true);

  VAR9->FUN14(
      VAR10.VAR18,
      FUN15(VAR5),
      VAR10.VAR19,
      VAR10.VAR20,
      VAR11);

  if (VAR21* VAR22 = FUN16()) {
    VAR23* VAR24 = FUN17(VAR3);
    if (VAR24)
      VAR22->FUN1(VAR24->VAR16, VAR5);
  }

  
  
  
  
  
  const VAR25& VAR26 = VAR5.FUN18();
  if (VAR26.FUN19("") || VAR26.FUN19("")) {
    if (VAR5.FUN5() < 100 || VAR5.FUN5() >= 400) {
      
      
      
      VAR23* VAR24 = FUN17(VAR3);
      if (VAR24) {
        VAR24->VAR27 = true;
      }
    }
  }
}