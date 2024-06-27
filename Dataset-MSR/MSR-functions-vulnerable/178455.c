FUN1(VAR1 *VAR2, const char *VAR3)
{
	struct VAR4 *VAR4 = VAR5; 
	char VAR6[256];
	u_int VAR7, VAR8;
	char **VAR9, *VAR10;
	struct VAR11 *VAR12 = VAR2->VAR12;
#if !FUN2 (VAR13) && !FUN2 (VAR14)
	char *VAR15 = NULL;
#endif

	
	VAR8 = 100;
	VAR9 = xcalloc(VAR8, sizeof(char *));
	VAR9[0] = NULL;

#ifdef VAR14
	
	{
		char **VAR16;

		VAR16 = FUN3();
		FUN4(VAR16, &VAR9, &VAR8);
		FUN5(VAR16);
	}
#endif

#ifdef VAR17
	
	FUN6(&VAR9, &VAR8);
#endif

	if (!VAR18.VAR19) {
		
		for (VAR7 = 0; VAR7 < VAR2->VAR20; VAR7++)
			FUN7(&VAR9, &VAR8, VAR2->VAR9[VAR7].VAR21,
			    VAR2->VAR9[VAR7].VAR22);

		FUN7(&VAR9, &VAR8, "", VAR12->VAR23);
		FUN7(&VAR9, &VAR8, "", VAR12->VAR23);
#ifdef VAR24
		FUN7(&VAR9, &VAR8, "", VAR12->VAR23);
#endif
		FUN7(&VAR9, &VAR8, "", VAR12->VAR25);
#ifdef VAR13
		if (FUN8(VAR26, VAR12, VAR12->VAR27, VAR28) < 0)
			FUN7(&VAR9, &VAR8, "", VAR29);
		else
			FUN7(&VAR9, &VAR8, "", getenv(""));
#else 
# ifndef VAR14
		
#  ifdef VAR30
		FUN9(&VAR9, &VAR8, VAR12->VAR27);
		VAR15 = FUN10(VAR9, "");
#  endif 
		if (VAR15 == NULL || *VAR15 == '') {
			FUN7(&VAR9, &VAR8, "",
			    VAR2->VAR12->VAR27 == 0 ?
				VAR31 : VAR29);
		}
# endif 
#endif 

		snprintf(VAR6, sizeof VAR6, "",
			 VAR32, VAR12->VAR23);
		FUN7(&VAR9, &VAR8, "", VAR6);

		
		FUN7(&VAR9, &VAR8, "", VAR3);
	}
	if (getenv(""))
		FUN7(&VAR9, &VAR8, "", getenv(""));

	
	if (!VAR18.VAR19) {
		while (VAR33) {
			struct VAR34 *VAR35 = VAR33;
			char *VAR36 = VAR35->VAR2;

			for (VAR7 = 0; VAR36[VAR7] != '' && VAR36[VAR7]; VAR7++)
				;
			if (VAR36[VAR7] == '') {
				VAR36[VAR7] = 0;
				FUN7(&VAR9, &VAR8, VAR36, VAR36 + VAR7 + 1);
			}
			VAR33 = VAR35->VAR37;
			free(VAR35->VAR2);
			free(VAR35);
		}
	}

	
	snprintf(VAR6, sizeof VAR6, "",
	    FUN11(VAR4), FUN12(VAR4),
	    FUN13(VAR4));
	FUN7(&VAR9, &VAR8, "", VAR6);

	VAR10 = FUN14(FUN15());
	snprintf(VAR6, sizeof VAR6, "",
	    FUN11(VAR4), FUN12(VAR4),
	    VAR10, FUN13(VAR4));
	free(VAR10);
	FUN7(&VAR9, &VAR8, "", VAR6);

	if (VAR2->VAR38 != -1)
		FUN7(&VAR9, &VAR8, "", VAR2->VAR39);
	if (VAR2->VAR40)
		FUN7(&VAR9, &VAR8, "", VAR2->VAR40);
	if (VAR2->VAR41)
		FUN7(&VAR9, &VAR8, "", VAR2->VAR41);
	if (VAR42)
		FUN7(&VAR9, &VAR8, "",
		    VAR42);

#ifdef VAR43
	if (VAR44[0] != '')
		FUN7(&VAR9, &VAR8, "", VAR44);
#endif 

	
	{
		char *VAR45;

		if ((VAR45 = getenv("")) != NULL)
			FUN7(&VAR9, &VAR8, "", VAR45);
	}

#ifdef VAR24
	{
		char *VAR45;

		if ((VAR45 = getenv("")) != NULL)
			FUN7(&VAR9, &VAR8, "", VAR45);
		FUN16(&VAR9, &VAR8, "");
	}
#endif
#ifdef VAR46
	if (VAR2->VAR47->VAR48)
		FUN7(&VAR9, &VAR8, "",
		    VAR2->VAR47->VAR48);
#endif
#ifdef VAR49
	

	if (VAR18.VAR50) {


 		char **VAR16;
 
 		VAR16 = FUN17();
		FUN4(VAR16, &VAR9, &VAR8);
		FUN18(VAR16);

		VAR16 = FUN19();
		FUN4(VAR16, &VAR9, &VAR8);
		FUN18(VAR16);
	}
#endif 

	if (VAR51 != NULL)
		FUN7(&VAR9, &VAR8, VAR52,
		    VAR51);

	
	if (VAR18.VAR53 && !VAR18.VAR19) {
		snprintf(VAR6, sizeof VAR6, "",
		    strcmp(VAR12->VAR25, "") ? VAR12->VAR25 : "");
		FUN16(&VAR9, &VAR8, VAR6);
	}
	if (VAR54) {
		
		fprintf(VAR55, "");
		for (VAR7 = 0; VAR9[VAR7]; VAR7++)
			fprintf(VAR55, "", VAR9[VAR7]);
	}
	return VAR9;
}