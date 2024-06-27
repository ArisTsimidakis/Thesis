static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
  unsigned int VAR4;
  unsigned int VAR5 = 0;

  if (FUN2(VAR2) != 0xff)
    return 0;
  if (FUN2(VAR2) != VAR6)
    return 0;

  while (VAR5 == VAR7)
  {
    VAR4 = FUN3(VAR2, VAR8);
    if (VAR4 == VAR8)
      {
        VAR4 = FUN4(VAR2, VAR3);
        break;
      }
  }
  return 1;
}