VAR1 FUN1(VAR2 *VAR3, u32 VAR4, u32 VAR5, VAR6 *VAR7, u32 VAR8)
{
	u32 VAR9;
	VAR10 *VAR11;
	GF_Err VAR12;
	VAR13 *VAR14;

	VAR12 = FUN2(VAR3, VAR15);
	if (VAR12) return VAR12;
	VAR11 = FUN3(VAR3, VAR4);
	if (!VAR11 || !VAR11->VAR16 || !VAR5) return VAR17;
	VAR14 = (VAR13 *)FUN4(VAR11->VAR16->VAR18->VAR19->VAR20->VAR21, VAR5-1);
	if (!VAR14) return VAR17;
	switch (VAR14->VAR22) {
	case VAR23:
	case VAR24:
	case VAR25:
	case VAR26:
	case VAR27:
	case VAR28:
	case VAR29:
		break;
	default:
		return VAR17;
	}


	if (VAR8 == VAR30) {
		if (VAR14->VAR22==VAR23)
			VAR14->VAR22 = VAR25;
		else if (VAR14->VAR22==VAR24)
			VAR14->VAR22 = VAR26;
	} else if (VAR8 == VAR31) {
		if (!VAR14->VAR32) VAR14->VAR32 = (VAR33*)FUN5(VAR34);
		if (VAR14->VAR32->VAR35) FUN6(VAR14->VAR32->VAR35);
		VAR14->VAR32->VAR35 = NULL;
		VAR14->VAR22 = VAR29;
	} else if (VAR8 < VAR36) {
		if ((VAR8 != VAR37) && !VAR14->VAR32)
			VAR14->VAR32 = (VAR33*)FUN5(VAR34);

		if (VAR7) {
			if (VAR14->VAR32->VAR35) FUN6(VAR14->VAR32->VAR35);
			VAR14->VAR32->VAR35 = FUN7(VAR7);
		} else if (VAR8 != VAR31) {
			VAR8=VAR37;
		}
		VAR9 = (VAR8==VAR37) ? 1 : 0;
		if (VAR14->VAR32 && FUN8(VAR14->VAR32->VAR35, VAR8))
			VAR9=1;

		if (VAR14->VAR38 && FUN8(VAR14->VAR38->VAR35, VAR8))
			VAR9=1;

		switch (VAR14->VAR22) {
		case VAR24:
		case VAR23:
			VAR14->VAR22 = VAR9 ? VAR24 : VAR23;
			break;
		case VAR26:
		case VAR25:
			VAR14->VAR22 = VAR9 ? VAR26 : VAR25;
			break;
		case VAR28:
		case VAR27:
			VAR14->VAR22 = VAR9 ? VAR28 : VAR27;
			break;
		}
	} else {

		
		if ((VAR8==VAR39) || (VAR8==VAR40)) {
			if (!VAR14->VAR32) return VAR17;
			if (!VAR7) {
				if (VAR14->VAR38) {
					FUN9((VAR41*)VAR14->VAR38);
					VAR14->VAR38 = NULL;
				}
				if (VAR14->VAR22==VAR28) VAR14->VAR22 = (VAR8==VAR40) ? VAR26 : VAR24;
				else if (VAR14->VAR22==VAR24) VAR14->VAR22 = (VAR8==VAR40) ? VAR26 : VAR24;
				else VAR14->VAR22 =  (VAR8==VAR40) ? VAR25 : VAR23;
			} else {
				if (!VAR14->VAR38) VAR14->VAR38 = (VAR33*)FUN5(VAR42);
				if (VAR14->VAR38->VAR35) FUN6(VAR14->VAR38->VAR35);
				VAR14->VAR38->VAR35 = FUN7(VAR7);

				if (VAR8==VAR39) {
					if (VAR14->VAR22==VAR26) VAR14->VAR22 = VAR24;
					else VAR14->VAR22 = VAR23;
				} else {
					if (VAR14->VAR22==VAR24) VAR14->VAR22 = VAR26;
					else VAR14->VAR22 = VAR25;
				}
			}
		}
		
		else if (VAR8==VAR36) {
			if (VAR14->VAR32) {
				FUN9((VAR41*)VAR14->VAR32);
				VAR14->VAR32=NULL;
			}
			if (!VAR7) return VAR17;

			if (!VAR14->VAR38) VAR14->VAR38 = (VAR33*)FUN5(VAR42);
			if (VAR14->VAR38->VAR35) FUN6(VAR14->VAR38->VAR35);
			VAR14->VAR38->VAR35 = FUN7(VAR7);

			if ((VAR14->VAR22==VAR24) || (VAR14->VAR22==VAR26)) VAR14->VAR22 = VAR28;
			else VAR14->VAR22 = VAR27;
		}
		
		else if (VAR8==VAR43) {
			VAR14->VAR22 = VAR28;
		}
	}

	FUN10(VAR14);
	return VAR44;
}