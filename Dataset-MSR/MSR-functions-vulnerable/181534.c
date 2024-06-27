static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
			 int VAR7, int *VAR8, int *VAR9) {
	struct VAR10 *VAR11 = VAR2->VAR11;

	char *VAR12;
	int VAR13;
	const VAR14 *VAR15, *VAR16;

	if (!VAR6) {
		return;
	}

	VAR12 = FUN2 (VAR4, VAR6);
	VAR12 = FUN3 (VAR12, "", "", 0); 

	if (!VAR12 || !*VAR12) {
		return;
	}

	VAR17 *VAR18 = FUN4 (VAR17);
	if (!VAR18) {
		return;
	}
	VAR18->VAR19 = VAR12;
	VAR18->VAR20 = VAR7;
	VAR18->VAR21 = VAR4->VAR22.VAR23 + VAR7 * VAR24;
	VAR18->VAR8 = FUN5 ();
	if (!VAR18->VAR8) {
		free (VAR18);
		return;
	}
	VAR18->VAR25 = FUN5 ();
	if (!VAR18->VAR25) {
		FUN6 (VAR18->VAR8);
		free (VAR18);
		return;
	}
	FUN7 (VAR4->VAR26, VAR18);
	if (VAR27) {
		VAR11->FUN8 ("", VAR12);
		VAR11->FUN8 (
			"", VAR6->VAR28,
			FUN9 (VAR6->VAR28, VAR29));
		VAR11->FUN8 ("",
				 FUN10 (VAR4, VAR6));
		VAR11->FUN8 ("");
	}

	if (VAR6->VAR30 > 0 &&
	    VAR4->VAR22.VAR31 < VAR6->VAR30 &&
 	    VAR6->VAR30 <
 		    VAR4->VAR22.VAR31 + VAR4->VAR22.VAR32) {
 		VAR15 = FUN11 (VAR2->VAR33, VAR6->VAR30, NULL);

		int VAR34 = FUN12(VAR15);


 		if (VAR34 < 0 || VAR34 >= VAR4->VAR22.VAR35 ) {
 			return;
 		}
		for (VAR13 = 0; VAR13 < VAR34; VAR13++) {
			int VAR36 = FUN13 (VAR15 + 4 + VAR13 * 2);
			if (VAR36 > 0 && VAR36 < VAR4->VAR22.VAR35 ) {
				int VAR37 = VAR4->VAR38[VAR36].VAR39;
				if (VAR27) {
					VAR11->FUN8 (
						"",
						VAR13, FUN14 (VAR4, VAR37));
				}
			}
		}
	}

	
	if (!VAR6 || !VAR6->VAR40) {
		if (VAR27) {
			VAR11->FUN8 (
				""
				""
				"");
		}
	} else {
		
		
		if (VAR4->VAR22.VAR23 > VAR6->VAR40 ||
		    VAR6->VAR40 <
			    VAR4->VAR22.VAR23 +
				    VAR4->VAR22.VAR41 * VAR24) {
			return;
		}

		VAR15 = FUN11 (VAR2->VAR33, VAR6->VAR40, NULL);
		VAR16 = VAR15 + VAR2->VAR33->VAR42 - VAR6->VAR40;
		
		VAR6->VAR43 = (struct VAR44 *)malloc (
			sizeof (struct VAR44));
		VAR15 = FUN15 (VAR15, VAR16 - VAR15, &VAR6->VAR43->VAR45);
		VAR15 = FUN15 (VAR15, VAR16 - VAR15, &VAR6->VAR43->VAR46);
		VAR15 = FUN15 (VAR15, VAR16 - VAR15, &VAR6->VAR43->VAR47);
		VAR15 = FUN15 (VAR15, VAR16 - VAR15, &VAR6->VAR43->VAR48);

		if (VAR27) { 
			VAR11->FUN8 (""); 
		}
		VAR15 = FUN16 (
			VAR2, VAR4, VAR6, VAR18, VAR15, VAR16, VAR9,
			VAR6->VAR43->VAR45, true);

		if (VAR27) { 
			VAR11->FUN8 ("");
		}
		VAR15 = FUN16 (
			VAR2, VAR4, VAR6, VAR18, VAR15, VAR16, VAR9,
			VAR6->VAR43->VAR46, false);

		if (VAR27) { 
			VAR11->FUN8 ("");
		}
		VAR15 = FUN17 (
			VAR2, VAR4, VAR6, VAR18, VAR15, VAR16, VAR9,
			VAR6->VAR43->VAR47, VAR8, true);

		if (VAR27) { 
			VAR11->FUN8 ("");
		}
		VAR15 = FUN17 (
			VAR2, VAR4, VAR6, VAR18, VAR15, VAR16, VAR9,
			VAR6->VAR43->VAR48, VAR8, false);
	}

	if (VAR27) { 
		char *VAR49 = FUN14 (VAR4, VAR6->VAR49);
		if (!VAR49) {
			VAR11->FUN8 (
				"",
				VAR6->VAR49);
		} else {
			VAR11->FUN8 ("",
					 VAR6->VAR49, VAR49);
		}
	}
	
	
	
}