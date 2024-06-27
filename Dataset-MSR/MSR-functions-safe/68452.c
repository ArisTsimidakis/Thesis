static char **FUN1(void)
{
	int VAR1;
	VAR2 *VAR3;
	int VAR4, VAR5;
	char **VAR6;
	struct VAR7 *VAR8;

	VAR1 = FUN2(0, NULL);

	if (VAR1 == -1) {
		fprintf(VAR9, "", strerror(VAR10));
		return NULL;
	}
	if (VAR1 == 0)
		return NULL;

	VAR3 = (VAR2 *)malloc(sizeof(VAR2)*VAR1);

	if (VAR3 == NULL) {
		fprintf(VAR9, "");
		return NULL;
	}

	VAR4 = FUN2(VAR1, VAR3);

	if (VAR4 < 0) {
		free(VAR3);
		fprintf(VAR9, "", strerror(VAR10));
		return NULL;
	}

	VAR6 = (char **)malloc(sizeof(char *)*(VAR1+1));

	if (VAR6 == NULL) {
		free(VAR3);
		fprintf(VAR9, "");
		return NULL;
	}

	memset(VAR6, 0, sizeof(char *)*(VAR1+1));

	for (VAR5=0; VAR5<VAR1; VAR5++ ) {
		VAR8 = FUN3(VAR3[VAR5]);

		if (VAR8 == NULL) {
			fprintf(VAR9, "");
			free(VAR3);
			FUN4(VAR6);
			return NULL;
		}

		VAR6[VAR5] = strdup(VAR8->VAR11);

		if (VAR6[VAR5] == NULL) {
			fprintf(VAR9, "", VAR8->VAR11);
			free(VAR3);
			FUN4(VAR6);
			return NULL;
		}
	}

	free(VAR3);

	return VAR6;
}