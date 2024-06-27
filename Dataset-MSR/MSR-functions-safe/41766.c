static int FUN1(struct VAR1 *VAR2, int *VAR3, int VAR4)
{
	struct VAR5 *VAR5;
	int VAR6;

	if (!FUN2())
		return FUN3();

	VAR5 = (struct VAR5 *)VAR2->VAR7;
	VAR6 = *VAR3;
	*VAR3 = VAR4;

	if (VAR3 == &VAR5->VAR8.VAR9->VAR10) {
		FUN4();
		return 0;
	}

	if (VAR3 == &VAR5->VAR8.VAR11->VAR10) {
		VAR5->VAR8.VAR9->VAR10 = VAR4;
		FUN5(VAR5, VAR4);
	} else if ((!VAR4) ^ (!VAR6))
		FUN6((struct VAR12 *)VAR2->VAR13);

	FUN4();
	return 0;
}