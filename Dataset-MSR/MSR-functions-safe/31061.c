static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	int VAR7;

	VAR6 = FUN2(VAR2, VAR8);
	if (!VAR6)
		return -VAR9;

	VAR7 = VAR4->VAR10->FUN3(VAR4, VAR11, VAR2);
	if (VAR7) {
		FUN4(VAR2, VAR6);
		return (VAR7 == -VAR9) ? VAR7 : 0;
	}

	FUN5(VAR2, VAR6);

	return 0;
}