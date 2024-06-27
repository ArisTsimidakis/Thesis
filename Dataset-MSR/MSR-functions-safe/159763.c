bool VAR1::FUN1() {
  if (VAR2) {
    VAR2->FUN2(!VAR3 || VAR3->FUN3());
    VAR2->FUN4();
  }
  return true;
}