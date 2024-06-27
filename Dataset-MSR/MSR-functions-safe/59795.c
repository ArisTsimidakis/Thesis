static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
				   unsigned char VAR5)
{
	int VAR6;
	struct VAR7 *VAR8 = VAR2->VAR9;

	if (((VAR2->VAR10 & VAR11) && VAR5 == VAR12) ||
		FUN2(VAR13, &VAR8->VAR14))
		return;

	if (VAR8->VAR15 && VAR5 == VAR16 && VAR4->VAR17 == VAR18) {
		if ((VAR6 = (VAR8->VAR19 + 1) & (VAR20 - 1)) == VAR8->VAR21) {
			FUN3(VAR2, "");
			return;
		}

		VAR8->VAR22[VAR8->VAR19].VAR23 = FUN4(VAR4, VAR24);
		if (!VAR8->VAR22[VAR8->VAR19].VAR23) {
			FUN3(VAR2, "");
			return;
		}
		FUN5(VAR4, VAR8->VAR22[VAR8->VAR19].VAR23);
		VAR8->VAR22[VAR8->VAR19].VAR4 = VAR4;
		VAR8->VAR19 = VAR6;

		
		if (!FUN2(VAR25, &VAR8->VAR14)) {
			FUN6(VAR8);

		
		} else if (FUN7(VAR26, VAR8->VAR27 + VAR28 * 5)) {

			
			FUN8(VAR8->VAR29);

			
			FUN9(VAR8->VAR15);

			
			FUN10(&VAR8->VAR30);

			FUN11(VAR8->VAR15);
			FUN12(&VAR8->VAR30);
			FUN13(VAR8->VAR15);

			
			if (!FUN2(VAR25, &VAR8->VAR14))
				FUN6(VAR8);

			
			FUN14(VAR8->VAR29);
		}
		return;
	}

	if ((VAR6 = (VAR8->VAR31 + 1) & (VAR32 - 1)) == VAR8->VAR33) {
		FUN3(VAR2, "");
		return;
	}

	if (VAR5 == VAR16) {
		VAR8->VAR34[VAR8->VAR31].VAR23 = FUN4(VAR4, VAR24);
		if (!VAR8->VAR34[VAR8->VAR31].VAR23) {
			FUN3(VAR2, "");
			return;
		}
		FUN5(VAR4, VAR8->VAR34[VAR8->VAR31].VAR23);
	}
	VAR8->VAR34[VAR8->VAR31].VAR4 = VAR4;
	VAR8->VAR34[VAR8->VAR31].VAR5 = VAR5;
	VAR8->VAR31 = VAR6;

	
	if (!FUN2(VAR35, &VAR8->VAR14)) {
		FUN15(VAR8);

	
	} else if (FUN7(VAR26, VAR8->VAR36 + VAR28 * 5)) {

		
		FUN8(VAR8->VAR29);

		
		FUN9(VAR8->VAR37);

		
		FUN10(&VAR8->VAR30);

		FUN11(VAR8->VAR37);
		FUN12(&VAR8->VAR30);
		FUN13(VAR8->VAR37);

		
		if (!FUN2(VAR35, &VAR8->VAR14))
			FUN15(VAR8);

		
		FUN14(VAR8->VAR29);
	}
}