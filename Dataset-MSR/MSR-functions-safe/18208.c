VAR1 *FUN1(const char *VAR2)
{
	VAR3 *VAR4;

	FUN2(VAR2 != NULL, NULL);
	if (*VAR2 == '') return NULL;

	for (VAR4 = VAR5; VAR4 != NULL; VAR4 = VAR4->VAR6) {
		VAR1 *VAR7 = VAR4->VAR8;

		if (VAR7->VAR9->VAR2 != NULL &&
		    FUN3(VAR7->VAR9->VAR2, VAR2) == 0)
			return VAR7;
	}

	return NULL;
}