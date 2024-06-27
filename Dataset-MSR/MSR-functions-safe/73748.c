FUN1(VAR1 *VAR2, int32_t VAR3)
{
	VAR4 *VAR5;
	timestruc_t VAR6;
	uint32_t VAR7 = 0;

	FUN2(VAR2);

	FUN3(&VAR2->VAR8);
	FUN4(VAR2->VAR9);
	if (VAR2->VAR10 != VAR11) {
		FUN5(&VAR2->VAR8);
		return;
	}
	VAR2->VAR10 = VAR12;
	FUN5(&VAR2->VAR8);

	switch (VAR2->VAR13) {
	case VAR14:
	case VAR15:
		FUN6(VAR2);
		FUN7(VAR2->VAR16);
		break;

	case VAR17:
	case VAR18:
		
		VAR5 = &VAR2->VAR19;
		if (VAR3 != 0) {
			VAR5->VAR20.VAR21.VAR22 = VAR3;
			VAR5->VAR23 |= VAR24;
		}

		
		if (VAR2->VAR25 &&
		    (VAR5->VAR23 & VAR24) == 0) {
			VAR5->VAR23 |= VAR24;
			FUN8(&VAR6);
			VAR5->VAR20.VAR21 = VAR6;
		}

		if (VAR2->VAR26 & VAR27) {
			if (FUN9(VAR2->VAR28,
			    VAR29)) {
				VAR7 |= VAR30;
			}
			(void) FUN10(VAR2->VAR31,
			    VAR2->VAR32, VAR7);
		}
		FUN11(VAR2->VAR32, VAR2->VAR31, VAR2->VAR33);
		FUN12(VAR2->VAR31, VAR2);

		if (FUN13(VAR2->VAR31)) {
			(void) FUN14(VAR2->VAR31, VAR2->VAR34,
			    VAR2->VAR32);
			FUN15(VAR2->VAR31, VAR2);
		} else {
			
			if (VAR2->VAR35 != NULL)
				FUN16(VAR2->VAR35);
		}
		if (FUN17(VAR2->VAR31) == 0) {
			
			VAR5->VAR36 =
			    VAR2->VAR31->VAR37;
			if (VAR5->VAR36 != 0)
				VAR5->VAR23 |= VAR38;
			
			VAR2->VAR31->VAR39 = 0;
		}
		if (VAR5->VAR23 != 0) {
			
			(void) FUN18(NULL, VAR2->VAR31,
			    VAR2->VAR32, NULL, VAR5);
		}

		
		if (VAR2->VAR31->VAR40.VAR41)
			FUN19(VAR2);

		FUN20(VAR2->VAR16);
		break;
	}
	FUN21(&VAR2->VAR28->VAR42);

	FUN3(&VAR2->VAR8);
	FUN4(VAR2->VAR9);
	FUN4(VAR2->VAR10 == VAR12);
	VAR2->VAR10 = VAR43;
	FUN5(&VAR2->VAR8);
}