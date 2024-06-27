void FUN1(VAR1 *VAR2, unsigned int VAR3)
{
	VAR4 *VAR5;

	if (VAR2 == NULL || VAR3 >= VAR6) {
		return;
	}

	VAR5 = VAR2->VAR7[VAR3];
	if (VAR5 == (VAR4 *) 1 ||
	    VAR5 == (VAR4 *) 2 ||
	    VAR5 == (VAR4 *) 3) {
		VAR2->VAR7[VAR3] = NULL;
		return;
	}

	while (VAR5 != NULL) {
		VAR4 *VAR8 = VAR5->VAR9;
		free(VAR5);
		VAR5 = VAR8;
	}
	VAR2->VAR7[VAR3] = NULL;
}