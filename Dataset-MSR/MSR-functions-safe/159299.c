VAR1<VAR2> VAR3::FUN1(
    VAR1<VAR2> VAR4,
    int VAR5,
    int VAR6,
    const char* VAR7) {
  VAR1<VAR2> FUN2(VAR8::move(VAR4));
  FUN3(VAR9);

  VAR10 FUN4(VAR5, VAR6);
  VAR11* VAR12 = VAR13.FUN5(VAR14);
  if (!VAR12) {
    FUN6(VAR15, VAR7, "");
    return nullptr;
  }

  if (!VAR9->FUN7())
    VAR12->FUN8()->FUN9(VAR16);

  VAR17 FUN10(FUN11(), VAR9->FUN12());
  VAR17 FUN13(0, 0, VAR14.FUN14(), VAR14.FUN15());
  PaintFlags VAR18;
  
  
  VAR9->FUN16(VAR12->FUN8(), VAR18, VAR19, VAR20,
              VAR21,
              VAR2::VAR22, VAR2::VAR23);
  return VAR12->FUN17(VAR24,
                               VAR25);
}