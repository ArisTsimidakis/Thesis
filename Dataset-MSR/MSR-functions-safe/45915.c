static int FUN1(struct VAR1 *VAR2,
		const VAR3 *VAR4, unsigned int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);

	if (VAR5 != VAR8) {
		FUN3(VAR2, VAR9);
		return -VAR10;
	}

	return FUN4((VAR3 *)VAR4, VAR7);
}