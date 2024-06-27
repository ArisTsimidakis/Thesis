static int FUN1(const struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct flowi VAR5 = {
		.VAR6 = 0,
		.VAR7 = {
			.VAR8 = {
				.VAR9 = *VAR2,
				.VAR10 = { .VAR11 = {0, 0, 0, 0} }, } },
	};

	VAR4 = (struct VAR3 *)FUN2(&VAR12, NULL, &VAR5);
	if (VAR4 && VAR4->VAR13 && (VAR4->VAR13->VAR14 & VAR15))
			return 1;

	return 0;
}