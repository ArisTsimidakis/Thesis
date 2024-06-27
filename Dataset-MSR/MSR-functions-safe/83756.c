static int FUN1(
	const char *VAR1, const VAR2 *VAR3, void *VAR4)
{
	VAR5 *VAR6 = VAR4;
	VAR7 *VAR8 = NULL, *VAR9;
	git_buf VAR10 = VAR11;
	size_t VAR12;

	if (FUN2(VAR3))
		return 0;

	if (FUN3(&VAR10, VAR1, VAR3->VAR13) < 0)
		return -1;

	if (FUN4(&VAR8, FUN5(VAR6->VAR14), VAR10.VAR15, false) < 0)
		return -1;

	VAR8->VAR16 = VAR3->VAR17;
	FUN6(&VAR8->VAR18, FUN7(VAR3));

	
	if (VAR6->VAR19 != NULL &&
		!FUN8(
			&VAR12, VAR6->VAR19, VAR6->VAR20, VAR10.VAR15, 0, 0) &&
		(VAR9 = FUN9(VAR6->VAR19, VAR12)) != NULL &&
		VAR8->VAR16 == VAR9->VAR16 &&
		FUN10(&VAR8->VAR18, &VAR9->VAR18))
	{
		FUN11(VAR8, VAR9);
		VAR8->VAR21 = 0;
	}

	FUN12(VAR8, VAR10.VAR22);
	FUN13(&VAR10);

	if (FUN14(VAR6->VAR23, VAR8) < 0) {
		FUN15(VAR8);
		return -1;
	}

	return 0;
}