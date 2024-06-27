void VAR1::FUN1(VAR2* VAR3) {
  VAR4* VAR5 = VAR3->FUN2().FUN3();
  if (!VAR5) {
    FUN4();
    return;
  }
  VAR3->FUN5()->FUN1(VAR5->FUN6());
  VAR3->FUN7().FUN8(
      VAR3->FUN7().FUN9());
}