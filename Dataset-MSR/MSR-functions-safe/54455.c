FUN1 (gdImagePtr VAR1, VAR2 * VAR3, int VAR4, int VAR5)
{
	int VAR6, VAR7, VAR8, VAR9;
	int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
	int VAR16;
	int VAR17 = 0;
	char *VAR18 = NULL;	
	char *VAR19 = NULL;	
	uLongf VAR20;
	int VAR21 = 0;
	int VAR22;
	VAR23 *VAR24 = NULL;
	int VAR25;
	int VAR26 = VAR1->VAR27 ? 4 : 1;
	int VAR28 = 0;

	

	
	
	
	if ((VAR5 != VAR29) && (VAR5 != VAR30)) {
		VAR5 = VAR1->VAR27 ? VAR31 : VAR30;
	};
	if (VAR1->VAR27) {
		VAR5 += 2;
	}
	
	
	
	
	
	
	if (VAR4 == 0) {
		VAR4 = VAR32;
	} else if (VAR4 < VAR33) {
		VAR4 = VAR33;
	} else if (VAR4 > VAR34) {
		VAR4 = VAR34;
	};

	
	VAR6 = VAR1->VAR35 / VAR4 + 1;
	VAR7 = VAR1->VAR36 / VAR4 + 1;

	
	FUN2 (VAR1, VAR3, VAR4, VAR5, VAR6, VAR7);

	if (FUN3 (VAR5)) {
		
		
		
		
		
		
		
		VAR28 = VAR4 * VAR26 * VAR4 * 1.02 + 12;

		
		
		
		VAR18 = FUN4 (VAR4 * VAR26 * VAR4, 1);
		if (!VAR18) {
			goto VAR37;
		}
		VAR19 = FUN4 (VAR28, 1);
		if (!VAR19) {
			goto VAR37;
		}

		
		
		
		
		VAR21 = FUN5 (VAR3);
		VAR22 = VAR6 * VAR7 * sizeof (VAR23);
		FUN6 (printf ("", VAR22));
		FUN7 (VAR3, VAR21 + VAR22);

		VAR24 = FUN4 (VAR22 * sizeof (VAR23), 1);
		if (!VAR24) {
			goto VAR37;
		}
	};

	FUN8 (VAR1, VAR3);

	FUN6 (printf ("", VAR1->VAR35, VAR1->VAR36));
	FUN6 (printf ("", VAR6, VAR7));

	for (VAR9 = 0; (VAR9 < VAR7); VAR9++) {
		for (VAR8 = 0; (VAR8 < VAR6); VAR8++) {

			VAR12 = VAR9 * VAR4;
			VAR13 = VAR12 + VAR4;
			if (VAR13 > VAR1->VAR36) {
				VAR13 = VAR1->VAR36;
			};

			FUN6 (printf
			         ("", VAR8, VAR9,
			          VAR12, VAR13));
			VAR16 = 0;
			for (VAR11 = VAR12; (VAR11 < VAR13); VAR11++) {

				

				VAR14 = VAR8 * VAR4;
				VAR15 = VAR14 + VAR4;
				if (VAR15 > VAR1->VAR35) {
					VAR15 = VAR1->VAR35;
				};

				if (FUN3 (VAR5)) {
					for (VAR10 = VAR14; VAR10 < VAR15; VAR10++) {
						
						
						if (VAR1->VAR27) {
							int VAR38 = VAR1->VAR39[VAR11][VAR10];
							VAR18[VAR16++] = FUN9 (VAR38);
							VAR18[VAR16++] = FUN10 (VAR38);
							VAR18[VAR16++] = FUN11 (VAR38);
							VAR18[VAR16++] = FUN12 (VAR38);
						} else {
							int VAR38 = VAR1->VAR40[VAR11][VAR10];
							VAR18[VAR16++] = VAR38;
						}
					};
				} else {
					for (VAR10 = VAR14; VAR10 < VAR15; VAR10++) {
						

						if (VAR1->VAR27) {
							FUN13 (VAR1->VAR39[VAR11][VAR10], VAR3);
						} else {
							FUN14 ((unsigned char) VAR1->VAR40[VAR11][VAR10], VAR3);
						}
					};
				};
				
			};
			if (FUN3 (VAR5)) {
				VAR20 = VAR28;
				if (FUN15 ((unsigned char *)
				              &VAR19[0], &VAR20,
				              (unsigned char *) &VAR18[0],
				              VAR16) != VAR41) {
					printf ("");
				} else {
					VAR24[VAR17].VAR42 = FUN5 (VAR3);
					VAR24[VAR17++].VAR43 = VAR20;
					FUN6 (printf
					         ("", VAR17,
					          VAR24[VAR17 - 1].VAR43,
					          VAR24[VAR17 - 1].VAR42));

					if (FUN16 (VAR19, VAR20, VAR3) <= 0) {
						FUN17("");
					};
				};
			};
		};
	};
	if (FUN3 (VAR5)) {
		
		FUN6 (printf ("", VAR21));
		VAR25 = FUN5 (VAR3);
		FUN7 (VAR3, VAR21);
		FUN6 (printf (""));
		for (VAR10 = 0; VAR10 < VAR17; VAR10++) {
			FUN6 (printf
			         ("", VAR10, VAR24[VAR10].VAR43,
			          VAR24[VAR10].VAR42));
			FUN13 (VAR24[VAR10].VAR42, VAR3);
			FUN13 (VAR24[VAR10].VAR43, VAR3);
		};
		
		
		FUN7 (VAR3, VAR25);
	};

	
VAR37:
	FUN6 (printf (""));

	if (VAR18) {
		FUN18 (VAR18);
	}
	if (VAR19) {
		FUN18 (VAR19);
	}
	if (VAR24) {
		FUN18 (VAR24);
	}
	FUN6 (printf (""));

}