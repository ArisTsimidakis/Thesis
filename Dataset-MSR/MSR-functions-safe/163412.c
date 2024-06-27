VAR1::FUN1() {
  FUN2(FUN3());
  if (VAR2 &&
      VAR2->FUN4()->FUN5() ==
          VAR3)
    return VAR2;

  VAR4<VAR5::VAR6> FUN6(
      FUN7());
  if (!VAR7) {
    VAR2 = nullptr;
    return nullptr;
  }

  bool VAR8 = false;
  bool VAR9 = false;
  VAR2 = FUN8(
      VAR10::move(VAR7), VAR5::FUN9(), VAR8,
      VAR9,
      VAR11::VAR12::VAR13,
      VAR14, VAR15);
  auto VAR16 = VAR2->FUN10();
  if (VAR16 != VAR5::VAR17::VAR18)
    VAR2 = nullptr;
  return VAR2;
}