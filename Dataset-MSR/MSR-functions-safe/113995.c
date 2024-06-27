bool FUN1(const VAR1* VAR2) {
  if (!VAR2)
    return true;
  return !VAR2->FUN2() || VAR2->FUN3() != VAR3;
}