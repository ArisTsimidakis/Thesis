VAR1 FUN1(VAR2 *VAR3, VAR2 *VAR4)
{
	VAR5 *VAR6 = (VAR5 *)VAR3;
	switch (VAR4->VAR7) {
	case VAR8:
		if (VAR6->VAR9) FUN2(VAR4, VAR6)
			VAR6->VAR9 = (VAR10 *)VAR4;
		break;
	case VAR11:
		FUN3(VAR6->VAR12, VAR4);
		break;
	case VAR13:
		if (VAR6->VAR14) FUN2(VAR4, VAR6)
		VAR6->VAR14 = (VAR15 *) VAR4;
		break;
	case VAR16:
		if (VAR6->VAR17) FUN2(VAR4, VAR6)
			VAR6->VAR17 = (VAR18 *)VAR4;
		break;
	case VAR19:
		if (VAR6->VAR20) FUN2(VAR4, VAR6)
			VAR6->VAR20 = (VAR21 *)VAR4;
		break;
	case VAR22:
		if (VAR6->VAR23) FUN2(VAR4, VAR6)
			VAR6->VAR23 = (VAR18 *)VAR4;
		break;
	case VAR24:
		if (VAR6->VAR25) FUN2(VAR4, VAR6)
			VAR6->VAR25 = (VAR18 *)VAR4;
		break;
	case VAR26:
		if (VAR6->VAR27) FUN2(VAR4, VAR6)
			VAR6->VAR27 = (VAR21 *)VAR4;
		break;
	case VAR28:
		if (VAR6->VAR29) FUN2(VAR4, VAR6)
			VAR6->VAR29 = (VAR30 *)VAR4;
		break;
	case VAR31:
		if (! memcmp(((VAR32*)VAR4)->VAR33, VAR34, 16)) {
			if (VAR6->VAR35) FUN2(VAR4, VAR6)
			VAR6->VAR35 = (VAR32 *)VAR4;
		} else {
			return FUN4(VAR3, VAR4);
		}
		break;
	case VAR36:
		VAR6->VAR37 = (VAR38 *)VAR4;
		
		VAR6->VAR37->VAR39.VAR7 = VAR6->VAR7;
		break;
		break;

	case VAR40:
		if (VAR6->VAR41) FUN2(VAR4, VAR6)
			VAR6->VAR41 = (VAR42 *)VAR4;
		break;
	case VAR43:
		if (VAR6->VAR44) FUN2(VAR4, VAR6)
			VAR6->VAR44 = (VAR45 *)VAR4;
		break;
	case VAR46:
		if (VAR6->VAR47) FUN2(VAR4, VAR6)
			VAR6->VAR47 = (VAR48 *)VAR4;
		break;
	default:
		return FUN4(VAR3, VAR4);
	}
	return VAR49;
}