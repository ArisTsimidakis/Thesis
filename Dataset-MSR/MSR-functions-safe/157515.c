bool VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    const VAR2::VAR5& VAR6,
    VAR7::VAR8* VAR9) const {
  FUN2(VAR10.FUN3());
  if (VAR4.FUN4() != nullptr &&
      VAR4.FUN4()->FUN5() != nullptr) {
    return FUN6(
        VAR4.FUN4()->FUN5()->FUN7(),
        VAR6.FUN8(),
        VAR4.FUN9().FUN10(), VAR9);
  }

  return false;
}