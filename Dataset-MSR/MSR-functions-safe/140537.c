int VAR1::FUN1(VAR2* VAR3,
                                                VAR4* VAR5,
                                                const VAR6& VAR7) {
  FUN2(VAR5->VAR8.FUN3());
  int VAR9 = VAR3->FUN4(VAR5->VAR8, false, true, VAR7);
  VAR5->VAR10 = VAR3->FUN5();
  if (VAR9 == VAR11)
    return VAR12;
  return VAR9;
}