FUN1(
 	struct VAR1	*VAR2,
	xfs_ino_t		VAR3,
	struct VAR4	*VAR5)
{
	xfs_failaddr_t		VAR6;
	uint16_t		VAR7;
	uint16_t		VAR8;
	uint64_t		VAR9;
	uint64_t		VAR10;

	if (VAR5->VAR11 != FUN2(VAR12))
		return VAR13;

	
	if (VAR5->VAR14 >= 3) {
		if (!FUN3(&VAR2->VAR15))
			return VAR13;
		if (!FUN4((char *)VAR5, VAR2->VAR15.VAR16,
				      VAR17))
			return VAR13;
		if (FUN5(VAR5->VAR18) != VAR3)
			return VAR13;
		if (!FUN6(&VAR5->VAR19, &VAR2->VAR15.VAR20))
			return VAR13;
	}

	
	VAR10 = FUN5(VAR5->VAR10);
	if (VAR10 & (1ULL << 63))
		return VAR13;

	VAR7 = FUN7(VAR5->VAR21);
	if (VAR7 && FUN8(VAR7) == VAR22)
		return VAR13;

	
	if ((FUN9(VAR7) || FUN10(VAR7)) && VAR10 == 0)
		return VAR13;

	
	if (VAR7 &&
	    FUN11(VAR5->VAR23) + FUN7(VAR5->VAR24) >
			FUN5(VAR5->VAR25))
		return VAR13;

	if (VAR7 && FUN12(VAR5) > VAR2->VAR15.VAR16)
		return VAR13;

	VAR8 = FUN7(VAR5->VAR26);

	if (VAR7 && (VAR8 & VAR27) && !VAR2->VAR28)
		return VAR13;

	
	switch (VAR7 & VAR29) {
	case VAR30:
	case VAR31:
	case VAR32:
	case VAR33:
		if (VAR5->VAR34 != VAR35)
			return VAR13;
		break;
 	case VAR36:
 	case VAR37:
 	case VAR38:

		switch (VAR5->VAR34) {

		case VAR39:

			

			if (FUN13(VAR7))

				return VAR13;

			if (VAR10 > FUN14(VAR5, VAR2))

				return VAR13;

			if (VAR5->VAR23)

				return VAR13;

			

		case VAR40:

		case VAR41:

			break;

		default:

			return VAR13;

		}






 		break;
 	case 0:
 		
		break;
	default:
		return VAR13;
 	}
 
 	if (FUN15(VAR5)) {

		switch (VAR5->VAR42) {

		case VAR39:

			if (VAR5->VAR24)

				return VAR13;

		

		case VAR40:

		case VAR41:

			break;

		default:

			return VAR13;

		}






 	} else {
 		
		switch (VAR5->VAR42) {
		case 0:
		case VAR40:
			break;
		default:
			return VAR13;
		}
		if (VAR5->VAR24)
			return VAR13;
	}

	
	VAR6 = FUN16(VAR2, FUN11(VAR5->VAR43),
			VAR7, VAR8);
	if (VAR6)
		return VAR6;

	
	if (VAR5->VAR14 < 3)
		return NULL;

	VAR9 = FUN5(VAR5->VAR44);

	
	if ((VAR9 & (VAR45 | VAR46)) &&
	     !FUN17(&VAR2->VAR15))
		return VAR13;

	
	if ((VAR9 & VAR45) && (VAR7 & VAR29) != VAR36)
		return VAR13;

	
	if ((VAR9 & VAR45) && (VAR8 & VAR27))
		return VAR13;

	
	if ((VAR9 & VAR45) && (VAR9 & VAR47))
		return VAR13;

	
	VAR6 = FUN18(VAR2, FUN11(VAR5->VAR48),
			VAR7, VAR8, VAR9);
	if (VAR6)
		return VAR6;

	return NULL;
}