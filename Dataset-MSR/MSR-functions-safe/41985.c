struct VAR1 *FUN1(struct VAR2 *VAR3,
			const char *VAR4,
			const char *VAR5)
{
	struct VAR1 *VAR1;
	size_t VAR6 = 0;
	int VAR7;

	if (VAR5)
		VAR6 = strlen(VAR5);
	VAR1 = FUN2(VAR3, VAR4, VAR5, VAR6,
				   NULL, NULL, VAR8);
	if (!FUN3(VAR1)) {
		VAR7 = FUN4(VAR1, false);
		if (VAR7 < 0) {
			FUN5(VAR1);
			return FUN6(VAR7);
		}
	}
	return VAR1;
}