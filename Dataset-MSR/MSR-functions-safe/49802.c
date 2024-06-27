static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5;

	if (FUN2(FUN3(&VAR2->VAR6) == 0) ||
		((VAR2->VAR7 & VAR8) != 0) ||
		((VAR2->VAR7 & VAR9) != 0)) {
		FUN4(&VAR2->VAR10,
			VAR11 + FUN5(6 * VAR12));
	} else {
		VAR2->VAR13 = VAR14;
		if (FUN3(&VAR2->VAR15) ==
			FUN3(&VAR2->VAR6)) {
			FUN6(&VAR2->VAR6, 16);
		}
		FUN6(&VAR2->VAR15,
			FUN3(&VAR2->VAR6));
		if (FUN7(&VAR2->VAR6)) {
			FUN4(&VAR2->VAR10, VAR11 +
				FUN5(6 * VAR12));
			return;
		}
		FUN8(VAR16,
			VAR4->VAR17);
		FUN4(&VAR2->VAR10, VAR11 +
			FUN5(6 * VAR12));
	}
}