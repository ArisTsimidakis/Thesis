static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			       struct VAR5 *VAR6)
{
	struct VAR7 *VAR8, *VAR9;
	struct list_head VAR10;
	struct ath_tx_status VAR11;

	memset(&VAR11, 0, sizeof(VAR11));
	VAR11.VAR12 = VAR13;
	FUN2(&VAR10);

	while (!FUN3(VAR6)) {
		VAR8 = FUN4(VAR6, struct VAR7, VAR6);

		if (VAR8->VAR14.VAR15) {
			FUN5(&VAR8->VAR6);

			FUN6(VAR2, VAR8);
			continue;
		}

		VAR9 = VAR8->VAR16;
		FUN7(&VAR10, VAR6, &VAR9->VAR6);
		FUN8(VAR2, VAR4, &VAR11, VAR8, &VAR10);
	}
}