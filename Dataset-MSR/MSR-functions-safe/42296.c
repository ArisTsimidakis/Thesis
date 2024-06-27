FUN1(struct VAR1 *VAR2, char VAR3 *VAR4, size_t VAR5, VAR6 * VAR7)
{
	VAR8 *VAR9;
	VAR10 *VAR11;
	VAR12 *VAR13;
	int VAR14 = -1;
	VAR15 *VAR16;
	struct VAR17 *VAR18 = NULL;
	int VAR19 = 0;

	if ((!(VAR11 = (VAR10 *) VAR2->VAR20)) || (!(VAR9 = VAR11->VAR21)))
		return -VAR22;
	FUN2(3, FUN3(VAR23, VAR9,
				      "", (int) VAR5));

	if (!FUN4(VAR24, VAR4, VAR5))
		return -VAR25;
	if (VAR11->VAR26 && (VAR5 >= VAR27)) {
		VAR18 = FUN5(VAR27, VAR28);
		if (!VAR18)
			return -VAR29;
		if (FUN6(VAR18, VAR4, VAR27)) {
			VAR19 = -VAR25;
			goto VAR30;
		}
		if (VAR18->VAR31 < 0) {
			if (VAR5 >= VAR32) {
				VAR15 *VAR33;
				VAR33 = FUN5(VAR32, VAR28);
				if (!VAR33) {
					VAR19 = -VAR29;
					goto VAR30;
				}
				VAR19 =VAR34
				    (VAR33, VAR4, VAR32);
				VAR14 = VAR33->VAR35;
				FUN7(VAR33);
				if (VAR19) {
					VAR19 = -VAR25;
					goto VAR30;
				}
			}
		} else
			VAR14 = VAR18->VAR35;
	}
	VAR13 = FUN8(VAR11, VAR14);
	if (!VAR13) {		
		if (FUN9(&VAR9->VAR36)) {
			VAR19 = -VAR37;
			goto VAR30;
		}
		if (VAR2->VAR38 & VAR39) {
			VAR19 = -VAR40;
			goto VAR30;
		}
		VAR19 = FUN10(VAR11->VAR41,
			(FUN9(&VAR9->VAR36) ||
			(VAR13 = FUN8(VAR11, VAR14))));
		if (FUN9(&VAR9->VAR36)) {
			VAR19 = -VAR37;
			goto VAR30;
		}
		if (VAR19) {
			
			goto VAR30;
		}
	}
	if (VAR13->VAR42.VAR43 != '') {
		VAR19 = FUN11(VAR11, VAR4, VAR5, VAR13);
		goto VAR30;
	}

	VAR16 = &VAR13->VAR42;
	if (VAR18 == NULL) {
		VAR18 = FUN5(VAR27, VAR28);
		if (! VAR18) {
			VAR19 = -VAR29;
			goto VAR30;
		}
	}
	memset(VAR18, 0, VAR27);
	VAR18->VAR31 = (int) VAR16->VAR44;
	VAR18->VAR45 = VAR18->VAR31; 
	VAR18->VAR35 = VAR16->VAR35;
	VAR18->VAR46 =
	    ((VAR13->VAR47.VAR48 >= 0xc0) && (12 == VAR16->VAR49)) ? 1 : 0;
	VAR18->VAR50 = VAR16->VAR51;
	VAR18->VAR52 = VAR16->VAR52;
	VAR18->VAR53 = VAR16->VAR53;
	if ((VAR54 & VAR16->VAR51) ||
	    (VAR55 & VAR16->VAR53))
		memcpy(VAR18->VAR56, VAR13->VAR57,
		       sizeof (VAR18->VAR56));
	switch (VAR16->VAR52) {
	
	case VAR58:
	case VAR59:
	case VAR60:
		VAR18->VAR61 = 0;
		break;
	case VAR62:
	case VAR63:
	case VAR64:
		VAR18->VAR61 = VAR65;
		break;
	case VAR66:
	case VAR67:
	case VAR68:
	case VAR69:
	case VAR70:
		VAR18->VAR61 = VAR71;
		break;
	case VAR72:
		VAR18->VAR61 = (VAR13->VAR57[0] == 0 && 
				  VAR16->VAR51 == VAR73) ? 0 : VAR71;
		break;
	default:
		VAR18->VAR61 = VAR71;
		break;
	}

	
	if (VAR5 >= VAR27) {
		if (FUN12(VAR4, VAR18, VAR27)) {
			VAR19 = -VAR25;
			goto VAR30;
		}
		VAR4 += VAR27;
		if (VAR5 > VAR18->VAR31)
			VAR5 = VAR18->VAR31;
		if (VAR5 > VAR27) {
			if (FUN13(VAR13, VAR4, VAR5 - VAR27)) {
				VAR19 = -VAR25;
				goto VAR30;
			}
		}
	} else
		VAR5 = (VAR18->VAR61 == 0) ? 0 : -VAR71;
	FUN14(VAR13);
	VAR19 = VAR5;
VAR30:
	FUN7(VAR18);
	return VAR19;
}