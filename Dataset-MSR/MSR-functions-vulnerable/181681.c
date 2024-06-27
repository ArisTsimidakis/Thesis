FUN1 (gdIOCtxPtr VAR1, int *VAR2, int *VAR3,
               int *VAR4, int *VAR5, int *VAR6, int *VAR7, int *VAR8,
               VAR9 ** VAR10)
{
	int VAR11;
	int VAR12;
	char VAR13[5];
	VAR9 *VAR14;
	int VAR15;
	int VAR16;

	FUN2 (printf (""));

	for (VAR11 = 0; VAR11 < 4; VAR11++) {
		VAR12 = FUN3 (VAR1);
		if (VAR12 == VAR17) {
			goto VAR18;
		};
		VAR13[VAR11] = VAR12;
	};
	VAR13[4] = 0;

	FUN2 (printf ("", VAR13));

	
	if (strcmp (VAR13, VAR19) != 0) {
		FUN2 (printf (""));
		goto VAR18;
	};

	
	if (FUN4 (VAR5, VAR1) != 1) {
		goto VAR18;
	};
	FUN2 (printf ("", *VAR5));

	if ((*VAR5 != 1) && (*VAR5 != 2)) {
		FUN2 (printf ("", *VAR5));
		goto VAR18;
	};

	
	if (!FUN4 (VAR2, VAR1)) {
		FUN2 (printf (""));
		goto VAR18;
	}
	if (!FUN4 (VAR3, VAR1)) {
		FUN2 (printf (""));
		goto VAR18;
	}
	FUN2 (printf ("", *VAR2, *VAR3));

	
	if (FUN4 (VAR4, VAR1) != 1) {
		goto VAR18;
	};
	FUN2 (printf ("", *VAR4));

	if ((*VAR4 < VAR20) || (*VAR4 > VAR21)) {
		FUN2 (printf ("", *VAR4));
		goto VAR18;
	};

	
	if (FUN4 (VAR6, VAR1) != 1) {
		goto VAR18;
	};
	FUN2 (printf ("", *VAR6));

	if ((*VAR6 != VAR22) && (*VAR6 != VAR23) &&
	        (*VAR6 != VAR24) &&
	        (*VAR6 != VAR25)) {
		FUN2 (printf ("", *VAR6));
		goto VAR18;
	};


	
	if (FUN4 (VAR7, VAR1) != 1) {
		goto VAR18;
	};
	FUN2 (printf ("", *VAR7));

	
	if (FUN4 (VAR8, VAR1) != 1) {
		goto VAR18;
	};
 	FUN2 (printf ("", *VAR8));
 
 	if (FUN5 (*VAR6)) {








 		VAR16 = (*VAR7) * (*VAR8);
 
 		FUN2 (printf ("", VAR16));
		if (FUN6(sizeof(VAR9), VAR16)) {
			goto VAR18;
		}
		VAR15 = sizeof (VAR9) * VAR16;
		if (VAR15 <= 0) {
			goto VAR18;
		}

		VAR14 = FUN7 (VAR15, 1);
		if (VAR14 == NULL) {
			goto VAR18;
		}
		for (VAR11 = 0; VAR11 < VAR16; VAR11++) {
			if (FUN8 (&VAR14[VAR11].VAR26, VAR1) != 1) {
				goto VAR27;
			};
			if (FUN8 (&VAR14[VAR11].VAR28, VAR1) != 1) {
				goto VAR27;
			};
			if (VAR14[VAR11].VAR26 < 0 || VAR14[VAR11].VAR28 < 0)
				goto VAR27;
		};
		*VAR10 = VAR14;
	};

	FUN2 (printf (""));

	return 1;
VAR27:
	FUN9(VAR14);
VAR18:
	return 0;
}