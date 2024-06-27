static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2);
	struct VAR5 *VAR6;
	int VAR7 = 0;

	if (!VAR4)
		return -VAR8;

	VAR6 = FUN3(VAR2, VAR9, NULL, 0);
	if (!VAR6) {
		FUN4(VAR2, "");
		return -VAR8;
	}

	if (VAR6->VAR10 == 2) {
		VAR4->VAR11[0] = VAR6->VAR12[1];
		VAR4->VAR11[1] = VAR6->VAR12[0];
		if (VAR4->VAR13 & VAR14) {
			FUN5(VAR2, "",
				 VAR6->VAR12[1], VAR6->VAR12[0]);
		} else {
			FUN5(VAR2, "",
				 VAR6->VAR12[1], VAR6->VAR12[0]);
		}
	} else {
		FUN4(VAR2, "");
		VAR7 = -VAR15;
	}
	FUN6(VAR6);
	return VAR7;
}