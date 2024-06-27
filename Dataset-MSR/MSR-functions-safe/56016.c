static void FUN1(struct VAR1 *VAR2)
{
	if (!VAR2->VAR3) {
		if (VAR2->VAR4.VAR5 & VAR6)
			FUN2();
	}

	FUN3(VAR2);

	if (VAR2->VAR7)
		VAR2->FUN4(VAR2);

	if (VAR2->VAR8)
		FUN5(VAR2->VAR8);

	if (VAR2->VAR9) {
		FUN6(VAR2);
		FUN7(VAR2->VAR9->VAR10);
	}

	FUN8(&VAR2->VAR11, VAR12);
}