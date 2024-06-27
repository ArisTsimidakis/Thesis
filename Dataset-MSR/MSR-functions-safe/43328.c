int VAR1 FUN1()
{
  uchar VAR2[256];
  int VAR3;

  FUN2 (VAR4, VAR5, VAR6);
  fread (VAR2, 1, 256, VAR4);
  for (VAR3=15; VAR3 < 256; VAR3+=16)
    if (VAR2[VAR3]) return 1;
  return 0;
}