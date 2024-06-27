static void VAR1 FUN1(void)
{
	char *VAR2 = VAR3;
	char *VAR4;

	while (true) {
		VAR4 = FUN2(&VAR2, "");

		if (!VAR4)
			break;

		if (*VAR4)
			FUN3(&VAR5, VAR4);

		
		if (VAR2)
			*(VAR2 - 1) = '';
	}
}