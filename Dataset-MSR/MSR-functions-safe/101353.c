bool VAR1::FUN1(
    const VAR2& VAR3) {
  int VAR4 = 0;
  for (VAR5::VAR6<VAR7*>::const_iterator VAR8 = VAR3.VAR9.FUN2();
      VAR8 != VAR3.VAR9.FUN3(); ++VAR8) {
    const VAR7* VAR10 = *VAR8;
    if (FUN4(*VAR10))
      VAR4++;
  }
  if (VAR4 == 0)
    return true;
  return false;
}