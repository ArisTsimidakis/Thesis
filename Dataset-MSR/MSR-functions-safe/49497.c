int FUN1(struct VAR1 *VAR2, int VAR3, VAR4 *VAR5, int VAR6, int VAR7)
{
	struct VAR8 *VAR9;
	struct VAR10 *VAR11;
	struct VAR12 *VAR13;
	int VAR14 = 0;

	if (!VAR2)
		return -VAR15;

	if (FUN2(&VAR2->VAR16))
		return -VAR17;

	if (!VAR2->VAR18) {
		VAR14 = -VAR15;
		goto VAR19;
	}
	VAR9 = VAR2->VAR9 + VAR3;
	VAR11 = VAR2->VAR18;

	if (!VAR6) {
		FUN3("");
		VAR14 = -1;
		goto VAR19;
	}

	
	if (!FUN4(&VAR2->VAR20))
		FUN5(VAR2, VAR3, VAR5, VAR6);

	VAR13 = FUN6(VAR9, VAR5);

	if (!VAR13) {
		VAR14 = -1;
		goto VAR19;
	}

	if (VAR11 && VAR11->VAR21 && FUN7(VAR2, VAR13)) {
		VAR14 = VAR11->FUN8(VAR2, VAR13, VAR5, VAR6);
		if (VAR14 < 0)
			goto VAR19;
	}

	VAR14 = FUN9(VAR2, VAR3, VAR5, VAR6, VAR7);

VAR19:
	FUN10(&VAR2->VAR16);
	return VAR14;
}