void FUN1(struct VAR1 *VAR2)
{
	int VAR3;
	char VAR4[VAR5], VAR6[VAR5], *VAR7;

	
	VAR7 = FUN2(VAR2->VAR8.VAR9);
	if (VAR7) {
		free(VAR7);
		return;
	}

	VAR3 = snprintf(VAR4, VAR5, VAR10 "");
	if (VAR3 < 0 || VAR3 >= VAR5) {
		FUN3("");
		return;
	}

	if (!FUN4(VAR4)) {
		FUN5("", VAR4);
		return;
	}

	VAR3 = snprintf(VAR6, VAR5, "", VAR2->VAR8.VAR9, "");
	if (VAR3 < 0 || VAR3 >= VAR5) {
		FUN3("");
		return;
	}

	if (!FUN4(VAR6)) {
		VAR11 * VAR12 = fopen(VAR6, "");
		if (!VAR12) {
			FUN6("", VAR6);
			return;
		}
 		fclose(VAR12);
 	}
 

	VAR3 = FUN7(VAR4, VAR6, "", VAR13, NULL);


 	if (VAR3 < 0)
 		FUN6("");
 	FUN5("", VAR4);
}