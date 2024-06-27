void FUN1(gdImagePtr VAR1, VAR2 *VAR3, int VAR4)
{
	int VAR5, VAR6;
	int VAR7;
	int VAR8, VAR9, VAR10, VAR11;
	VAR12 *VAR13;
	int VAR14, VAR15;
	int VAR16;
	char *VAR17;
	int VAR18 = 3;
	int VAR19;
	int VAR20 = -1;
	int VAR21 = -1;
	int VAR22 = -1;
	uint16 VAR23[1];
	VAR24 *VAR25 = NULL;
	VAR24 *VAR26 = NULL;
	VAR24 *VAR27 = NULL;

	VAR28 *VAR29;

	VAR29 = FUN2(VAR3);
	if (!VAR29) {
		return;
	}
	VAR23[0] = VAR30;

	
	VAR14 = FUN3(VAR1);
	VAR15 = FUN4(VAR1);

	
	FUN5(VAR1, 0, 0, VAR14, VAR15);

	
	if(VAR1->VAR31 != -1) {
		
		VAR20 = FUN6(VAR1, VAR1->VAR31);
		VAR21 = FUN7(VAR1, VAR1->VAR31);
		VAR22 = FUN8(VAR1, VAR1->VAR31);
	}

	
	VAR13 = FUN9("", "", VAR29,	VAR32,
			      VAR33,
			      VAR34,
			      VAR35,
			      VAR36,
			      VAR37,
			      VAR38);

	FUN10(VAR13, VAR39, VAR14);
	FUN10(VAR13, VAR40, VAR15);
	FUN10(VAR13, VAR41, VAR42);
	FUN10(VAR13, VAR43, VAR44);
	FUN10(VAR13, VAR45,
		     (VAR4 == 24) ? VAR46 : VAR47);

	VAR19 = (VAR4 == 24 || VAR4 == 8) ? 8 : 1;
	FUN10(VAR13, VAR48, VAR19);

	FUN10(VAR13, VAR49, (float)VAR1->VAR50);
	FUN10(VAR13, VAR51, (float)VAR1->VAR52);

	
	if(VAR4 != 24) {
		VAR25   = (VAR24 *) FUN11(3 * (1 << VAR19));
		if (!VAR25) {
			FUN12(VAR29);
			return;
		}
		VAR26 = (VAR24 *) FUN11(3 * (1 << VAR19));
		if (!VAR26) {
			FUN12(VAR25);
			FUN12(VAR29);
			return;
		}
		VAR27  = (VAR24 *) FUN11(3 *  (1 << VAR19));
		if (!VAR27) {
			FUN12(VAR25);
			FUN12(VAR26);
			FUN12(VAR29);
			return;
		}

		for(VAR7 = 0; VAR7 < VAR1->VAR53; VAR7++) {
			VAR25[VAR7]   = FUN6(VAR1,VAR7) + (FUN6(VAR1,VAR7) * 256);
			VAR26[VAR7] = FUN7(VAR1,VAR7)+(FUN7(VAR1,VAR7)*256);
			VAR27[VAR7]  = FUN8(VAR1,VAR7) + (FUN8(VAR1,VAR7)*256);
		}

		FUN10(VAR13, VAR54, VAR25, VAR26,
			     VAR27);
		VAR18 = 1;
	}

	
	if ((VAR4 == 24) &&
	    (VAR1->VAR55 || VAR1->VAR31 != -1)) {
		
		VAR18 = 4;
		FUN10(VAR13, VAR56, VAR18);
		FUN10(VAR13, VAR57, 1, VAR23);
	} else {
		FUN10(VAR13, VAR56, VAR18);
	}

	FUN10(VAR13, VAR58, 1);

	if(FUN13(VAR14, VAR18)) {
		if (VAR25)   FUN12(VAR25);
		if (VAR26) FUN12(VAR26);
		if (VAR27)  FUN12(VAR27);
		FUN12(VAR29);
		return;
	}

	if(!(VAR17 = (char *)FUN11(VAR14 * VAR18))) {
		if (VAR25)   FUN12(VAR25);
		if (VAR26) FUN12(VAR26);
		if (VAR27)  FUN12(VAR27);
		FUN12(VAR29);
		return;
	}

	
	for(VAR6 = 0; VAR6 < VAR15; VAR6++) {
		for(VAR5 = 0; VAR5 < VAR14; VAR5++) {
			
			VAR16 = FUN14(VAR1, VAR5, VAR6);

			VAR11 = (127 - FUN15(VAR1, VAR16)) * 2;
			VAR11 = (VAR11 == 0xfe) ? 0xff : VAR11 & 0xff;
			VAR10 = FUN8(VAR1, VAR16);
			VAR9 = FUN7(VAR1, VAR16);
			VAR8 = FUN6(VAR1, VAR16);

			
			if (VAR20 == VAR8 &&
			    VAR21 == VAR9 &&
			    VAR22 == VAR10) {
				VAR11 = 0x00;
			}

			if(VAR4 != 24) {
				
				VAR17[(VAR5 * VAR18) + 0] = VAR16;
			} else {
				
				if(VAR1->VAR55 || VAR1->VAR31 != -1) {
					VAR17[(VAR5 * VAR18) + 3] = VAR11;
				}

				VAR17[(VAR5 * VAR18) + 2] = VAR10;
				VAR17[(VAR5 * VAR18) + 1] = VAR9;
				VAR17[(VAR5 * VAR18) + 0] = VAR8;
			}
		}

		
		if(FUN16(VAR13, VAR6, VAR17, VAR14 * VAR18) == -1) {
			if (VAR25)   FUN12(VAR25);
			if (VAR26) FUN12(VAR26);
			if (VAR27)  FUN12(VAR27);
			FUN12(VAR29);
			
			FUN17("");
			return;
		}
	}

	
	FUN18(VAR13);
	FUN12(VAR17);
	FUN12(VAR29);

	if(VAR4 != 24) {
		FUN12(VAR25);
		FUN12(VAR26);
		FUN12(VAR27);
	}
}