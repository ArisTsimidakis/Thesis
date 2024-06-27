void VAR1::FUN1(
    VAR2* VAR3) {
  VAR4* VAR5;
  if (VAR3->FUN2("", &VAR5)) {
    VAR6::VAR7::FUN3(VAR5, false, &VAR8);
    FUN4(false);
    return;
  }

  VAR4* VAR9;
  if (VAR3->FUN2("", &VAR9))
    VAR10.FUN5(VAR9->FUN6());
  else
    VAR10.FUN5(new FUN7());
  FUN4(true);
}