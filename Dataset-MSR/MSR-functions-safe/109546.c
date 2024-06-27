bool VAR1::FUN1(
    VAR2::VAR3* VAR4,
    const VAR2::VAR5& VAR6,
    const VAR7& VAR8) {
  FUN2(VAR9);
  const VAR7* VAR10 = &VAR8;
  DictionaryValue VAR11;
  if (VAR10->FUN3()) {
    if (!VAR12)
      VAR13.FUN4(VAR14);
    return false;
  }

  bool VAR15 = true;
  if (VAR12) {
    if (!VAR10->FUN5(VAR16::VAR17,
                                  &VAR15)) {
      FUN6();
    }
  } else {
    VAR15 = !FUN7(VAR4, VAR6);
  }

  if (VAR12 || !VAR15) {
    VAR11.FUN8(VAR10);
    VAR11.FUN9(VAR16::VAR18,
                                     false);
    VAR11.FUN10(VAR16::VAR19,
                                     VAR16::VAR20);
    VAR10 = &VAR11;
  }

  
  
  int VAR21 = VAR22.FUN11() ?
      VAR22->VAR23.VAR24 : 0;
  PrintMsg_PrintPages_Params VAR25;
  FUN12(new FUN13(FUN14(),
      VAR21, *VAR10, &VAR25));
  VAR22.FUN15(new FUN16(VAR25));

  if (!FUN17(VAR25.VAR23)) {
    if (!VAR12) {
      VAR13.FUN4(VAR26);
    } else {
      
      VAR2::VAR3* VAR27 = NULL;
      
      
      FUN18(&VAR27);
      if (VAR27) {
        FUN19()->FUN20(
            VAR27,
            VAR28::FUN21(
                VAR29));
      }
    }
    return false;
  }

  if (VAR25.VAR23.VAR30 < VAR31 || !VAR25.VAR23.VAR24) {
    VAR13.FUN4(VAR32);
    return false;
  }

  if (!VAR12) {
    
    if (!VAR10->FUN22(VAR16::VAR33,
                                  &(VAR25.VAR23.VAR34)) ||
        !VAR10->FUN22(VAR16::VAR35,
                                  &(VAR25.VAR23.VAR36)) ||
        !VAR10->FUN5(VAR16::VAR37,
                                  &(VAR25.VAR23.VAR38))) {
      FUN6();
      VAR13.FUN4(VAR14);
      return false;
    }

    VAR25.VAR23.VAR39 = FUN23(*VAR10);
    FUN24(*VAR10);
    VAR25.VAR23.VAR40 = FUN25(
        VAR15, *VAR10, VAR25.VAR23);

    
    if (VAR25.VAR23.VAR41) {
      VAR42.FUN15(new FUN26());
      VAR42->FUN27(VAR16::VAR43,
                                     VAR25.VAR23.VAR44);
      VAR42->FUN27(VAR16::VAR45,
                                     VAR25.VAR23.VAR46);
      VAR42->FUN27(VAR16::VAR47,
                                     VAR25.VAR23.VAR48);
    }
  }

  VAR22.FUN15(new FUN16(VAR25));
  FUN12(new FUN28(FUN14(),
                                             VAR25.VAR23.VAR24));
  return true;
}