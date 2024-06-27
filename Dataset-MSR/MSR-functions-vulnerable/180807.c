static bool FUN1(const char *VAR1, char **VAR2)

{

	char *VAR3;

	VAR4 *VAR5 = NULL;

	VAR6 *VAR7 = NULL;

	VAR8 *VAR9 = NULL; 

	bool VAR10 = true;



	VAR3 = strchr(VAR1, '');

	if (!VAR3) {

		if (asprintf(VAR2, "") == -1)

			*VAR2 = NULL;

		VAR10 = false;

		goto VAR11;

	}

	VAR3 += 1; 



	VAR5 = FUN2(VAR3, &VAR9);

	if (!VAR5) {

		FUN3("");

		goto VAR11;

	}



	VAR7 = FUN4(VAR5, VAR9->VAR3, VAR12);

	if (!VAR7) {

		if (asprintf(VAR2, "") == -1)

			*VAR2 = NULL;

		VAR10 = false;

		goto VAR13;

	}



	if (FUN5(VAR5, VAR9->VAR3, VAR14|VAR15) == -1) {

		if (asprintf(VAR2, "") == -1)

			*VAR2 = NULL;

		VAR10 = false;

		goto VAR13;

	}



	goto VAR11;



VAR13:

	FUN6(VAR5, VAR3);



VAR11:

	if (VAR7)

		FUN7(VAR7);

	FUN8(&VAR9);



	return VAR10;

}