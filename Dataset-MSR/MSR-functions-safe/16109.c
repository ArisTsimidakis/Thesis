FUN1 (const char * VAR1, const void * VAR2, const int VAR3) {

  if (!VAR2) {
    return VAR4;
  }


  priv_state VAR5 = FUN2();
  FUN3 (VAR6, "", FUN4());

  int VAR7 = FUN5(VAR1, VAR8 | VAR9 | VAR10, 0600 );
  if (VAR7 == -1) {
    FUN3 (VAR11, "", VAR1);
    FUN6(VAR5);
    return VAR4;
  }

  
  FUN7 (VAR7, VAR12 | VAR13);
  FUN8 (VAR7, FUN9(), FUN10());

  write (VAR7, VAR2, VAR3);

  close (VAR7);

  FUN6(VAR5);
  return VAR14;
}