PHPAPI void FUN1(VAR1 *VAR2, char *VAR3, int VAR4, VAR5 *VAR6,
	VAR5 *VAR7, int VAR8, int VAR9, long VAR10, long start_offset VAR11)
{
	VAR5			*VAR12,		
				   **VAR13 = NULL;	
	VAR14		*VAR15 = VAR2->VAR15;
	pcre_extra		 VAR16;		
	int				 VAR17 = 0;		
	int				 VAR18 = 0;			
	int				*VAR19;			
	int				 VAR20;		
	int				 VAR21;		
	int				 VAR22;			
	int				 VAR23 = 0;	
	const char	   **VAR24;		
	char 		   **VAR25;		
	int				 VAR26, VAR27;
	int				 VAR28;		
	int				 VAR29;    

	
	if (VAR7 != NULL) {
		FUN2(VAR7);
		FUN3(VAR7);
	}

	VAR28 = VAR8 ? VAR30 : 0;

	if (VAR9) {
		VAR29 = VAR10 & VAR31;

		
		if (VAR10 & 0xff) {
			VAR28 = VAR10 & 0xff;
		}
		if ((VAR8 && (VAR28 < VAR30 || VAR28 > VAR32)) ||
			(!VAR8 && VAR28 != 0)) {
			FUN4(NULL VAR33, VAR34, "");
			return;
		}
	} else {
		VAR29 = 0;
	}

	
	if (VAR35 < 0) {
		VAR35 = VAR4 + VAR35;
		if (VAR35 < 0) {
			VAR35 = 0;
		}
	}

	if (VAR15 == NULL) {
		VAR16.VAR10 = VAR36 | VAR37;
		VAR15 = &VAR16;
	}
	VAR15->VAR38 = FUN5(VAR39);
	VAR15->VAR40 = FUN5(VAR41);

	
	VAR27 = FUN6(VAR2->VAR42, VAR15, VAR43, &VAR20);
	if (VAR27 < 0) {
		FUN4(NULL VAR33, VAR34, "", VAR27);
		VAR44;
	}
	VAR20++;
	VAR21 = VAR20 * 3;

	
	VAR25 = FUN7(VAR20, pce VAR33);
	if (!VAR25) {
		VAR44;
        }
 
        VAR19 = (int *)FUN8(VAR21, sizeof(int), 0);




        
        if (VAR8 && VAR7 && VAR28 == VAR30) {
                VAR13 = (VAR5 **)FUN8(VAR20, sizeof(VAR5 *), 0);
		for (VAR26=0; VAR26<VAR20; VAR26++) {
			FUN9(VAR13[VAR26]);
			FUN3(VAR13[VAR26]);
			FUN10(VAR13[VAR26]);
		}
	}

	VAR22 = 0;
	FUN5(VAR45) = VAR46;
	
	do {
		
		VAR18 = FUN11(VAR2->VAR42, VAR15, VAR3, VAR4, VAR35,
						  VAR17|VAR23, VAR19, VAR21);

		
		VAR17 |= VAR47;

		
		if (VAR18 == 0) {
			FUN4(NULL VAR33, VAR48, "");
			VAR18 = VAR21/3;
		}

		
		if (VAR18 > 0) {
			VAR22++;

			
			if (VAR7 != NULL) {
				
				if (FUN12(VAR3, VAR19, VAR18, &VAR24) < 0) {
					FUN13(VAR25);
					FUN13(VAR19);
					if (VAR13) FUN13(VAR13);
					FUN4(NULL VAR33, VAR34, "");
					VAR44;
				}

				if (VAR8) {	
					if (VAR7 && VAR28 == VAR30) {
						
						for (VAR26 = 0; VAR26 < VAR18; VAR26++) {
							if (VAR29) {
								FUN14(VAR13[VAR26], (char *)VAR24[VAR26],
												VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], VAR19[VAR26<<1], NULL);
							} else {
								FUN15(VAR13[VAR26], (char *)VAR24[VAR26],
													   VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], 1);
							}
						}
						
						if (VAR18 < VAR20) {
							for (; VAR26 < VAR20; VAR26++) {
								FUN16(VAR13[VAR26], "", 1);
							}
						}
					} else {
						
						FUN9(VAR12);
						FUN3(VAR12);
						FUN10(VAR12);
						
						
						for (VAR26 = 0; VAR26 < VAR18; VAR26++) {
							if (VAR29) {
								FUN14(VAR12, (char *)VAR24[VAR26],
												VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], VAR19[VAR26<<1], VAR25[VAR26]);
							} else {
								if (VAR25[VAR26]) {
									FUN17(VAR12, VAR25[VAR26], (char *)VAR24[VAR26],
														   VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], 1);
								}
								FUN15(VAR12, (char *)VAR24[VAR26],
													   VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], 1);
							}
						}
						
						FUN18(FUN19(VAR7), &VAR12, sizeof(VAR5 *), NULL);
					}
				} else {			
					
					for (VAR26 = 0; VAR26 < VAR18; VAR26++) {
						if (VAR29) {
							FUN14(VAR7, (char *)VAR24[VAR26],
											VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1],
											VAR19[VAR26<<1], VAR25[VAR26]);
						} else {
							if (VAR25[VAR26]) {
								FUN17(VAR7, VAR25[VAR26], (char *)VAR24[VAR26],
												  VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], 1);
							}
							FUN15(VAR7, (char *)VAR24[VAR26],
												   VAR19[(VAR26<<1)+1] - VAR19[VAR26<<1], 1);
						}
					}
				}

				FUN20((void *) VAR24);
			}
		} else if (VAR18 == VAR49) {
			
			if (VAR23 != 0 && VAR35 < VAR4) {
				VAR19[0] = VAR35;
				VAR19[1] = VAR35 + 1;
			} else
				break;
		} else {
			FUN21(count VAR33);
			break;
		}
		
		
		VAR23 = (VAR19[1] == VAR19[0])? VAR50 | VAR51 : 0;
		
		
		VAR35 = VAR19[1];
	} while (VAR8);

	
	if (VAR8 && VAR7 && VAR28 == VAR30) {
		for (VAR26 = 0; VAR26 < VAR20; VAR26++) {
			if (VAR25[VAR26]) {
				FUN22(FUN19(VAR7), VAR25[VAR26],
								 strlen(VAR25[VAR26])+1, &VAR13[VAR26], sizeof(VAR5 *), NULL);
				FUN23(VAR13[VAR26]);
			}
			FUN18(FUN19(VAR7), &VAR13[VAR26], sizeof(VAR5 *), NULL);
		}
		FUN13(VAR13);
	}
	
	FUN13(VAR19);
	FUN13(VAR25);

	
	if (FUN5(VAR45) == VAR46) {
		FUN24(VAR22);
	} else {
		VAR52;
	}
}