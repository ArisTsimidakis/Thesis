static char **FUN1(const char *VAR1, int *VAR2)
{
	int VAR3;
	const char *VAR4 = VAR1;
	char **VAR5 = NULL;

	if (VAR4 && FUN2(VAR4, "", 2) == 0) {
		*VAR2 = VAR6;
		VAR4 += 2;
	}
	if (!VAR4 || !*VAR4) {
		fprintf(VAR7, "");
		goto VAR8;
	}
	for (VAR3 = 1; VAR4 && (VAR4 = strchr(VAR4, '')); VAR3++, VAR4++);

	VAR5 = xcalloc(VAR3 + 1, sizeof(char *));
	VAR4 = *VAR2 & VAR6 ? VAR1 + 2 : VAR1;
	VAR3 = 0;

	while(VAR4) {
		const char *VAR9 = VAR4;
		VAR4 = strchr(VAR4, '');
		VAR5[VAR3++] = VAR4 ? FUN3(VAR9, VAR4 - VAR9) : xstrdup(VAR9);
		if (VAR4)
			VAR4++;
	}
	VAR5[VAR3] = NULL;
	return VAR5;
VAR8:
	*VAR2 = 0;
	free(VAR5);
	FUN4(VAR10);
}