VAR1* VAR2::FUN1(
    const VAR1* VAR3) {
  VAR2* VAR4 = FUN2();
  if (!VAR4 || !VAR4->VAR5)
    return nullptr;
  return VAR4->VAR5->FUN3(VAR3->FUN4());
}