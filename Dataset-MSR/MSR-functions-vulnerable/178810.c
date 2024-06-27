FUN1 (VAR1 * VAR2, VAR1 * VAR3, VAR1 * VAR4)




 {

	VAR1 *VAR5 = NULL;	

	FriBidiParType VAR6 = VAR7;	

	const char *VAR8 = "";	

	int VAR9 = 0; 

	int VAR10 = 1; 



	static char *VAR11[] =

	        { "", "", "", "", "", NULL };



        if (!FUN2 (VAR3, VAR4, "", VAR11,

					  &VAR5, &VAR6, &VAR8, &VAR9, &VAR10))

		return NULL;



	



	if (!(VAR6 == VAR7 ||

	      VAR6 == VAR12 || VAR6 == VAR13))

		return FUN3 (VAR14,

				     "",

				     VAR6);



	



	if (FUN4 (VAR5))

	        return FUN5 (VAR5, VAR6, VAR9, VAR10);

	else if (FUN6 (VAR5))

	        return FUN7 (VAR5, VAR8, VAR6, VAR9, VAR10);

	else

		return FUN3 (VAR15,

				     "",

				     VAR5->VAR16->VAR17);




















































































































 }