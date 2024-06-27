static void FUN1(VAR1 *VAR2, VAR3 *VAR4,
				const char *VAR5)
{
	VAR6 *VAR7;
	VAR3 *VAR8 = NULL;
	const char *VAR9;
	char *VAR10;
	char VAR11[VAR12];
        int VAR13;

	FUN2(VAR4 != NULL || VAR5 != NULL);

	FUN3("", 2, VAR2, VAR4);

	if (VAR2->VAR14->VAR15)
		return;

	if (VAR4 != NULL) {
		VAR8 = VAR4 == NULL ? NULL :
			(FUN4(VAR4) ? VAR2->VAR14->VAR16 :
			 VAR2->VAR14->VAR17);
 		VAR13 = VAR2->VAR14->VAR18 != NULL ?
 			VAR2->VAR14->VAR19 : VAR2->VAR14->VAR13;
 		VAR7 = VAR2->VAR14->VAR20 ?

			FUN5(VAR4, VAR13, VAR8, VAR2->VAR14->VAR21, VAR2->VAR14->VAR22,


 VAR2->VAR14->VAR23, VAR2->VAR14->VAR24, VAR2->VAR14->VAR25) :
 			FUN6(VAR4, VAR13, VAR8);
 	} else {
		VAR7 = FUN7(VAR5);
	}

	if (VAR7 == NULL) {
		
		VAR9 = FUN8(VAR26);
		VAR10 = NULL;
		if (VAR26 == VAR27) {
			if (VAR8 != NULL) {
				
				FUN9(VAR8, VAR11);
				VAR10 = FUN10(VAR9, "", VAR11, NULL);
			}
			VAR2->VAR28 = VAR29;
		}
		if (VAR2->VAR14->VAR20 && VAR26 == VAR30)
			VAR2->VAR28 = VAR29;

		VAR2->VAR31 = VAR29;
		FUN11(VAR2, VAR10 ? VAR10 : VAR9);
		FUN12(VAR10);
	} else {
		VAR2->VAR7 = FUN13(VAR7, 0);
#ifdef VAR32
		if (VAR2->VAR14->VAR20)
			FUN14(VAR2, VAR7);
		else
#endif
		VAR2->VAR33 =
			FUN15(VAR7, VAR34 | VAR35,
				    (VAR36)
				    VAR37,
				    VAR2);
	}
}