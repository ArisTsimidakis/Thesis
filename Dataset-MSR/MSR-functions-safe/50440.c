FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
		   struct VAR5 *VAR6,
		   struct VAR3 *VAR7, int VAR8,
		   int *VAR9)
{
	int VAR10;
	struct VAR5 *VAR11;

	if (!VAR2->VAR12.VAR13) {
		*VAR9 = 0;
		return 0;
	}

	VAR11 = VAR7->VAR14[VAR8];
	if (!VAR11) {
		

		VAR11 = FUN2(VAR6->VAR15, VAR7);
		if (!VAR11)
			return -VAR16;

		VAR7->VAR14[VAR8] = VAR11;
	}

	VAR10 = FUN3(VAR2, VAR4, VAR6,
			    VAR7, VAR11);

	if (VAR10)
		*VAR9 = 0;

	return VAR10;
}