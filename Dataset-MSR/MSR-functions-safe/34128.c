static int FUN1(struct VAR1 *VAR1, struct socket *VAR2, int VAR3,
			   int VAR4)
{
	struct VAR2 *VAR5;

	FUN2("", VAR2);

	if (VAR2->VAR6 != VAR7)
		return -VAR8;

	VAR2->VAR9 = &VAR10;

	VAR5 = FUN3(VAR1, VAR11, VAR12, &VAR13);
	if (!VAR5)
		return -VAR14;

	FUN4(VAR2, VAR5);

	FUN5(VAR5, VAR15);

	VAR5->VAR16 = VAR3;

	VAR2->VAR17 = VAR18;
	VAR5->VAR19 = VAR20;

	FUN6(&VAR21, VAR5);
	return 0;
}