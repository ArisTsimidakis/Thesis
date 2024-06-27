static int FUN1(struct VAR1 *VAR2, u8 VAR3, int VAR4,
			struct VAR5 *VAR5)
{
	struct VAR6 *VAR7 = NULL;
	struct VAR8 *VAR9;

	FUN2(&VAR2->VAR10->VAR11);
	if (VAR4)
		VAR9 = VAR2->VAR12[VAR3];
	else
		VAR9 = VAR2->VAR13[VAR3];
	if (VAR9) {
		struct VAR14 *VAR15;

		FUN3(VAR15, &VAR9->VAR16) {
			VAR7 = FUN4(VAR15, struct VAR6, VAR17);
			if (VAR7->VAR5 == VAR5) {
				FUN5(VAR15);
				break;
			}
			VAR7 = NULL;
		}
	}
	FUN6(&VAR2->VAR10->VAR11);
	FUN7(VAR7);
	return VAR7 ? 0 : -VAR18;
}