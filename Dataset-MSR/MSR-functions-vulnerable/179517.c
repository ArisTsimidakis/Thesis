static bool FUN1(struct VAR1 *VAR2)
{
	u32 VAR3 = FUN2(VAR4);
	struct VAR5 *VAR6 = FUN3(VAR2);
	struct VAR7 *VAR7 = FUN4(VAR2);
	u32 VAR8 = VAR6->VAR8;

	if (VAR6->VAR9.VAR10)
		return 0;

	if (FUN5(VAR6->VAR11)) {
		FUN6("", VAR12,
				    FUN2(VAR13));
		return 1;
	}

	switch (VAR8) {
	case VAR14:
		if (!FUN7(VAR3))
			return 0;
		else if (FUN8(VAR3))
			return VAR15;
		return VAR7->VAR16 &
				(1u << (VAR3 & VAR17));
	case VAR18:
		return 0;
	case VAR19:
		return 1;
	case VAR20:
		return FUN9(VAR7, VAR21);
	case VAR22:
		return FUN9(VAR7, VAR23);
	case VAR24:
		return 1;
	case VAR25:
		return 1;
	case VAR26:
		return FUN9(VAR7, VAR27);
	case VAR28:
		return 1;
	case VAR29:
		return FUN9(VAR7, VAR30);
	case VAR31:
		return FUN9(VAR7, VAR32);
	case VAR33:
		return FUN9(VAR7, VAR34);
	case VAR35: case VAR36:
	case VAR37: case VAR38:
 	case VAR39: case VAR40:
 	case VAR41: case VAR42:
 	case VAR43: case VAR44:


 		
		return 1;
	case VAR45:
		return FUN10(VAR2, VAR7);
	case VAR46:
		return FUN9(VAR7, VAR47);
	case VAR48:
		return FUN11(VAR2, VAR7);
	case VAR49:
	case VAR50:
		return FUN12(VAR2, VAR7, VAR8);
	case VAR51:
		return 1;
	case VAR52:
		return FUN9(VAR7, VAR53);
	case VAR54:
		return FUN9(VAR7, VAR55);
	case VAR56:
		return FUN9(VAR7, VAR57) ||
			FUN13(VAR7,
				VAR58);
	case VAR59:
		return 0;
	case VAR60:
		return 1;
	case VAR61:
		return FUN13(VAR7,
			VAR62);
	case VAR63:
	case VAR64:
		return 0;
	case VAR65:
		return VAR7->VAR66 &
			VAR67;
	case VAR68:
		return FUN13(VAR7, VAR69);
	case VAR70:
		return 1;
	default:
		return 1;
	}
}