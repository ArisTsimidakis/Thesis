FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	struct VAR8 *VAR9;

	VAR5 = &VAR2->VAR10[VAR3 & VAR2->and];
	FUN2(VAR7, VAR5) {
		VAR9 = FUN3(VAR7, struct VAR8, VAR11);
		if (VAR9->VAR12 == VAR3)
			return VAR9;
	}

	return NULL;
}