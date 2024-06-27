int FUN1(struct VAR1 *VAR1)
{
	struct VAR2 *VAR3 = FUN2(VAR1);
	struct VAR4 *VAR5 = FUN3(VAR1);
	struct list_head VAR6;
	int VAR7;

	FUN4(&VAR6);
	FUN5(VAR3, true);
	FUN6(VAR3);

	FUN7(VAR1, VAR8);

	FUN8(&VAR5->VAR9);
	VAR7 = FUN9(VAR1, &VAR6);
	if (VAR7) {
		int VAR10;
		
		VAR10 = FUN10(VAR1, &VAR6, false, true);
		if (VAR10)
			VAR7 = VAR10;

		
		FUN10(VAR1, &VAR5->VAR11, true, false);
	}
	FUN11(&VAR5->VAR9);

	FUN12(VAR1, VAR8);

	FUN13(VAR3);
	return VAR7;
}