static void FUN1(VAR1 *VAR2)
{
  VAR1
    *VAR3,
    *VAR4;

  VAR3=VAR2->VAR3;
  while(VAR3 != (VAR1 *) NULL)
  {
    VAR4=VAR3;
    VAR3=VAR4->VAR3;
    VAR4->VAR3=(VAR1 *) NULL;
    (void) FUN2(VAR4);
  }
}