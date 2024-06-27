static VAR1 FUN1(struct VAR2 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2);
	struct VAR5 *VAR6 = FUN3(VAR4);
	struct VAR7 *VAR8 = FUN4(VAR6);

	FUN5(VAR9, "");

	if (VAR4->VAR10.VAR11) {
		FUN6(VAR2, VAR8);
		FUN7(VAR8, "", 0);
		FUN8(VAR8, "", NULL, 0, NULL, 0);
		if (!FUN9(VAR8, VAR12))
			FUN10(VAR8, true);
		FUN11(VAR8, VAR13,
				      VAR4->VAR10.VAR14);
		VAR4->VAR10.VAR11 = false;
		if (VAR4->VAR10.VAR15) {
			FUN12(VAR4->VAR2, VAR8->VAR6, 0);
			FUN13(VAR4->VAR16, VAR17);
			FUN14(VAR4->VAR16, VAR17,
					    VAR18);
			VAR4->VAR10.VAR15 = false;
		}
	}
	return 0;
}