static noinline int FUN1(struct VAR1 *VAR1,
					   void VAR2 *VAR3)
{
	 struct VAR4 *VAR5;
	 struct VAR6 *VAR6;
	 int VAR7;

	if (!FUN2(VAR8))
		return -VAR9;

	VAR5 = FUN3(VAR3, sizeof(*VAR5));
	if (FUN4(VAR5))
		return FUN5(VAR5);

	VAR6 = FUN6(VAR1)->VAR10;

	if (VAR5->VAR11 == 0)
		VAR5->VAR11 = FUN7(VAR6)->VAR12->VAR13.VAR14;

	VAR7 = FUN8(FUN7(VAR6)->VAR12->VAR15,
					VAR5->VAR11, VAR5->VAR14,
					VAR5->VAR16);

	if (VAR7 == 0 && FUN9(VAR3, VAR5, sizeof(*VAR5)))
		VAR7 = -VAR17;

	FUN10(VAR5);
	return VAR7;
}