static int FUN1(struct VAR1 *VAR2, int VAR3,
				int VAR4, bool VAR5,
				struct VAR6 *VAR7)
{
	struct VAR8 *VAR9 = VAR2->VAR10;
	struct VAR11 *VAR12 = VAR9->VAR12;
	int VAR13, VAR14, VAR15, VAR16;

	if (VAR12[VAR3].VAR17 != VAR18) {
		
		if (VAR5 && VAR4 == 0 &&
		    FUN2(VAR12[VAR3]))
			return 0;

		FUN3(VAR2, "", VAR3,
			VAR19[VAR12[VAR3].VAR17],
			VAR19[VAR18]);
		return -VAR20;
	}

	
	if (!FUN4(VAR12[VAR3].VAR21)) {
		char VAR22[48];

 		FUN5(VAR22, sizeof(VAR22), VAR12[VAR3].VAR21);
 		FUN3(VAR2, "",
 			VAR3, VAR22);


 	}
 	VAR13 = VAR12[VAR3].VAR13 + VAR12[VAR3].VAR21.VAR23;
 	if (VAR13 >= 0 || VAR13 < -VAR24 || VAR13 + VAR4 > 0 ||
	    VAR4 < 0 || (VAR4 == 0 && !VAR5)) {
		FUN3(VAR2, "",
			VAR3, VAR13, VAR4);
		return -VAR20;
	}

	if (VAR2->VAR25->VAR26->VAR27 < -VAR13)
		VAR2->VAR25->VAR26->VAR27 = -VAR13;

	if (VAR7 && VAR7->VAR28) {
		VAR7->VAR4 = VAR4;
		VAR7->VAR3 = VAR3;
		return 0;
	}

	for (VAR14 = 0; VAR14 < VAR4; VAR14++) {
		VAR15 = -(VAR13 + VAR14) - 1;
		VAR16 = VAR15 / VAR29;
		if (VAR9->VAR30 <= VAR15 ||
		    VAR9->VAR31[VAR16].VAR32[VAR15 % VAR29] !=
			VAR33) {
			FUN3(VAR2, "",
				VAR13, VAR14, VAR4);
			return -VAR20;
		}
	}
	return 0;
}