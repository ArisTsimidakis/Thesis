static int FUN1(struct VAR1 *VAR1,
			 struct socket *VAR2, struct VAR3 *VAR4, size_t VAR5)
{
	struct VAR2 *VAR6 = VAR2->VAR6;
	struct VAR7 *VAR8 = NULL;
	struct VAR9 *VAR10 = NULL;
	int VAR11;

	VAR11 = -VAR12;
	if (VAR4->VAR13 & VAR14)
		goto VAR15;

	VAR11 = -VAR16;
	if ((unsigned int)VAR5 > VAR6->VAR17 - 32)
		goto VAR15;

	VAR11 = -VAR18;
	VAR8 = FUN2(VAR5, VAR19);
	if (VAR8 == NULL)
		goto VAR15;

	VAR11 = -VAR20;
	if (FUN3(FUN4(VAR8,VAR5), VAR4->VAR21, VAR5))
		goto VAR15;

	VAR10 = FUN5(VAR8, &VAR11);
	if (!VAR10)
		goto VAR15;

	FUN6(&VAR22);
	VAR11 = FUN7(VAR6, VAR8, VAR10);
	FUN8(&VAR22);

VAR15:
	if (VAR11 && VAR10 && FUN9(VAR10, VAR11, VAR6) == 0)
		VAR11 = 0;
	FUN10(VAR8);

	return VAR11 ? : VAR5;
}