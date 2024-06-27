static void FUN1(struct VAR1 *VAR2,
		struct VAR3 *VAR4,
		enum iucv_tx_notify VAR5)
{
	struct VAR6 *VAR7;

	if (FUN2(&VAR4->VAR8))
		goto VAR9;
	VAR7 = FUN3(&VAR4->VAR8);
	while (VAR7) {
		FUN4(VAR2->VAR10, 5, "", VAR5);
		FUN4(VAR2->VAR10, 5, "", (long) VAR7);
		if (VAR7->VAR11 == VAR12) {
			if (VAR7->VAR13) {
				struct VAR14 *VAR15 = FUN5(VAR7->VAR13);
				VAR15->FUN6(VAR7, VAR5);
			}
		}
		if (FUN7(&VAR4->VAR8, VAR7))
			VAR7 = NULL;
		else
			VAR7 = FUN8(&VAR4->VAR8, VAR7);
	}
VAR9:
	return;
}