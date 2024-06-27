static void FUN1(struct VAR1 *VAR2,

				  struct VAR3 **VAR4)

{

	int VAR5, VAR6;

	size_t VAR7 = 0;

	const char VAR8 *VAR9;

	char *VAR10;




























 

	VAR9 = (const char VAR8 *)VAR11->VAR12->VAR13;




















































































 

	FUN2(*VAR4, "", VAR2->VAR14.argc);


















 

	

	VAR10 = FUN3(VAR15 + 1, VAR16);

	if (!VAR10) {

		FUN4("");

		return;

	}


 

	for (VAR5 = 0; VAR5 < VAR2->VAR14.argc; VAR5++) {

		VAR6 = FUN5(VAR2, VAR4, VAR5,

						  &VAR7, VAR9, VAR10);

		if (VAR6 <= 0)

			break;

		VAR9 += VAR6;

	}

	FUN6(VAR10);




 }