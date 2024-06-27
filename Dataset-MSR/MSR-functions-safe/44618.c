int FUN1(const char *VAR1)
{
	char VAR2[VAR3];
	char VAR4[VAR3];
	struct stat VAR5;
	int VAR6, VAR7;

	if (VAR1 == NULL || strlen(VAR1) == 0)
		return -2;

	if (!FUN2(VAR1, VAR2))
		return -2;

	if (FUN3(VAR2, VAR8))
		return -1;

	if (FUN4(VAR2, &VAR5))
		return -1;

	if (!FUN5(VAR5.VAR9))
		return -2;

	VAR6 = snprintf(VAR4, VAR3, "", VAR2);
	if (VAR6 >= VAR3)
		return -1;

	VAR7 = open(VAR4, VAR10 | VAR11, VAR12|VAR13);
	if (VAR7 < 0)
		return VAR7;
	(void)unlink(VAR4);
	return VAR7;
}