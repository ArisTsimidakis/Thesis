static VAR1 *FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6, gboolean VAR7)


 {
 	VAR8 *VAR9;
 	VAR1 *VAR10;
	int VAR11;
	VAR12 *VAR13;
	VAR14 *VAR15 = NULL;

	FUN2(VAR2 != NULL, NULL);

	if(!VAR16 && !FUN3())
		return NULL;

	if(!(VAR11 = FUN4(VAR2)))
		return NULL;

	if (VAR3 && *VAR3) {
		char *VAR17 = NULL, *VAR18 = NULL;
		if ((VAR15 = FUN5(FUN6())) == NULL) {
			FUN7("");
			return NULL;
		}
		VAR17 = FUN8(VAR3);
		if (VAR4 && *VAR4)
			VAR18 = FUN8(VAR4);
		if (! FUN9(VAR15, VAR17, VAR19))
			FUN10("", VAR3);
		else if (! FUN11(VAR15, VAR18 ? VAR18 : VAR17, VAR19))
			FUN10("", VAR4 ? VAR4 : VAR3);
		else if (! FUN12(VAR15))
			FUN10("");
		FUN13(VAR17);
		FUN13(VAR18);
	}

	if ((VAR5 && *VAR5) || (VAR6 && *VAR6)) {
		char *VAR20 = NULL;
		char *VAR21 = NULL;
		if (! VAR15 && (VAR15 = FUN5(FUN6())) == NULL) {
			FUN7("");
			return NULL;
		}
		if (VAR5 && *VAR5)
			VAR20 = FUN8(VAR5);
		if (VAR6 && *VAR6)
			VAR21 = FUN8(VAR6);
		if (! FUN14(VAR15, VAR20, VAR21)) {
			FUN10("");
			FUN13(VAR20);
			FUN13(VAR21);
			FUN15(VAR15);
			return NULL;
		}
		FUN13(VAR20);
		FUN13(VAR21);
		VAR7 = VAR22;
	}

	if (VAR15 == NULL)
		VAR15 = VAR16;

	if(!(VAR13 = FUN16(VAR15)))
	{
		FUN10("");
		return NULL;
	}

	if(!FUN17(VAR13, VAR11))
	{
		FUN10("");
		FUN18(VAR13);
		if (VAR15 != VAR16)
			FUN15(VAR15);
		return NULL;
	}

	FUN19(VAR13, VAR23 |
			VAR24);

	VAR9 = FUN20(VAR8, 1);
	VAR9->VAR11 = VAR11;
	VAR9->VAR25 = VAR2;
 	VAR9->VAR13 = VAR13;
 	VAR9->VAR15 = VAR15;
 	VAR9->VAR7 = VAR7;


 
 	VAR10 = (VAR1 *)VAR9;
 	VAR10->VAR26 = &VAR27;
	FUN21(VAR10);
	VAR10->VAR28 = VAR10->VAR29 = VAR22;
	VAR10->VAR30 = VAR31;

 	return VAR10;
 }