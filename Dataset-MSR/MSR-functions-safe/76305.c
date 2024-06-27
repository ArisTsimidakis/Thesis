static noinline int FUN1(struct VAR1 *VAR2,
					      void VAR3 *VAR4,
					      struct VAR5 *VAR6)
{
	int VAR7;
	VAR8 *VAR9;
	int VAR10 = sizeof(VAR8);

	if (!FUN2(VAR11))
		return -VAR12;

	VAR9 = FUN3(VAR4, VAR10);
	if (FUN4(VAR9))
		return FUN5(VAR9);

	FUN6(VAR13, "");

	VAR7 = FUN7(VAR2, VAR9, VAR6);
	if (VAR7)
		goto VAR14;

	if (FUN8(VAR4, VAR9, VAR10))
		VAR7 = -VAR15;
VAR14:
	FUN9(VAR9);
	return VAR7;
}