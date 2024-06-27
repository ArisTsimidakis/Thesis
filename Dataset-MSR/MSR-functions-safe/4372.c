FUN1(VAR1, VAR2)
{
	char *VAR3 = NULL;
	int VAR4, VAR5 = 0;
	php_uint32 VAR6;
	VAR7 *VAR8;
	
	long VAR9 = 9021976, VAR10 = 9021976;
	FUN2();

	if (FUN3(FUN4() VAR11, "", &VAR9, &VAR10, &VAR3, &VAR5) == VAR12) {
		return;
	}

	if (FUN5(VAR13)) {
		FUN6(VAR14, 0 VAR11,
			"");
		return;
	}

	switch (VAR9) {
		case 9021976:
		case VAR15: 
			
			if (VAR16->VAR17.VAR18->VAR19) {
				VAR9 = VAR20;
			} else if (VAR16->VAR17.VAR18->VAR21) {
				VAR9 = VAR22;
			} else {
				VAR9 = VAR23;
			}
			break;
		case VAR23:
		case VAR20:
		case VAR22:
			break;
		default:
			FUN6(VAR24, 0 VAR11,
				"");
			return;
	}

	switch (VAR10) {
		case 9021976:
			VAR6 = VAR16->VAR17.VAR18->VAR6 & VAR25;
			break;
		case 0:
			VAR6 = VAR26;
			break;
		case VAR27:
			if (VAR9 == VAR22) {
				FUN6(VAR24, 0 VAR11,
					"");
				return;
			}

			if (!FUN5(VAR28)) {
				FUN6(VAR24, 0 VAR11,
					"");
				return;
			}

			VAR6 = VAR29;
			break;
		case VAR30:
			if (VAR9 == VAR22) {
				FUN6(VAR24, 0 VAR11,
					"");
				return;
			}

			if (!FUN5(VAR31)) {
				FUN6(VAR24, 0 VAR11,
					"");
				return;
			}

			VAR6 = VAR32;
			break;
		default:
			FUN6(VAR24, 0 VAR11,
				"");
			return;
	}

	VAR4 = VAR16->VAR17.VAR18->VAR4;
	VAR16->VAR17.VAR18->VAR4 = 0;
	VAR8 = FUN7(VAR16->VAR17.VAR18, VAR9, VAR3, flags VAR11);
	VAR16->VAR17.VAR18->VAR4 = VAR4;

	if (VAR8) {
		FUN8(VAR8, 1, 1);
	} else {
		FUN9();
	}
}