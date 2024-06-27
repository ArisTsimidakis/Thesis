FUN1 (VAR1 * VAR2, const char *VAR3,

			FriBidiParType VAR4, int VAR5, int VAR6)

{

	VAR1 *VAR7 = NULL;	

	VAR1 *VAR8 = NULL;	



	

	VAR7 = FUN2 (FUN3 (VAR2),

				    FUN4 (VAR2),

				    VAR3, "");

	if (VAR7 == NULL)

		return NULL;



	if (strcmp (VAR3, "") == 0)

		

		VAR8 = FUN5 (VAR2,

				       FUN6 (VAR7),

				       VAR4, VAR5, VAR6);

	else

	{

		



		VAR1 *VAR9 = FUN7 (VAR7, VAR4, VAR5, VAR6);



		if (VAR9)

		{

			VAR8 = FUN8 (VAR10

						   (VAR9),

						   FUN6 (VAR9),

						   VAR3, "");

			FUN9 (VAR9);

		}

	}



	FUN9 (VAR7);



	return VAR8;

}