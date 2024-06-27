static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2->VAR5.VAR6);

	if (VAR2->VAR7 == VAR8) {
		int VAR9;

		VAR9 = FUN3(VAR4->VAR10, &VAR2->VAR11.VAR12);
		if (VAR9) {
			FUN4(VAR4, "", VAR9);
			return VAR9;
		}
	}

	FUN5(VAR2->VAR11.VAR13);
	FUN5(VAR2);
	return 0;
}