void FUN1(struct VAR1 *VAR2,
			      struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	int VAR7;

	if (FUN2(&VAR4->VAR8) ||
	    VAR4->VAR9 != VAR10)
		return;

	FUN3(&VAR4->VAR11);
	if (FUN2(&VAR4->VAR8)) {
		FUN4(&VAR4->VAR11);
		return;
	}

	if (VAR4->VAR9 != VAR10) {
		FUN4(&VAR4->VAR11);
		return;
	}

	VAR6 = VAR4->VAR12;
	VAR4->VAR12 = NULL;
	FUN4(&VAR4->VAR11);

	if (VAR4->VAR13 &&
	    FUN5(&VAR4->VAR14) > 0) {
		VAR7 = FUN6(VAR2, VAR4->VAR15->VAR16,
					    VAR4->VAR17.VAR18);
		FUN7(VAR7);
		VAR4->VAR13 = 0;
	}

	if (VAR6) {
		FUN8(VAR6->VAR19 > 0);
		FUN9(VAR4, VAR6);
	}
}