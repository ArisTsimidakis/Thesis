static int FUN1(struct VAR1 *VAR2,
				       struct VAR3 *VAR4,
				       void *VAR5, int VAR6)
{
	struct VAR7 *VAR8 = VAR2->VAR9;
	struct VAR10 *VAR11[VAR12 + 1];
	struct VAR13 *VAR14;
	int VAR15, VAR16;

	VAR15 = FUN2(VAR11, VAR12, VAR5, VAR6,
			VAR17, NULL);
	if (VAR15)
		return VAR15;

	if (!VAR11[VAR18])
		return -VAR19;

	switch (FUN3(VAR11[VAR18])) {
	case VAR20:
		if (!VAR11[VAR21])
			return -VAR19;
		VAR16 = FUN3(VAR11[VAR21]);
		return FUN4(VAR8, VAR16);
	case VAR22:
		VAR14 = FUN5(VAR2->VAR23,
						FUN6(sizeof(VAR24)));
		if (!VAR14)
			return -VAR25;
		if (FUN7(VAR14, VAR21, VAR8->VAR16))
			goto VAR26;
		return FUN8(VAR14);
	case VAR27:
		FUN9(VAR2);
		return 0;
	case VAR28:
		FUN10(VAR2);
		return 0;
	default:
		return -VAR29;
	}

 VAR26:
	FUN11(VAR14);
	return -VAR30;
}