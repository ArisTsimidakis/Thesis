static int FUN1(struct VAR1 *VAR2, const char *VAR3)
{
	struct VAR4 *VAR5;
	char *VAR6;
	const char *VAR7;
	int VAR8, VAR9;

	VAR8 = strlen(VAR3) + 1;
	if (VAR8 > VAR10)
		return -VAR11;

	VAR6 = FUN2(VAR3, VAR8, VAR12);
	if (!VAR6)
		return -VAR13;

	VAR5 = FUN3(VAR2);
	VAR7 = NULL;

	FUN4();

	VAR7 = VAR5->VAR14->VAR15 ? VAR5->VAR14->VAR3 : NULL;
	VAR9 = FUN5(VAR5->VAR14, VAR6);
	if (VAR9) {
		FUN6(VAR6);
		FUN7();
		return VAR9;
	}
	VAR5->VAR14->VAR15 = true;

	FUN7();

	FUN6(VAR7);

	return 0;
}