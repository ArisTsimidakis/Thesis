int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
	int VAR4 = FUN2(VAR2, VAR3, 1);

	if (VAR4)
		return VAR4;

	if (!VAR2->VAR5->VAR6)
		return -VAR7;

	FUN3(VAR3);
	FUN4(&VAR3->VAR8->VAR9);

	VAR4 = -VAR10;
	if (FUN5(VAR3))
		goto VAR11;

	VAR4 = FUN6(VAR2, VAR3);
	if (VAR4)
		goto VAR11;

	FUN7(VAR3);
	VAR4 = VAR2->VAR5->FUN8(VAR2, VAR3);
	if (VAR4)
		goto VAR11;

	VAR3->VAR8->VAR12 |= VAR13;
	FUN9(VAR3);
	FUN10(VAR3);

VAR11:
	FUN11(&VAR3->VAR8->VAR9);
	FUN12(VAR3);
	if (!VAR4)
		FUN13(VAR3);
	return VAR4;
}