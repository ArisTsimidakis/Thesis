static int FUN1(int VAR1, int VAR2, VAR3* VAR4)
{
  int VAR5;
  MemNumType VAR6;

  for (VAR5 = 0; VAR5 < VAR2; VAR5++) {
    FUN2(VAR6, VAR4);
    if (VAR1 == (int )VAR6) return 1;
  }
  return 0;
}