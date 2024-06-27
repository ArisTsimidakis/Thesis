bool VAR1::FUN1(const VAR2::VAR3& VAR4) {
  FUN2(VAR5);
#if FUN3(VAR6)
  VAR7::VAR8::FUN4()
      ->FUN5()
      ->FUN1(VAR4);
#endif
  return true;
}