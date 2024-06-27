static int FUN1(struct VAR1 *VAR2, char *VAR3,
			    struct VAR4 *VAR5, char *VAR6, unsigned long VAR7)
{
	struct path VAR4;
	struct VAR8 *VAR9 = NULL;
	const char *VAR10 = NULL;
	const char *VAR11 = NULL;
	const char *VAR12 = NULL;
	struct tomoyo_path_info VAR13;
	struct tomoyo_path_info VAR14;
	struct tomoyo_path_info VAR15;
	int VAR16 = 0;
	int VAR17 = -VAR18;

	
	VAR10 = FUN2(VAR6);
	if (!VAR10)
		goto VAR19;
	VAR13.VAR20 = VAR10;
	FUN3(&VAR13);

	
	VAR11 = FUN4(VAR5);
	if (!VAR11) {
		VAR17 = -VAR18;
		goto VAR19;
	}
	VAR15.VAR20 = VAR11;
	FUN3(&VAR15);

	
	if (!strcmp(VAR6, VAR21)) {
		
	} else if (!strcmp(VAR6, VAR22) ||
		   !strcmp(VAR6, VAR23) ||
		   !strcmp(VAR6, VAR24) ||
		   !strcmp(VAR6, VAR25)) {
		
	} else if (!strcmp(VAR6, VAR26) ||
		   !strcmp(VAR6, VAR27)) {
		VAR16 = -1; 
	} else {
		VAR9 = FUN5(VAR6);
		if (!VAR9) {
			VAR17 = -VAR28;
			goto VAR19;
		}
		if (VAR9->VAR29 & VAR30)
			
			VAR16 = 1;
 	}
 	if (VAR16) {
 		

		if (FUN6(VAR3, VAR31, &VAR4)) {


 			VAR17 = -VAR32;
 			goto VAR19;
 		}
		VAR12 = FUN4(&VAR4);
		FUN7(&VAR4);
		if (!VAR12) {
			VAR17 = -VAR32;
			goto VAR19;
		}
	} else {
		
		if (!VAR3)
			VAR3 = "";
		VAR12 = FUN2(VAR3);
		if (!VAR12) {
			VAR17 = -VAR18;
			goto VAR19;
		}
	}
	VAR14.VAR20 = VAR12;
	FUN3(&VAR14);
	VAR2->VAR33 = VAR34;
	VAR2->VAR35.VAR36.VAR16 = VAR16;
	VAR2->VAR35.VAR36.VAR37 = &VAR14;
	VAR2->VAR35.VAR36.VAR5 = &VAR15;
	VAR2->VAR35.VAR36.VAR6 = &VAR13;
	VAR2->VAR35.VAR36.VAR7 = VAR7;
	do {
		FUN8(VAR2, VAR38);
		VAR17 = FUN9(VAR2);
	} while (VAR17 == VAR39);
 VAR19:
	FUN10(VAR12);
	FUN10(VAR11);
	if (VAR9)
		FUN11(VAR9);
	FUN10(VAR10);
	return VAR17;
}