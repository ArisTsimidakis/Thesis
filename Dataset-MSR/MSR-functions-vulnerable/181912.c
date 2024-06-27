static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
  VAR7 *VAR8)
{
	int VAR9;
	int VAR10;
	int VAR11;
	int VAR12;
	int VAR13;
	int VAR14;
	int VAR15;
	int VAR16;
	VAR17 *VAR18[3];


 	
 	VAR6 = 0;
 












 	for (VAR16 = 0; VAR16 < FUN2(VAR8); ++VAR16) {

		VAR18[VAR16] = FUN3(1, FUN4(VAR8));

		assert(VAR18[VAR16]);






 	}
 
 	VAR9 = FUN5(VAR4) - (VAR4->VAR19 * VAR4->VAR20 + 7) / 8;

	for (VAR13 = 0; VAR13 < VAR4->VAR21; VAR13++) {
		VAR10 = 0;
		VAR11 = 0;
 		for (VAR14 = 0; VAR14 < VAR4->VAR19; VAR14++) {
 			while (VAR10 < VAR4->VAR20) {
 				if ((VAR12 = FUN6(VAR2)) == VAR22) {

					return -1;


 				}
 				VAR11 = (VAR11 << 8) | VAR12;
 				VAR10 += 8;
			}

			VAR15 = (VAR11 >> (VAR10 - VAR4->VAR20)) & FUN7(VAR4->VAR20);
			VAR11 &= FUN7(VAR10 - VAR4->VAR20);
			VAR10 -= VAR4->VAR20;

			if (FUN2(VAR8) == 3) {
				FUN8(VAR18[0], VAR14, (FUN9(VAR15)));
				FUN8(VAR18[1], VAR14, (FUN10(VAR15)));
				FUN8(VAR18[2], VAR14, (FUN11(VAR15)));
			} else {
				FUN8(VAR18[0], VAR14, (VAR15));
			}
 		}
 		if (VAR9) {
 			if ((VAR12 = FUN6(VAR2)) == VAR22) {

				return -1;


 			}
 		}
 		for (VAR16 = 0; VAR16 < FUN2(VAR8); ++VAR16) {
 			if (FUN12(VAR8, VAR16, 0, VAR13, VAR4->VAR19, 1,
 			  VAR18[VAR16])) {

				return -1;


 			}
 		}
 	}
 
 	for (VAR16 = 0; VAR16 < FUN2(VAR8); ++VAR16) {
 		FUN13(VAR18[VAR16]);


 	}
 
 	return 0;
















 }