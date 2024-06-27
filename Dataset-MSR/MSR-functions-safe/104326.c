static bool FUN1(const VAR1::VAR2& VAR3,
                             VAR1* VAR4) {
  VAR1 FUN2(VAR3);
  if (!VAR5::FUN3(&VAR6))
    return false;

  if (!VAR5::FUN4(VAR6))
    return false;

  *VAR4 = VAR6;
  return true;
}