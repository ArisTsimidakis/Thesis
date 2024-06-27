static void FUN1 (VAR1 *VAR2, VAR3 *VAR4, int VAR5) {
	VAR3 *VAR6 = FUN2 (VAR2);
	VAR7 *VAR8;
	VAR9 *VAR10;
	int VAR11, VAR12;
	FUN3 (VAR6, VAR8, VAR10) {
		VAR12 = -1;
		if (!strcmp (VAR10->VAR13, "")) {
			VAR12 = VAR14;
		} else if (!strcmp (VAR10->VAR13, "")) {
			VAR12 = VAR15;
		} else if (!strcmp (VAR10->VAR13, "")) {
			VAR12 = VAR16;
		}
		if (VAR12 != -1) {
			VAR17 *VAR18 = calloc (VAR10->VAR19, 1);
			if (!VAR18) {
				continue;
 			}
 			(void)FUN4 (VAR2->VAR18, VAR10->VAR20, VAR18, VAR10->VAR19);
 			if (VAR5 == 32) {

				for (VAR11 = 0; VAR11 < VAR10->VAR19; VAR11 += 4) {


 					ut32 VAR21 = FUN5 (VAR18 + VAR11);
 					if (VAR21) {
 						VAR22 *VAR23 = FUN6 (VAR10->VAR20 + VAR11, (VAR24)VAR21, VAR12, VAR5);
 						FUN7 (VAR4, VAR23);
 					}
 				}
 			} else {

				for (VAR11 = 0; VAR11 < VAR10->VAR19; VAR11 += 8) {


 					ut64 VAR25 = FUN8 (VAR18 + VAR11);
 					if (VAR25) {
 						VAR22 *VAR23 = FUN6 (VAR10->VAR20 + VAR11, VAR25, VAR12, VAR5);
						FUN7 (VAR4, VAR23);
					}
				}
			}
			free (VAR18);
		}
	}
	FUN9 (VAR6);
}