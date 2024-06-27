void VAR1::FUN1(const VAR2& VAR3) {
  if (!VAR4::FUN2())
    return;

  if (!VAR3.FUN3())
    VAR5::FUN4(*this, VAR6::VAR7);

  VAR8* VAR9 = nullptr;
  WebParsedFeaturePolicy VAR10;
  VAR11<VAR2> VAR12;
  const VAR13& VAR14 = FUN5(
      VAR3, FUN6(), &VAR12);

  
  
  if (VAR15) {
    if (!VAR15->FUN7()) {
      VAR9 =
          VAR15->FUN8().FUN9()->FUN10()->FUN11();
    }
    if (VAR15->FUN12())
      VAR10 = VAR15->FUN12()->FUN13();
  }

  FUN14(VAR14, VAR10,
                          VAR9);

  for (const auto& VAR16 : VAR12) {
    FUN15(
        VAR17::FUN16(VAR18, VAR19,
                               "" + VAR16));
  }
  if (VAR15 && !VAR14.FUN17())
    VAR15->FUN18()->FUN19(VAR14);
}