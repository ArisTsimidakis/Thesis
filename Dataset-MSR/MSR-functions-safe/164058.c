int VAR1::FUN1(
    const VAR2::VAR3<bool(const VAR4&)>& VAR5,
    VAR2::Time VAR6,
    VAR2::Time VAR7) {
  int VAR8 = 0;
  auto VAR9 = VAR10.FUN2();
  while (VAR9 != VAR10.FUN3()) {
    VAR11::VAR12* VAR11 = VAR9->VAR13.FUN4();

    
    ++VAR9;

    if (VAR11->FUN5() != VAR11::VAR14::VAR15 &&
        VAR5.FUN6(VAR11->FUN7()) &&
        VAR11->FUN8() >= VAR6 &&
        (VAR7.FUN9() || VAR11->FUN8() < VAR7)) {
      VAR11->FUN10();
      VAR8++;
    }
  }
  return VAR8;
}