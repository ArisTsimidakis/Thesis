void FUN1(VAR1::Handle VAR2) {
#if FUN2(VAR3)
  int VAR4 = FUN3(VAR2, VAR5);
  FUN4(VAR4, -1);
  int VAR6 = FUN3(VAR2, VAR7, VAR4 | VAR8);
  FUN5(VAR6, 0);
#endif
}