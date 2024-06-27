static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
  unsigned int VAR4;

  VAR4 = FUN2(VAR2, VAR5);
  if (VAR4 == VAR5)
  {
    (void) FUN3(VAR3,0xff);
    (void) FUN3(VAR3,VAR5);
    FUN4(VAR2, VAR3);
  }
}