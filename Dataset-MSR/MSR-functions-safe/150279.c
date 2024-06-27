VAR1 FUN1(const VAR2& VAR3) {
  if (VAR3.FUN2())
    return FUN3();
  const VAR1* VAR4 = FUN4(&VAR3);
  return VAR4 ? *VAR4 : FUN3();
}