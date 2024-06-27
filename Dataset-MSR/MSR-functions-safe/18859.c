int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6 = FUN2(VAR2);
	struct VAR7 *VAR7 = FUN3(VAR6->VAR8.VAR9);

	if (!FUN4(NULL, VAR10, VAR2)) {
		struct VAR11 *VAR12 = FUN5(VAR2);
		int VAR13;

		if (!(VAR12 && VAR12->VAR14[VAR12->VAR15 - 1]->VAR16.VAR17 &
				 VAR18))
			goto VAR19;

		if (!FUN6(VAR2, sizeof(*VAR4) + sizeof(struct VAR20)))
			goto VAR19;

		VAR13 = FUN7(VAR2);
		FUN8(VAR2, sizeof(*VAR4));

		if (!FUN9(NULL, VAR10, VAR2))
			goto VAR19;

		FUN8(VAR2, VAR13);
	}

	FUN10(VAR7, VAR21);

	switch (VAR2->VAR22) {
	case VAR23:
		if (!FUN11(VAR2->VAR24))
			break;
		
	case VAR25:
		VAR2->VAR24 = 0;
		if (FUN12(VAR2))
			goto VAR26;
	}

	if (!FUN13(VAR2, sizeof(*VAR4)))
		goto VAR26;

	VAR4 = FUN14(VAR2);

	FUN15(VAR7, VAR4->VAR27);
	
	if (VAR4->VAR27 > VAR28)
		goto VAR26;


	

	if (VAR6->VAR29 & (VAR30 | VAR31)) {
		
		if ((VAR4->VAR27 == VAR32 ||
		     VAR4->VAR27 == VAR33) &&
		    VAR7->VAR34.VAR35) {
			goto VAR26;
		}
		if (VAR4->VAR27 != VAR32 &&
		    VAR4->VAR27 != VAR33 &&
		    VAR4->VAR27 != VAR36 &&
		    VAR4->VAR27 != VAR37) {
			goto VAR26;
		}
	}

	VAR38[VAR4->VAR27].FUN16(VAR2);

VAR19:
	FUN17(VAR2);
	return 0;
VAR26:
	FUN10(VAR7, VAR39);
	goto VAR19;
}