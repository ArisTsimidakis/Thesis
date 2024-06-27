bool FUN1(const VAR1::VAR2* VAR3) {
  if (!VAR3->FUN2())
    return false;

  VAR4::VAR5* VAR6 =
      VAR4::VAR7::FUN3(VAR3);
  if (!VAR6)
    return false;

  return VAR6->FUN4();
}