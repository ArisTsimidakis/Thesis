bool VAR1::FUN1(
    VAR2* VAR3,
    const VAR4::VAR5& VAR6) {
  FUN2(VAR7::VAR8);
#if FUN3(VAR9)
  if (!VAR10->FUN4() &&
      VAR10->FUN5(*VAR3)) {
    return true;
  }

  VAR11* VAR12 = static_cast<VAR11*>(
      VAR3->FUN6(&VAR13));
  if (!VAR12) {
    
    VAR14* VAR15 = FUN7();
    if (VAR15) {
      FUN8(2) << VAR16 << ""
               << VAR3->FUN9(false);
      VAR12 = new FUN10();
      VAR12->FUN11(VAR6);
      VAR3->FUN12(&VAR13, VAR4::FUN13(VAR12));
      VAR15->FUN14(
          VAR3,
          VAR4::FUN15(&VAR1::VAR17,
                     VAR18.FUN16(),
                     VAR3->FUN17()));
      return false;
    }

    
    
    VAR19::DownloadDangerType VAR20 = VAR3->FUN18();
    if (FUN19(VAR3).FUN20() !=
            VAR21::VAR22 &&
        (VAR20 == VAR19::VAR23 ||
         VAR20 ==
             VAR19::VAR24)) {
      FUN8(2) << VAR16
               << "";
      if (FUN21(VAR19::VAR25)) {
        VAR3->FUN22(
            
            
            VAR19::VAR23,
            VAR19::VAR26);
      } else {
        VAR3->FUN22(
            VAR19::VAR25,
            VAR19::VAR27);
      }
      FUN23("",
                                VAR28, VAR29);
      VAR19::VAR7::FUN24(VAR19::VAR7::VAR8, VAR30,
                                       VAR6);
      return false;
    }
  } else if (!VAR12->FUN25()) {
    
    VAR12->FUN11(VAR6);
    return false;
  }

#endif
  return true;
}