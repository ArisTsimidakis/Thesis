static int FUN1(void)
{
  static int VAR1 = -1;
  if (VAR1 < 0)
	VAR1 = FUN2();
  if (VAR1 == 0)
	return 1; 
  return FUN3(VAR1);
}