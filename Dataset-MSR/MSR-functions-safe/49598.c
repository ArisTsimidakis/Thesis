static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
			     size_t VAR5, VAR6 *VAR7)
{
	struct VAR8 *VAR9 = VAR2->VAR10;
	ssize_t VAR11;
	char *VAR12;

	FUN2();

	
	if (FUN3(VAR9) == VAR13)
		return -VAR14;

	
	VAR11 = FUN4(&VAR9->mutex, VAR2->VAR15 & VAR16);
	if (FUN5(VAR11 < 0))
		return VAR11;

	
	switch (VAR9->VAR17) {
	case VAR18:
	case VAR19:
		
		if (FUN5(VAR5 < 16)) {
			VAR11 = -VAR20;
			break;
		}

		VAR12 = FUN6(VAR4, VAR5);
		if (FUN7(VAR12)) {
			VAR11 = FUN8(VAR12);
			break;
		}

		
		if (VAR9->VAR17 == VAR18) {
			FUN9("");
			VAR11 = FUN10(VAR9, VAR12, VAR5);
			if (FUN5(VAR11 < 0))
				break;

			VAR9->VAR17 = VAR19;
			VAR11 = VAR5;
		} else {
			FUN9("");
			VAR11 = FUN11(VAR9, VAR12, VAR5);
			if (FUN5(VAR11 < 0))
				break;

			VAR11 = FUN12(VAR9);
			if (FUN5(VAR11)) {
				VAR9->VAR17 = VAR21;
				break;
			}

			VAR9->VAR17 = VAR22;
			FUN13(&VAR9->mutex);

			VAR11 = FUN14(VAR9);
			if (FUN5(VAR11 < 0)) {
				VAR9->VAR17 = VAR21;
				return VAR11;
			}

			return VAR5;
		}
		break;

	case VAR22:
		VAR12 = NULL;
		
		FUN15(&VAR9->VAR23.VAR24.VAR25);
		switch (FUN3(VAR9)) {
		case VAR13:
			VAR11 = -VAR14;
			goto VAR26;

		case VAR27:
			VAR11 = -VAR28;
			goto VAR26;

		case VAR29:
			break;
		}

		
		if (!(VAR9->VAR23.VAR30.VAR31 & VAR32)) {
			FUN16(&VAR9->VAR23.VAR24.VAR25);
			VAR11 = FUN17(VAR9);
			break;
		}

		
		VAR5 = FUN18(VAR5, (VAR33)FUN19(VAR9->VAR23.VAR30.VAR34));

		FUN16(&VAR9->VAR23.VAR24.VAR25);

		VAR12 = FUN6(VAR4, VAR5);
		if (FUN7(VAR12)) {
			VAR11 = FUN8(VAR12);
			break;
		}

		FUN15(&VAR9->VAR23.VAR24.VAR25);

		
		if (FUN3(VAR9) ==
		    VAR13) {
			VAR11 = -VAR14;
VAR26:
			FUN16(&VAR9->VAR23.VAR24.VAR25);
		} else {
			
			VAR11 = FUN20(VAR9, VAR12, VAR5);
		}
		FUN21(VAR12);
		break;

	default:
		VAR11 = -VAR35;
		break;
	}

	FUN13(&VAR9->mutex);
	return VAR11;
}