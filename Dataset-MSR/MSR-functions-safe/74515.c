static int VAR1 FUN1(void)
{
	struct VAR2 *VAR3;
	const struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	int VAR8, VAR9;

	
	if (FUN2())
		VAR10 = true;

	FUN3(&VAR11);

	
	FUN4(VAR3, &VAR12, VAR13) {
		VAR5 = VAR3->VAR14->VAR5;
		VAR7 = VAR3->VAR15;

		if (VAR7 && VAR7->VAR16)
			continue;

		if (VAR7 && !(VAR7->VAR17 & VAR18))
			continue;

		FUN3(&VAR3->mutex);

		if (VAR3->VAR19)
			goto VAR20;

		
		if (VAR5->VAR21)
			VAR8 = VAR5->FUN5(VAR3);
		else
			VAR8 = 1;

		if (!VAR8)
			goto VAR20;

		if (FUN6()) {
			
			FUN7(VAR3, "");
			VAR9 = FUN8(VAR3);
			if (VAR9 != 0)
				FUN9(VAR3, "", VAR9);
		} else {
			
			FUN10(VAR3, "");
		}

VAR20:
		FUN11(&VAR3->mutex);
	}

	FUN11(&VAR11);

	return 0;
}