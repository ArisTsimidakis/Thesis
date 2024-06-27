static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = &VAR5.VAR6;
	struct VAR7 *VAR8 = NULL;
	struct VAR1 *VAR9;
	int VAR10;

	if (VAR2->VAR11 == VAR4)
		return 0;

	VAR8 = FUN2(VAR4, VAR2->VAR12);
	if (FUN3(VAR8))
		return 0;

	if (FUN4(VAR8, VAR2->VAR13, VAR2->VAR14))
		return 0;

	VAR8->VAR15.VAR16++;
	FUN5(&VAR17);

	VAR9 = FUN6(VAR8, VAR2->VAR13, VAR2->VAR14);

	FUN7(&VAR17);
	VAR10 = -VAR18;
	if (!VAR9)
		goto VAR19;

	VAR10 = 0;
	if (FUN4(VAR8, VAR2->VAR13, VAR2->VAR14)) {
		FUN8(VAR9);
		goto VAR19;
	}

	VAR10 = FUN9(VAR8, VAR9);
	if (VAR10)
		FUN8(VAR9);
VAR19:
	FUN10(&VAR8->VAR15);
	return VAR10;
}