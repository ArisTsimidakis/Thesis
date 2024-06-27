static int FUN1(VAR1 *VAR2, char *VAR3)
{
	VAR4 *VAR5;
	VAR6 *VAR7;
	int VAR8;

	VAR7 = 0;
	VAR5 = 0;

	if (!(VAR7 = FUN2())) {
		goto VAR9;
	}
	VAR7->VAR10 = 0;
	VAR7->VAR11 = 0;
	VAR7->VAR12 = 0;
	VAR7->VAR13 = 0;
	VAR7->VAR14 = 0;
	VAR7->VAR15 = 0;
	VAR7->VAR16 = 0;
	VAR7->VAR17 = -1;
	VAR7->VAR18 = 0;

	if (!(VAR5 = FUN3(VAR3))) {
		goto VAR9;
	}
	while (!(VAR8 = FUN4(VAR5))) {
		switch (FUN5(FUN6(VAR19,
		  FUN7(VAR5)))->VAR8) {
		case VAR20:
			VAR7->VAR10 = FUN8(FUN9(VAR5));
			break;
		case VAR21:
			VAR7->VAR11 = FUN8(FUN9(VAR5));
			break;
		case VAR22:
			VAR7->VAR14 = FUN8(FUN9(VAR5));
			break;
		case VAR23:
			VAR7->VAR15 = FUN8(FUN9(VAR5));
			break;
		case VAR24:
			VAR7->VAR12 = FUN8(FUN9(VAR5));
			break;
		case VAR25:
			VAR7->VAR13 = FUN8(FUN9(VAR5));
			break;
		case VAR26:
			VAR7->VAR16 = FUN8(FUN9(VAR5));
			break;
		case VAR27:
			VAR7->VAR17 = FUN8(FUN9(VAR5));
			break;
		case VAR28:
			if (!(VAR7->VAR18 = FUN10(FUN9(VAR5)))) {
				return -1;
			}
 			break;
 		}
 	}

	FUN11(VAR5);
 	if (!VAR7->VAR12 || !VAR7->VAR13) {
 		goto VAR9;
 	}
 	if (FUN12(VAR2, VAR2->VAR29, VAR7)) {
 		goto VAR9;
 	}


 	return 0;
 
 VAR9:
	if (VAR7) {
		FUN13(VAR7);
	}
	if (VAR5) {
		FUN11(VAR5);
	}
	return -1;
}