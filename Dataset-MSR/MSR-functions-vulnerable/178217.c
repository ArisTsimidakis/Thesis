static void FUN1(VAR1, int VAR2) 
{
	VAR3 *VAR4;
	int VAR5 = 0;

	char *VAR6 = NULL;
	int VAR7 = 0;
 
        char *VAR8 = NULL;
        int VAR9 = 0;

       


        VAR10 *VAR11;

       


        if (FUN2(FUN3() VAR12, (VAR2 ? "": ""), &VAR6, &VAR7, &VAR8, &VAR9) == VAR13) {
                VAR14;
        }

	if (VAR6 != NULL) {
		
		if (VAR7 == 0) {
			VAR11 = FUN4(VAR15);
			VAR5 = 1;
		} else if (FUN5(VAR6, "") == 0) {
			VAR11 = "";
		} else if (FUN5(VAR6, "") == 0) {
			VAR11 = "";
		} else if (FUN5(VAR6, "") == 0) {
			VAR11 = "";
		} else {
			FUN6(NULL VAR12, VAR16, ""%VAR17\"", VAR6);
			VAR14;
		}
	} else {
		VAR11 = FUN4(VAR15);
	}

	if (VAR2 && VAR8 == NULL){
		VAR8 = "";
	}

	VAR4 = FUN7(1, sizeof(VAR3));
	VAR4->VAR4 = FUN8((VAR5 ? NULL : VAR11),
                                         &VAR18, VAR8);

	VAR4->VAR19 = VAR11;
	VAR4->VAR20 = 1;
	VAR4->VAR21 = NULL;
	VAR4->VAR22 = 0;

	FUN9(VAR4->VAR4, VAR4);

	FUN10(VAR23, VAR4,VAR24);
	VAR4->VAR25 = FUN11(VAR23);
 }