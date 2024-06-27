static int FUN1(struct FUN2(VAR1)* VAR2, struct VAR3 *VAR4, int VAR5) {
	int VAR6, VAR7, VAR8, VAR9;
	ut32 VAR10;
	VAR9 = FUN2(VAR11)(VAR2) / 8;
	if (VAR5 < 0 || VAR5 >= VAR2->VAR12) {
		return 0;
	}
	if ((VAR2->VAR13[VAR5].VAR14 & VAR15) == VAR16) {
		VAR10 = VAR17;
	} else {
		VAR10 = VAR18;
	}

	VAR4->VAR19 = 0;
	VAR4->VAR20 = 0;
	VAR4->VAR21 = 0;
#VAR22 FUN3(VAR23) case (VAR23 / 8): VAR4->VAR24 = VAR25 ## VAR23; break
	switch (VAR9) {
		FUN3(8);
		FUN3(16);
		FUN3(32);
		FUN3(64);
		default: return false;
	}
#undef VAR26
 
 	for (VAR6 = 0; VAR6 < VAR2->VAR27; VAR6++) {
 		if ((VAR2->VAR28[VAR6].VAR29 & VAR30) == VAR10) {

			for (VAR7=0, VAR8=-1; VAR2->VAR28[VAR6].VAR31+VAR7 < VAR2->VAR32; VAR7++)

				if (VAR5 == VAR2->VAR33[VAR2->VAR28[VAR6].VAR31 + VAR7]) {












 					VAR8 = VAR7;
 					break;
 				}




 			VAR4->VAR19 = VAR8 == -1 ? 0 : VAR2->VAR28[VAR6].VAR19 + VAR8 * VAR9;
 			VAR4->VAR20 = VAR8 == -1 ? 0 : VAR2->VAR28[VAR6].VAR20 + VAR8 * VAR9;
 			return true;
		}
	}
	return false;
}