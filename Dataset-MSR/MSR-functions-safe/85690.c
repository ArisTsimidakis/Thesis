static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5;
	struct VAR6 *VAR7;
	int VAR8;
	int VAR9;
	int VAR10;

	for (VAR8 = 0; VAR8 < VAR4->VAR11 * 2; VAR8++) {
		VAR7 = &VAR2->VAR12[VAR8];

		if (VAR7->VAR13->VAR14 == VAR15)
			break;

		snprintf(VAR7->VAR13->VAR16, VAR17,
			 "", VAR2->VAR18->VAR19,
			 (FUN2(VAR7->VAR13) ? "" : ""), VAR7->VAR20);

		VAR7->VAR13->VAR16[VAR17 - 1] = '';

		VAR9 = FUN3(VAR7->VAR13->VAR21,
				  VAR22, 0, VAR7->VAR13->VAR16, VAR7);
		if (VAR9) {
			FUN4(VAR2->VAR18, "",
				   VAR7->VAR13->VAR21);
			return VAR9;
		}
		FUN5(VAR7->VAR13->VAR21);

		VAR10 = FUN6(VAR4->VAR11, VAR8,
						 VAR7->VAR13, &VAR7->VAR23);

		if (FUN7(VAR10))
			FUN8(VAR7->VAR13->VAR21,
					      &VAR7->VAR23);

		VAR7->VAR13->VAR14 = VAR15;
	}

	return 0;
}