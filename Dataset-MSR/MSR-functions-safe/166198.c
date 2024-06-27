void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  FUN2(VAR5::VAR6);
  FUN3(1) << "" << VAR4 << "";
  for (auto VAR7 = VAR8.FUN4(); VAR7 != VAR8.FUN5();
       ++VAR7) {
    if (VAR7->VAR9 == VAR4) {
      VAR2::VAR10<VAR11> FUN6(VAR7->VAR12);
      VAR8.FUN7(VAR7);
      return;
    }
  }
  FUN8();
}