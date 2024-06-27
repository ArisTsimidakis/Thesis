void VAR1::FUN1() {
#if VAR2 >= 5
  if (VAR3.FUN2()) {
    FUN3(VAR4, VAR3[0]);
    FUN3(VAR4, VAR3[1]);
    FUN3(VAR4, VAR3[2]);
    FUN3(VAR4, VAR3[3]);
    VAR3.FUN4();
  }
#endif
}