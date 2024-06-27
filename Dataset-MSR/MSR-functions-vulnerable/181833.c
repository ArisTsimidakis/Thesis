FUN1(int VAR1, u_int32_t VAR2, void *VAR3)
{
	char *VAR4;
	int VAR5;
	int VAR6, VAR7 = 0, VAR8 = 0;
	struct VAR9 *VAR10 = NULL;

	VAR4 = FUN2(NULL);
	VAR5 = FUN3();
	FUN4("", VAR4, VAR5);

	
	if (strcmp(VAR4, "") == 0) {
		struct VAR11 *VAR12;
		struct Forward VAR13;

		VAR12 = VAR14->VAR12;
		if (VAR12 == NULL || !VAR14->VAR15)
			FUN5("");
		memset(&VAR13, 0, sizeof(VAR13));
		VAR13.VAR16 = FUN2(NULL);
		VAR13.VAR17 = (VAR18)FUN6();
		FUN4("",
		    VAR13.VAR16, VAR13.VAR17);

		
		if ((VAR19.VAR20 & VAR21) == 0 ||
		    VAR22 || VAR19.VAR23 ||
		    (!VAR5 && VAR13.VAR17 == 0) ||
		    (VAR13.VAR17 != 0 &&
		     !FUN7(VAR13.VAR17, VAR12->VAR24))) {
			VAR7 = 0;
			FUN8("");
		} else {
			
			VAR7 = FUN9(&VAR13,
			    &VAR8, &VAR19.VAR25);
		}
		free(VAR13.VAR16);
		if ((VAR10 = FUN10()) == NULL)
			FUN5("", VAR26);
		if (VAR8 != 0 &&
		    (VAR6 = FUN11(VAR10, VAR8)) != 0)
			FUN5("", VAR26, FUN12(VAR6));
	} else if (strcmp(VAR4, "") == 0) {
		struct Forward VAR13;

		memset(&VAR13, 0, sizeof(VAR13));
		VAR13.VAR16 = FUN2(NULL);
		VAR13.VAR17 = (VAR18)FUN6();
		FUN4("", VAR26,
		    VAR13.VAR16, VAR13.VAR17);

		VAR7 = FUN13(&VAR13);
		free(VAR13.VAR16);
	} else if (strcmp(VAR4, "") == 0) {
		struct Forward VAR13;

		memset(&VAR13, 0, sizeof(VAR13));
		VAR13.VAR27 = FUN2(NULL);
		FUN4("",
		    VAR13.VAR27);
 
 		
 		if ((VAR19.VAR28 & VAR21) == 0

		    || VAR22 || VAR19.VAR23) {




 			VAR7 = 0;
 			FUN8("");
 		} else {
			
			VAR7 = FUN9(
			    &VAR13, NULL, &VAR19.VAR25);
		}
		free(VAR13.VAR27);
	} else if (strcmp(VAR4, "") == 0) {
		struct Forward VAR13;

		memset(&VAR13, 0, sizeof(VAR13));
		VAR13.VAR27 = FUN2(NULL);
		FUN4("", VAR26,
		    VAR13.VAR27);

		VAR7 = FUN13(&VAR13);
		free(VAR13.VAR27);
	} else if (strcmp(VAR4, "") == 0) {
		VAR29 = 1;
		VAR7 = 1;
	} else if (strcmp(VAR4, "") == 0) {
		VAR7 = FUN14(&VAR10);
	}
	if (VAR5) {
		FUN15(VAR7 ?
		    VAR30 : VAR31);
		if (VAR7 && VAR10 != NULL)
			FUN16(VAR32, FUN17(VAR10),
			    FUN18(VAR10));
		FUN19();
		FUN20();
	}
	free(VAR4);
	FUN21(VAR10);
	return 0;
}