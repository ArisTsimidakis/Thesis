Response VAR1::FUN1() {
  if (VAR2)
    return VAR3::FUN2();
  if (!VAR4)
    return FUN3();
  VAR2 = true;

  VAR5 = new FUN4(
      VAR4, VAR6::FUN5(&VAR1::VAR7,
                           VAR8.FUN6()),
      VAR6::FUN5(&VAR1::VAR9,
                 VAR8.FUN6()),
      VAR6::FUN5(&VAR1::VAR10,
                 VAR8.FUN6()));
  VAR5->FUN7();

  return VAR3::FUN2();
}