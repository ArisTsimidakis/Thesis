static int FUN1(const void *VAR1,const void *VAR2)
{
  VAR3
    *VAR4,
    *VAR5;

  int
    VAR6;

  VAR4=(VAR3 *) VAR1;
  VAR5=(VAR3 *) VAR2;
  VAR6=FUN2(VAR4)-(int) FUN2(VAR5);
  return((int) VAR6);
}