VAR1::FUN1() {
  FUN2(VAR2->FUN3());
  FUN4("", "");

  VAR3::VAR4<const VAR5::VAR6*()>
      VAR7 = VAR3::FUN5(
          &VAR5::VAR8::VAR9,
          VAR10);
  return FUN6(
      VAR11::move(VAR7), "");
}