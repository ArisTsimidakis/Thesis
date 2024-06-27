static int FUN1(char **VAR1, int *VAR2)
{
	struct token VAR3;
	char *VAR4 = *VAR1;

	FUN2(VAR1, &VAR3, VAR5);

	if (VAR3.VAR6 != VAR7) {
		printf("", (int)(*VAR1 - VAR4), VAR4);
		return -VAR8;
	}

	*VAR2 = FUN3(VAR3.VAR9, NULL, 10);

	free(VAR3.VAR9);

	return 1;
}