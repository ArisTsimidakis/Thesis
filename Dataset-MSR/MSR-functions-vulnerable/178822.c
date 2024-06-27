char *FUN1(char *VAR1, int VAR2, char *VAR3, int VAR4, char *key VAR5)
 {

	char VAR6[4096];

    char VAR7[4096];

	char *VAR8 = VAR6, *VAR9 = VAR7, *VAR10, *VAR11;

    int VAR12;



	if (VAR2 > sizeof(VAR6)-2) {

		VAR8 = FUN2(VAR1, VAR2);

	} else {

		memcpy(VAR8, VAR1, VAR2);

		VAR8[VAR2] = 0;

	}










 	
 	VAR2 = FUN3(VAR8, VAR2);

    FUN4(VAR8);

    VAR2 = strlen(VAR8);




 	
 	if (FUN5(VAR13)) {
 		if (FUN6(FUN5(VAR13), VAR8, VAR2+1)) {
 VAR14:

			if (VAR8 != VAR6) {

				FUN7(VAR8);

			}


 			return FUN2(VAR3, VAR4);
 		}
 	} else if (FUN5(VAR15)) {
		if (!FUN6(FUN5(VAR15), VAR8, VAR2+1)) {
			goto VAR14;
 		}
 	}
 	

	if (strlen(VAR3) <= sizeof(VAR7)-2) {

		memcpy(VAR9, VAR3, VAR4);

		VAR9[VAR4] = 0;

	} else {

		VAR9 = FUN2(VAR3, VAR4);

	}


 	
 	VAR4 = FUN3(VAR9, VAR4);
 	
 	VAR10 = FUN8(VAR9, VAR4, VAR8, VAR2, key VAR16);
 	VAR11 = FUN9(VAR10, strlen(VAR10), &VAR12);
 	FUN7(VAR10);

    if (VAR8 != VAR6) {

		FUN7(VAR8);

	}

    if (VAR9 != VAR7) {

		FUN7(VAR9);

	}




 	return VAR11;
 }