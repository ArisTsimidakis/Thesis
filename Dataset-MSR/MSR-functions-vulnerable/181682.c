FUN1(VAR1) FUN2 (gdIOCtxPtr VAR2)
{
	int VAR3, VAR4;
	int VAR5;
	int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
	int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
	int VAR18, VAR19;
	VAR20 *VAR21 = NULL;	
	unsigned char *VAR22 = NULL;	
	int VAR23 = 0;
	int VAR24 = 0;
	uLongf VAR25;
	int VAR26 = 0;
	int VAR27 = 0;
	int VAR28;
	char *VAR29 = NULL;		

	gdImagePtr VAR30;

	
	VAR30 =
	    FUN3 (VAR2, &VAR3, &VAR4, &VAR9, &VAR18, &VAR19, &VAR6, &VAR7,
	                        &VAR21);
	if (VAR30 == NULL) {
		
		return 0;
	}

	VAR28 = VAR30->VAR31 ? 4 : 1;
	VAR8 = VAR6 * VAR7;

	if (FUN4 (VAR19)) {
		
		VAR27 = 0;
		for (VAR5 = 0; (VAR5 < VAR8); VAR5++) {
			if (VAR21[VAR5].VAR32 > VAR27) {
				VAR27 = VAR21[VAR5].VAR32;
			};
		};
		VAR27++;

		
		VAR24 = VAR9 * VAR28 * VAR9;
		VAR22 = FUN5 (VAR24, 1);
		if (!VAR22) {
			goto VAR33;
		}
		VAR29 = FUN5 (VAR27, 1);
		if (!VAR29) {
			goto VAR33;
		}

		FUN6 (printf ("", VAR27));
	};

	
	
	

	
	for (VAR11 = 0; (VAR11 < VAR7); VAR11++) {
		for (VAR10 = 0; (VAR10 < VAR6); VAR10++) {

			VAR14 = VAR11 * VAR9;
			VAR15 = VAR14 + VAR9;
			if (VAR15 > VAR30->VAR4) {
				VAR15 = VAR30->VAR4;
			};

			FUN6 (printf
			         ("",
			          VAR23, VAR10, VAR11, VAR14, VAR15));

			if (FUN4 (VAR19)) {

				VAR25 = VAR24;

				if (!FUN7 (VAR21[VAR23].VAR34,
				                    VAR29,
				                    VAR21[VAR23].VAR32,
				                    (char *) VAR22, &VAR25, VAR2)) {
					FUN6 (printf (""));
					goto VAR33;
				};

				VAR26 = 0;
			};

			for (VAR13 = VAR14; (VAR13 < VAR15); VAR13++) {

				VAR16 = VAR10 * VAR9;
				VAR17 = VAR16 + VAR9;
				if (VAR17 > VAR30->VAR3) {
					VAR17 = VAR30->VAR3;
				};
				
				if (!FUN4 (VAR19)) {
					for (VAR12 = VAR16; VAR12 < VAR17; VAR12++) {
 
 						if (VAR30->VAR31) {
 							if (!FUN8 (&VAR30->VAR35[VAR13][VAR12], VAR2)) {

								

								

								

								VAR30->VAR35[VAR13][VAR12] = 0;






 							}
 						} else {
 							int VAR36;
 							if (!FUN9 (&VAR36, VAR2)) {

								

								

								

								VAR36 = 0;






 							}
 							VAR30->VAR37[VAR13][VAR12] = VAR36;
 						}
					}
				} else {
					for (VAR12 = VAR16; VAR12 < VAR17; VAR12++) {
						if (VAR30->VAR31) {
							
							int VAR38 = VAR22[VAR26++] << 24;
							int VAR39 = VAR22[VAR26++] << 16;
							int VAR40 = VAR22[VAR26++] << 8;
							int VAR41 = VAR22[VAR26++];
							
							VAR30->VAR35[VAR13][VAR12] = VAR38 + VAR39 + VAR40 + VAR41;
						} else {
							VAR30->VAR37[VAR13][VAR12] = VAR22[VAR26++];
						}
					};
				};
				
			};
			VAR23++;
		};
	};

	FUN6 (printf (""));

	FUN10 (VAR22);
	FUN10 (VAR29);
	FUN10 (VAR21);

	FUN6 (printf (""));

	return VAR30;

VAR33:
	FUN11 (VAR30);
	if (VAR22) {
		FUN10 (VAR22);
	}
	if (VAR29) {
		FUN10 (VAR29);
	}
	if (VAR21) {
		FUN10 (VAR21);
	}
	return 0;
}