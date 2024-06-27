struct VAR1 *FUN1(struct VAR2 *VAR2,
		struct VAR1 *VAR3, pgoff_t VAR4, bool VAR5)
{
	struct VAR6 *VAR7 = VAR2->VAR8;
	struct VAR1 *VAR1;
	struct dnode_of_data VAR9;
	int VAR10;

	VAR1 = FUN2(VAR7, VAR4, true);
	if (!VAR1) {
		
		FUN3(VAR3, 1);
		return FUN4(-VAR11);
	}

	FUN5(&VAR9, VAR2, VAR3, NULL, 0);
	VAR10 = FUN6(&VAR9, VAR4);
	if (VAR10) {
		FUN3(VAR1, 1);
		return FUN4(VAR10);
	}
	if (!VAR3)
		FUN7(&VAR9);

	if (FUN8(VAR1))
		goto VAR12;

	if (VAR9.VAR13 == VAR14) {
		FUN9(VAR1, 0, VAR15);
		if (!FUN8(VAR1))
			FUN10(VAR1);
	} else {
		FUN3(VAR1, 1);

		
		FUN11(FUN12(VAR2), VAR3);
		VAR1 = FUN13(VAR2, VAR4, true);
		if (FUN14(VAR1))
			return VAR1;
	}
VAR12:
	if (VAR5 && FUN15(VAR2) <
				((VAR16)(VAR4 + 1) << VAR17))
		FUN16(VAR2, ((VAR16)(VAR4 + 1) << VAR17));
	return VAR1;
}