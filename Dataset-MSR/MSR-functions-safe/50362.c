struct VAR1 *FUN1(struct VAR2 *VAR2, int VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR7 = NULL;
	struct VAR1 *VAR8;
	int VAR9;

	VAR5 = FUN2(VAR2->VAR10);
	if (!(VAR5->VAR11 & VAR12))
		return NULL;
	VAR9 = FUN3(VAR2, &VAR7, 0);
	if (VAR9 < 0) {
		if (VAR9 != -VAR13)
			FUN4(VAR9);
		return FUN5(VAR9);
	}

	VAR8 = FUN6(VAR2, VAR3, VAR7);

	FUN7(VAR2, 0);
	FUN8(VAR7);
	return VAR8;
}