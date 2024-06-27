int VAR1 FUN1()
{
  uchar VAR2[12];
  int VAR3;

  FUN2 (VAR4, 0, VAR5);
  for (VAR3=0; VAR3 < 1024; VAR3++) {
    fread (VAR2, 1, 12, VAR4);
    if (((VAR2[2] & VAR2[4] & VAR2[7] & VAR2[9]) >> 4
	& VAR2[1] & VAR2[6] & VAR2[8] & VAR2[11] & 3) != 3)
      return 0;
  }
  return 1;
}