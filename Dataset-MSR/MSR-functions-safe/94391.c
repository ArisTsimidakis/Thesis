static int FUN1(char *VAR1, int VAR2, char *VAR3, int VAR4)
{
	const int VAR5 = '' - '' + 1;
	char *VAR6 = VAR3 + strlen(VAR1);
	char *VAR7 = VAR3 + VAR4;
	char *VAR8;
	int VAR9;

	VAR8 = VAR7 - 1;
	*VAR8 = '';
	VAR9 = VAR5;
	do {
		if (VAR8 == VAR6)
			return -VAR10;
		*--VAR8 = '' + (VAR2 % VAR9);
		VAR2 = (VAR2 / VAR9) - 1;
	} while (VAR2 >= 0);

	memmove(VAR6, VAR8, VAR7 - VAR8);
	memcpy(VAR3, VAR1, strlen(VAR1));

	return 0;
}