static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
	struct VAR4 *VAR5 = VAR3;
	struct VAR6 *VAR7 = &VAR2->VAR6;
	s64 VAR8 = 0, VAR9 = -1;

	if (!VAR2->VAR10) {
		VAR8 = VAR11;
	} else {
		struct VAR6 *VAR12 = &VAR2->VAR10->VAR6;

		VAR8 = FUN2(VAR2, VAR5);
		VAR9 = VAR12->VAR13;

		
		if (VAR8 == VAR11)
			VAR8 = VAR9;
		else if (VAR9 != VAR11 && VAR8 > VAR9)
			return -VAR14;
	}
	VAR7->VAR13 = VAR8;

	return 0;
}