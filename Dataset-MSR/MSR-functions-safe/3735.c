FUN1 (intptr_t VAR1)
{
  int VAR2;

  VAR2 = FUN2 (VAR1, VAR3, 0);

  if (VAR2 < 0)
    return;

  VAR2 |= VAR4;

  FUN2 (VAR1, VAR5, VAR2);
}