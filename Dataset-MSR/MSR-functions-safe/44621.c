void FUN1(void)
{
	
	VAR1 *VAR2 = fopen("", "");
	char *VAR3 = NULL;
	size_t VAR4 = 0;

	if (!VAR2) {
		FUN2("");
		FUN3("");
		return;
	}

	while (FUN4(&VAR3, &VAR4, VAR2) != -1) {
		char *VAR5, *VAR6;
		VAR5 = FUN5(VAR3, 4);
		if (!VAR5)
			continue;
		VAR6 = FUN5(VAR5, 2);
		if (!VAR6)
			continue;
		FUN6(VAR6);
		if (!strstr(VAR6, ""))
			continue;
		FUN6(VAR5);
		if (FUN7(NULL, VAR5, NULL, VAR7, NULL)) {
			FUN2("", VAR5);
			FUN3("");
		}
	}
	fclose(VAR2);
	free(VAR3);
}