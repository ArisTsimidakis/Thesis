static int FUN1(struct VAR1 *VAR2,
					struct VAR3 *VAR4, int VAR5)
{
	if (!VAR4)
		return 0;

	
	switch (VAR4->VAR6) {
	case VAR7:
		if (VAR5 != VAR8)
			goto VAR9;
		break;
	case VAR10:
		if (VAR5 != VAR11 &&
		    VAR5 != VAR12 &&
		    VAR5 != VAR13)
			goto VAR9;
		break;
	case VAR14:
		if (VAR5 != VAR15)
			goto VAR9;
		break;
	case VAR16:
		if (VAR5 != VAR17 &&
		    VAR5 != VAR18)
			goto VAR9;
		break;
	case VAR19:
		if (VAR5 != VAR20)
			goto VAR9;
		break;
	
	case VAR21:
		if (VAR5 != VAR22)
			goto VAR9;
		break;
	
	case VAR23:
	case VAR24:
		if (VAR5 != VAR22)
			goto VAR9;
		break;
	case VAR25:
	case VAR26:
		if (VAR5 != VAR27)
			goto VAR9;
		break;
	case VAR28:
		if (VAR5 != VAR29 &&
		    VAR5 != VAR30 &&
		    VAR5 != VAR31 &&
		    VAR5 != VAR32)
			goto VAR9;
		break;
	case VAR33:
		if (VAR5 != VAR34 &&
		    VAR5 != VAR35 &&
		    VAR5 != VAR31 &&
		    VAR5 != VAR36)
			goto VAR9;
		break;
	case VAR37:
		if (VAR5 != VAR38)
			goto VAR9;
		break;
	default:
		break;
	}

	
	switch (VAR5) {
	case VAR8:
		if (VAR4->VAR6 != VAR7)
			goto VAR9;
		if (VAR2->VAR39 > 1) {
			FUN2(VAR2, "");
			return -VAR40;
		}
		break;
	case VAR11:
	case VAR12:
	case VAR13:
		if (VAR4->VAR6 != VAR10)
			goto VAR9;
		break;
	case VAR15:
		if (VAR4->VAR6 != VAR14)
			goto VAR9;
		break;
	case VAR18:
	case VAR17:
		if (VAR4->VAR6 != VAR16)
			goto VAR9;
		break;
	case VAR22:
		if (VAR4->VAR6 != VAR21 &&
		    VAR4->VAR6 != VAR23 &&
		    VAR4->VAR6 != VAR24)
			goto VAR9;
		break;
	case VAR29:
	case VAR32:
	case VAR30:
		if (VAR4->VAR6 != VAR28)
			goto VAR9;
		break;
	case VAR34:
	case VAR36:
	case VAR35:
		if (VAR4->VAR6 != VAR33)
			goto VAR9;
		break;
	case VAR20:
		if (VAR4->VAR6 != VAR19)
			goto VAR9;
		break;
	case VAR38:
		if (VAR4->VAR6 != VAR37)
			goto VAR9;
		break;
	default:
		break;
	}

	return 0;
VAR9:
	FUN2(VAR2, "",
		VAR4->VAR6, FUN3(VAR5), VAR5);
	return -VAR40;
}