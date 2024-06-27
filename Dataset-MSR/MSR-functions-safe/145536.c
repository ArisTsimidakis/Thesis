void VAR1::FUN1(
     int VAR2,
     int VAR3,
    int VAR4,
    const VAR5& VAR6,
    VAR7::iterator VAR8) {
  VAR9* VAR10 = VAR8->VAR11->FUN2();
  VAR12 FUN3(
      VAR6.VAR13, VAR10->FUN4());
  VAR14 FUN5(VAR6.VAR13,
                                 VAR6.VAR15);
  VAR12 FUN6(VAR2, VAR3);
  VAR14 FUN7(VAR2, VAR4);

  
  
  
  
  FUN8(-1, *VAR10);
  bool VAR16 = VAR10->FUN9();
  if (VAR16)
    FUN10(-1, VAR10);

  FUN11(VAR17.FUN12(VAR18) == VAR8);
  VAR19<VAR20> VAR21 = VAR22::move(VAR8->VAR11);
  VAR20* VAR23 = VAR21.FUN13();
  VAR17.FUN14(VAR8);

  
  
  
  VAR10->FUN15(VAR2, VAR3, VAR6.VAR24,
                          VAR6.VAR25, VAR4,
                          VAR26->FUN16());

  
  
  VAR17[VAR27] = VAR22::move(VAR21);
  FUN8(1, *VAR10);
  if (VAR16)
    FUN10(1, VAR10);
  if (VAR28 != VAR29) {
    if (VAR30.FUN12(VAR28) !=
            VAR30.FUN17()) {
      VAR30[VAR29] =
          VAR22::move(VAR30[VAR28]);
      VAR30.FUN14(VAR28);
    }
  }
  if (VAR18 != VAR27) {
    VAR31::iterator VAR32 = VAR33.FUN12(VAR18);
    if (VAR32 != VAR33.FUN17()) {
      
      VAR34::VAR35<VAR36>::VAR37 FUN18(VAR32->VAR11);
      VAR36* VAR38;
      while ((VAR38 = VAR39.FUN19()) != NULL) {
        VAR38->FUN20(VAR27);
      }
      
      VAR33[VAR27] = VAR33[VAR18];
      VAR33.FUN14(VAR18);
    }
  }

  VAR40::FUN21(
      VAR23->FUN22(),
      VAR2,
      VAR6.VAR41,
      VAR26);

  VAR42* VAR43 =
      VAR42::FUN23(VAR23->FUN22());
  if (VAR43) {
    if (!VAR43->FUN24(VAR26->FUN25())) {
      VAR44::FUN26(
          VAR26, VAR44::VAR45);
    } else {
      VAR43->FUN21(
          VAR2, VAR6.VAR46);
    }
  }

  
  FUN11(VAR10->FUN27());
}