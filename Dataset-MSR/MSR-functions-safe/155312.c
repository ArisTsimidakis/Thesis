VAR1::PreviewsState VAR2::FUN1(
    VAR1::PreviewsState VAR3,
    VAR1::VAR4* VAR5,
    const VAR6& VAR7) {
  FUN2(VAR1::VAR8::VAR9);
  FUN3(!VAR5->FUN4());

  
  
  if (!VAR5->FUN5() ||
      VAR5->FUN6()) {
    return VAR3;
  }

  if (!VAR7.FUN7())
    return VAR1::VAR10;

  
  
  
  
  if (VAR5->FUN8())
    return VAR1::VAR10;

  VAR1::VAR11* VAR12 = VAR5->FUN9();
  VAR1::VAR13* VAR14 = VAR12->FUN10();

  auto* VAR15 = VAR12->FUN11();

  VAR16* VAR17 = VAR18::FUN12(
      VAR19::FUN13(VAR15));
  auto* VAR20 =
      VAR21::FUN14(
          VAR15);
  
  
  if (!VAR17 || !VAR17->FUN15() ||
      !VAR20) {
    return VAR1::VAR10;
  }

  VAR22* VAR23 =
      VAR22::FUN16(VAR12);
  
  
  if (!VAR23)
    return VAR1::VAR10;

  FUN3(!VAR15->FUN17());

  
  
  VAR24::VAR25* VAR26 =
      VAR17->FUN15()->FUN18();
  FUN3(VAR26);

  
  VAR1::PreviewsState VAR27 = VAR1::VAR28;

  VAR24::VAR29* VAR30 =
      VAR23->FUN19(VAR5);

  
  
  
  
  
  bool VAR31 = false;
  if (VAR30) {
    VAR31 = !VAR30->FUN20();
  } else {
    VAR30 = VAR23->FUN21(
        VAR5, VAR26->FUN22());
  }

  FUN3(VAR30);

  bool VAR32 =
      VAR5->FUN23() != VAR1::VAR33::VAR34;

  VAR1::PreviewsState VAR35 =
      VAR1::VAR36 | VAR1::VAR37;

  
  
  
  
  if (VAR31) {
    
    
    VAR27 |= (VAR30->FUN24() &
                       VAR35);
  } else {
    if (VAR26->FUN25(
            VAR30, VAR7, VAR32,
            VAR24::VAR38::VAR39)) {
      VAR27 |= VAR35;
    }
  }

  
  VAR27 |= VAR24::FUN26(
      VAR30, VAR7, VAR32, VAR31,
      VAR20->FUN27(),
      VAR26, VAR5);

  if (VAR27 & VAR1::VAR10) {
    VAR30->FUN28(VAR1::VAR10);
    return VAR1::VAR10;
  }

  if (VAR27 & VAR1::VAR40) {
    VAR30->FUN28(VAR1::VAR40);
    return VAR1::VAR40;
  }

  
  if (VAR27 == VAR1::VAR28) {
    VAR30->FUN28(VAR1::VAR10);
    return VAR1::VAR10;
  }

  VAR1::PreviewsState VAR41 = VAR1::VAR28;
  if (VAR14) {
    VAR14->FUN29(VAR12, &VAR41);
  }

  
  
  if (VAR41 != VAR1::VAR28) {
    VAR27 = VAR27 & VAR41;
    
    if (VAR27 == VAR1::VAR28)
      VAR27 = VAR1::VAR10;
  }
  VAR30->FUN28(VAR27);
  return VAR27;
}