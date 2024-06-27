void VAR1::FUN1() {
  if (!FUN2())
    return;

  VAR2* VAR3 =
      static_cast<VAR2*>(VAR4);
  FUN3(
      VAR5, VAR6, FUN4(VAR3));
}