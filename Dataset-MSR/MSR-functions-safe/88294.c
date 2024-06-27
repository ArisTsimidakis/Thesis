FUN1(VAR1 *VAR2) {
  if (! VAR2->VAR3)
    VAR2->VAR3 = VAR2->VAR4;
  else {
    VAR5 *VAR6 = VAR2->VAR4;
    while (VAR6) {
      VAR5 *VAR7 = VAR6->VAR8;
      VAR6->VAR8 = VAR2->VAR3;
      VAR2->VAR3 = VAR6;
      VAR6 = VAR7;
    }
  }
  VAR2->VAR4 = NULL;
  VAR2->VAR9 = NULL;
  VAR2->VAR10 = NULL;
  VAR2->VAR11 = NULL;
}