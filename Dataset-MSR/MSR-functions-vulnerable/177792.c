VAR1::FUN1(int VAR2, int VAR3, int VAR4,
			   SplashColorMode VAR5, GBool VAR6,
			   GBool VAR7) {
  VAR8 = VAR2;
  VAR9 = VAR3;
  VAR10 = VAR5;
  switch (VAR10) {
  case VAR11:
    VAR12 = (VAR8 + 7) >> 3;
    break;
  case VAR13:
    VAR12 = VAR8;
    break;
  case VAR14:
  case VAR15:
    VAR12 = VAR8 * 3;
    break;
  case VAR16:
    VAR12 = VAR8 * 4;
    break;
#if VAR17
  case VAR18:
    VAR12 = VAR8 * 4;
    break;
#endif
   }
   VAR12 += VAR4 - 1;
   VAR12 -= VAR12 % VAR4;

  VAR19 = (VAR20)FUN2(VAR12 * VAR9);


   if (!VAR7) {
     VAR19 += (VAR9 - 1) * VAR12;
     VAR12 = -VAR12;
   }
   if (VAR6) {

    VAR21 = (VAR22 *)FUN2(VAR8 * VAR9);


   } else {
     VAR21 = NULL;
   }
}