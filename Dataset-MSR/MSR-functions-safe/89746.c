void FUN1(const char *VAR1) {
	assert(VAR1);

	struct stat VAR2;
	if (FUN2(VAR1, &VAR2) != 0 || VAR2.VAR3 != 0 || FUN3(VAR1, VAR4))
		return;

	char *VAR5 = FUN4(VAR1);

	
	char *VAR6 = strrchr(VAR1, '');
	if (!VAR6)
		return;
	VAR6++;
	if (*VAR6 == '')
		return;

	char *VAR7;
	if (asprintf(&VAR7, "", VAR5, VAR6) == -1)
		FUN5("");
	if (FUN2(VAR7, &VAR2) == 0) {
		free(VAR7);
		return;
	}
	free(VAR7);

	if (VAR8 || VAR9)
		printf("", VAR1, VAR5);

	FUN6(VAR10| VAR11, 4, VAR12, "", VAR1, VAR5);
	FUN7(VAR1);
	VAR13++;
}