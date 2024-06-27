void VAR1::FUN1(VAR2 *VAR3, unsigned int *VAR4, int VAR5) {
  int VAR6, VAR7;
  VAR2 *VAR8, *VAR9;

   switch (VAR10->FUN2()) {
   case VAR11:
   case VAR12:

    VAR9 = (VAR2 *) FUN3 (VAR5 * VAR13);


     for (VAR6 = 0; VAR6 < VAR5; VAR6++) {
       for (VAR7 = 0; VAR7 < VAR13; VAR7++) {
 	VAR9[VAR6 * VAR13 + VAR7] = VAR14[VAR3[VAR6] * VAR13 + VAR7];
      }
    }
    VAR15->FUN1(VAR9, VAR4, VAR5);
    FUN4 (VAR9);
    break;

  default:
    VAR8 = VAR3;
    for (VAR7 = 0; VAR7 < VAR5; VAR7++)
      for (VAR6 = 0; VAR6 < VAR16; VAR6++) {
	*VAR8 = VAR14[*VAR8 * VAR16 + VAR6];
	VAR8++;
      }
    VAR10->FUN1(VAR3, VAR4, VAR5);
    break;
  }

}