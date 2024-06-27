static void FUN1 (VAR1 *VAR2) 
{
  VAR1 *VAR3;

  FUN2 ("", (void *) VAR2);

  while (VAR2 != NULL)
  {
    VAR3 = VAR2->VAR3;

    FUN3 (VAR2->VAR4);
    FUN3 (VAR2->VAR5);

    if (VAR2->VAR6 == VAR7)
      FUN4 (&VAR2->VAR8.VAR9);
    else
      FUN5 (&VAR2->VAR8.VAR10);

    FUN3 (VAR2);
    VAR2 = VAR3;
  }
}