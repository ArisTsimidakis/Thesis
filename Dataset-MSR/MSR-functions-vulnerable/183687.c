bool VAR1::VAR2::FUN1(
    VAR3* VAR4,
    const VAR5::VAR6<int>& VAR7) {
   FUN2(VAR8, VAR9);
   VAR9 = VAR10;
 

  VAR11.FUN3(new FUN4(*VAR4));


   VAR12.FUN3(new VAR13::VAR14);
   if (!VAR12->FUN5()) {
     FUN6(VAR15);
    FUN7(VAR16) << "";
    return false;
  }

  
  VAR17.FUN3(new FUN8(*VAR4, FUN9(),
                                                         FUN10()));
   FUN11(VAR18, VAR19,
                                        VAR17.FUN12(), VAR4);
 




   VAR20 = VAR17->FUN13();
   if (VAR20 == 0) {
     FUN7(VAR16) << "";
    FUN6(VAR21);
    return false;
  }

  int VAR22 = VAR7.FUN14();
  VAR23 = 0;
  VAR24 = VAR22;
  VAR25 = VAR7;

  if (VAR22 == 0) {
    VAR24 = VAR20;
    
    for (int VAR26 = 0; VAR26 < VAR20; ++VAR26)
      VAR25.FUN15(VAR26);
  } else if (VAR27) {
    int VAR28 = 0;
    for (int VAR26 = 0; VAR26 < VAR20; ++VAR26) {
      if (VAR28 < VAR22 && VAR26 == VAR7[VAR28]) {
        VAR28++;
        continue;
      }
      VAR25.FUN15(VAR26);
    }
  }

  VAR29 = VAR30::FUN16();
  VAR31 = VAR30::VAR32::FUN17();

  return true;
}