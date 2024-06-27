static int FUN1(struct VAR1 *VAR2) {
	struct VAR3 *VAR4 = VAR2->VAR5;
	int VAR6 = 0;

	if (FUN2(VAR7, &VAR4->VAR8))
		return -VAR9;

	
	if (FUN2(VAR10, &VAR4->VAR8)) {
		FUN3(VAR4, 1);
		FUN4(VAR4, 1);
	}

	if (VAR4->VAR11 != VAR2) {
		FUN5(VAR12, &VAR4->VAR13);
		VAR4->VAR14 = FUN6(VAR15, VAR2, VAR2->VAR16);
		if (FUN7(VAR4->VAR14))
			return (int)FUN8(VAR4->VAR14);

		VAR6 = FUN9(VAR2->VAR17, VAR18, VAR19,
			VAR2->VAR16, VAR2);
		if (VAR6) {
			FUN10(VAR2->VAR16,
				"",
				VAR2->VAR17, VAR6);
			FUN11(VAR12, &VAR4->VAR13);
			FUN12(VAR4->VAR14);
			return VAR6;
		}

		
		FUN5(VAR20, &VAR4->VAR8);
		FUN13(VAR4);

		FUN14(VAR4);
	}
	FUN15(VAR4, 1);

	FUN16(VAR2);
	return 0;
}