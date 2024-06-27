void VAR1::FUN1(
    const VAR2::VAR3<VAR4::VAR5>& VAR6,
    VAR2::VAR3<VAR7::VAR8>* VAR9,
    VAR2::VAR3<VAR4::VAR5>* VAR10) {
  if (VAR11.FUN2()) {
    FUN3(VAR12.FUN4());
    return;
  }
  if (VAR13) {
    VAR13 = false;
    VAR4::Rect VAR14 = VAR4::FUN5(VAR4::FUN6(), VAR11.FUN7());
    FUN8(VAR14, VAR15);
    VAR9->FUN9(VAR7::FUN10(VAR14, VAR11, true));
  }

  if (!VAR16)
    return;

  VAR17->FUN11();

  for (size_t VAR18 = 0; VAR18 < VAR6.FUN7(); VAR18++) {
    
    
    VAR4::Rect VAR14 =
        VAR6[VAR18].FUN12(VAR4::FUN5(VAR4::FUN6(), VAR12));
    if (VAR14.FUN4())
      continue;

    VAR4::Rect VAR19 = VAR20.FUN12(VAR14);
    if (!VAR19.FUN4()) {
      VAR19.FUN13(VAR20.FUN14() * -1, 0);

      VAR2::VAR3<VAR4::VAR5> VAR21;
      VAR2::VAR3<VAR4::VAR5> VAR22;
      VAR17->FUN15(VAR19, &VAR11, &VAR21, &VAR22);
      for (size_t VAR23 = 0; VAR23 < VAR21.FUN7(); ++VAR23) {
        VAR21[VAR23].FUN13(VAR20.FUN16());
        VAR9->FUN9(
            VAR7::FUN10(VAR21[VAR23], VAR11, false));
      }
      for (size_t VAR23 = 0; VAR23 < VAR22.FUN7(); ++VAR23) {
        VAR22[VAR23].FUN13(VAR20.FUN16());
        VAR10->FUN9(VAR22[VAR23]);
      }
    }

    
    int32_t VAR24 = VAR17->FUN17() == 0 ?
        0 : VAR17->FUN18(0).FUN19();
    if (VAR14.FUN19() < VAR24) {
      VAR4::Rect VAR25 = VAR14.FUN12(VAR4::FUN5(
          VAR4::FUN6(), VAR4::FUN20(VAR12.FUN21(), VAR24)));
      VAR9->FUN9(VAR7::FUN10(VAR25, VAR11, false));
      FUN8(VAR25, VAR15);
    }

    for (size_t VAR23 = 0; VAR23 < VAR26.FUN7(); ++VAR23) {
      VAR4::Rect VAR27 = VAR26[VAR23].VAR28.FUN12(VAR14);
      if (!VAR27.FUN4()) {
        FUN8(VAR27, VAR26[VAR23].VAR29);
        VAR9->FUN9(
            VAR7::FUN10(VAR27, VAR11, false));
      }
    }
  }

  VAR17->FUN22();
}