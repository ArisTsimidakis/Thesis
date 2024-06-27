static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR1 *VAR5;
	struct VAR6 *VAR7;
	u32 VAR8;
	int VAR9 = -VAR10;

	if (!VAR4->VAR11[VAR12])
		return -VAR13;

	VAR8 = FUN2(VAR4->VAR11[VAR12]);

	VAR7 = FUN3(VAR8);
	if (!VAR7)
		return -VAR14;

	VAR5 = FUN4(VAR15, VAR16);
	if (!VAR5) {
		VAR9 = -VAR17;
		goto VAR18;
	}

	VAR9 = FUN5(VAR5, VAR7, VAR4->VAR19, VAR4->VAR20,
				  NULL, 0);
	if (VAR9 < 0)
		goto VAR21;

	FUN6(VAR7);

	return FUN7(VAR5, VAR4);

VAR21:
	FUN8(VAR5);
VAR18:
	FUN6(VAR7);
	return VAR9;
}