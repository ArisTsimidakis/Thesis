FUN1(const char *VAR1, const char *VAR2, const char *namespace, const char *VAR3)
{
	char *VAR4;

	if (VAR5) {
		fclose(VAR5);
		VAR5 = NULL;
	}

	if (!VAR1)
		return;
 
 	VAR4 = FUN2(VAR1, VAR2, namespace, VAR3);
 

	VAR5 = fopen(VAR4, "");


 	if (VAR5) {
 		int VAR6 = FUN3(VAR5);
 		FUN4(VAR6, VAR7, VAR8 | FUN4(VAR6, VAR9));
		FUN4(VAR6, VAR10, VAR11 | FUN4(VAR6, VAR12));
	}

	FUN5(VAR4);
}