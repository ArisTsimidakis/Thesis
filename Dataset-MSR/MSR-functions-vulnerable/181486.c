void VAR1 FUN1()
 {
   unsigned VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;

  ushort VAR10[258], VAR11[2][2] = {{512,512},{512,512}}, VAR12[2];


 
   FUN2 (VAR13, VAR14, VAR15);
   VAR2 = FUN3();  FUN3();  FUN3();
   VAR3 = FUN3();
   VAR4 = FUN3();








   if (VAR2 == 2) {
     fread (VAR16, 1, VAR17, VAR13);
     for (VAR5=0; VAR5 < VAR17; VAR5++) {
      VAR4 = (VAR4 * 1597 + 51749) % 244944;
      VAR3 = VAR4 * (VAR18) 301593171 >> 24;
      VAR16[VAR5] ^= ((((VAR4 << 8) - VAR3) >> 1) + VAR3) >> 17;
    }
  } else if (VAR2 == 4) {
    free (VAR16);
    VAR16 = (char *) malloc (VAR17 = VAR3*VAR4*3/2);
    FUN4 (VAR16, "");
    FUN5 (VAR10);
    FUN3();
    FUN6(-1);
    for (VAR6=VAR7=0; VAR7 < VAR4; VAR7++) {
      for (VAR8=0; VAR8 < VAR3; VAR8++) {
	VAR9 = FUN7(VAR10);
	if (VAR8 < 2) VAR12[VAR8] = VAR11[VAR7 & 1][VAR8] += VAR9;
	else         VAR12[VAR8 & 1] += VAR9;
	if (VAR8 & 1) {
	  VAR16[VAR6++] = VAR12[0] >> 4;
	  VAR16[VAR6++] = VAR12[0] << 4 | VAR12[1] >> 8;
	  VAR16[VAR6++] = VAR12[1];
        }
      }
    }
  } else
    fprintf (VAR19,FUN8(""), VAR20, VAR2);
}