VAR1* VAR1::FUN1(VAR2& VAR3) {
  VAR4* VAR5 = VAR3.FUN2();
  if (!VAR5 || !VAR5->FUN3())
    return nullptr;
  return FUN4(VAR5->FUN5());
}