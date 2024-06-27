VAR1* VAR2::FUN1() const {
  if (FUN2())
    return FUN3()->FUN4();

  if (!VAR3 || !VAR3->FUN5())
    return 0;

  VAR4* VAR5 = FUN6(VAR3);
  if (!VAR5->FUN7())
    return 0;

  return VAR5->FUN8();
}