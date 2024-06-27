static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	int VAR9;
	int VAR10;

	VAR9 = VAR4->VAR11.VAR9;
	if (VAR9)
		VAR10 = 2;
	else
		VAR10 = 1;

	VAR6 = FUN2(VAR2, VAR10);
	if (FUN3(VAR6))
		return FUN4(VAR6);

	VAR8 = (struct VAR7 *) VAR6->VAR11;
	VAR8->VAR12 = VAR13;
	VAR8->VAR14 = VAR15;
	VAR8->VAR16 = FUN5(VAR2->VAR17.VAR18);
	VAR8->VAR19 = 0;
	VAR8->VAR20 = 0;
	VAR8->VAR21 = 0;
	VAR8->VAR22 = 0;

	FUN6(VAR6, VAR23, VAR24, NULL, FUN7(VAR2));
	return 0;
}