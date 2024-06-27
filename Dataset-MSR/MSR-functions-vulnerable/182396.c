static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5,
			      const ut64 VAR6, const ut64 VAR7, int VAR8) {
	ut8 VAR9[VAR10];
	ut64 VAR11, VAR12 = VAR6;
	int VAR13 = 0, VAR14, VAR15, VAR16;
	int VAR17 = VAR18;

	if (VAR8 == -1) {
		VAR8 = VAR18;
	}
	if (VAR6 >= VAR7) {
 		FUN2 ("", VAR6, VAR7);
 		return -1;
 	}

	VAR19 *VAR20 = calloc (VAR7 - VAR6, 1);




 	if (!VAR20 || !VAR5) {
 		return -1;
 	}

	FUN3 (VAR4->VAR20, VAR6, VAR20, VAR7 - VAR6);


 	
 	while (VAR12 < VAR7) {
 		VAR15 = FUN4 (VAR20 + VAR12 - VAR6, VAR7 - VAR12, NULL);
		if (!VAR15) {
			VAR12++;
			continue;
 		}
 		if (VAR8 == VAR18) {
 			char *VAR21 = (char *)VAR20 + VAR12 + VAR15 - VAR6;

			if ((VAR7 - VAR12) > 5) {

				bool VAR22 = VAR12 + VAR15 + 2 < VAR7 && !VAR21[0] && !VAR21[1] && !VAR21[2] && VAR21[3] && !VAR21[4];




 				if (VAR22) {
 					VAR17 = VAR23;
 				} else {
					bool VAR24 = VAR12 + VAR15 + 2 < VAR7 && !VAR21[0] && VAR21[1] && !VAR21[2];
					VAR17 = VAR24? VAR25: VAR26;
				}
			} else {
				VAR17 = VAR26;
			}
		} else {
			VAR17 = VAR8;
		}
		VAR16 = 0;
		VAR11 = VAR12;

		
		for (VAR15 = VAR14 = 0; VAR14 < sizeof (VAR9) - 3 && VAR12 < VAR7; VAR14 += VAR15) {
			RRune VAR27 = {0};

			if (VAR17 == VAR23) {
				VAR15 = FUN5 (VAR20 + VAR12 - VAR6, VAR7 - VAR12, &VAR27);
				if (VAR15) {
					VAR15 = 4;
				}
			} else if (VAR17 == VAR25) {
				VAR15 = FUN6 (VAR20 + VAR12 - VAR6, VAR7 - VAR12, &VAR27);
				if (VAR15 == 1) {
					VAR15 = 2;
				}
			} else {
				VAR15 = FUN4 (VAR20 + VAR12 - VAR6, VAR7 - VAR12, &VAR27);
				if (VAR15 > 1) {
					VAR17 = VAR28;
				}
			}

			
			if (!VAR15) {
				VAR12++;
				break;
			}

			VAR12 += VAR15;

			if (FUN7 (VAR27) && VAR27 != '') {
				if (VAR17 == VAR23) {
					if (VAR27 == 0xff) {
						VAR27 = 0;
					}
				}
				VAR15 = FUN8 (&VAR9[VAR14], VAR27);
				VAR16++;
				
			} else if (VAR27 && VAR27 < 0x100 && strchr ("", (char)VAR27)) {
				if ((VAR14 + 32) < sizeof (VAR9) && VAR27 < 93) {
					VAR9[VAR14 + 0] = '';
					VAR9[VAR14 + 1] = ""
					             ""
					             ""
					             ""[VAR27];
				} else {
					
					break;
				}
				VAR15 = 2;
				VAR16++;
			} else {
				
				break;
			}
		}

		VAR9[VAR14++] = '';

		if (VAR16 >= VAR5) {
			if (VAR17 == VAR26) {
				
				int VAR29;
				for (VAR29 = 0; VAR29 < VAR14; VAR29++) {
					char VAR30 = VAR9[VAR29];
					if (VAR30 != '' && VAR30 != '' && VAR30 != '') {
						if (!FUN9 (VAR9[VAR29])) {
							continue;
						}
					}
				}
			}
			VAR31 *VAR32 = FUN10 (VAR31);
			if (!VAR32) {
				break;
			}
			VAR32->VAR8 = VAR17;
			VAR32->VAR33 = VAR16;
			VAR32->VAR34 = VAR12 - VAR11;
			VAR32->VAR35 = VAR13++;
			
			switch (VAR17) {
			case VAR25:
				if (VAR11 -VAR6> 1) {
					const VAR19 *VAR36 = VAR20 + VAR11 - 2 - VAR6;
					if (VAR36[0] == 0xff && VAR36[1] == 0xfe) {
						VAR11 -= 2; 
					}
				}
				break;
			case VAR23:
				if (VAR11 -VAR6> 3) {
					const VAR19 *VAR36 = VAR20 + VAR11 - 4 - VAR6;
					if (VAR36[0] == 0xff && VAR36[1] == 0xfe) {
						VAR11 -= 4; 
					}
				}
				break;
			}
			VAR32->VAR37 = VAR32->VAR38 = VAR11;
			VAR32->VAR39 = FUN11 ((const char *)VAR9, VAR14);
			if (VAR2) {
				FUN12 (VAR2, VAR32);
			} else {
				FUN13 (VAR32, VAR4);
				FUN14 (VAR32);
			}
		}
	}
	free (VAR20);
	return VAR13;
}