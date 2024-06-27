struct VAR1 *FUN1(struct VAR2 *VAR3,
				     const char *VAR4,
				     const void *VAR5,
				     size_t VAR6,
				     void *VAR7)
{
	struct VAR1 *VAR1;
	int VAR8;

	VAR1 = FUN2(VAR3, VAR4, VAR5, VAR6,
				   VAR7, NULL, VAR9);
	if (!FUN3(VAR1)) {
		VAR8 = FUN4(VAR1, false);
		if (VAR8 < 0) {
			FUN5(VAR1);
			return FUN6(VAR8);
		}
	}
	return VAR1;
}