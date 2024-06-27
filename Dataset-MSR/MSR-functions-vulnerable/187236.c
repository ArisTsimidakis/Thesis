static int FUN1(int VAR1, struct VAR2 *VAR3)

{

	struct VAR4 *VAR5 = FUN2(VAR3);

	struct VAR6 *VAR7 = (struct VAR6*)FUN3(VAR3);

	struct VAR8 *VAR9 = FUN4(VAR5->VAR10);

	struct VAR11 *VAR12 = FUN5(VAR5->VAR10->VAR13);

	struct VAR14 *VAR15 = FUN6(VAR5->VAR10->VAR13);

	VAR16 *VAR17 = (VAR16 *) VAR5->VAR18;

	HANDLE VAR19;

	struct winfd VAR20;

	int VAR21, VAR22;

	size_t VAR23;

	int VAR24 = VAR25;



	VAR26;



	VAR7->VAR27 = VAR28;

	FUN7(VAR7->VAR29);

	VAR7->VAR30 = NULL;

	VAR23 = VAR5->VAR31 - VAR32;



	if (VAR23 > VAR33) {

		return VAR25;

	}



	VAR21 = FUN8(VAR5->VAR10, VAR34);

	if (VAR21 < 0) {

		if (FUN9(VAR5, &VAR21, VAR34) != VAR35) {

			return VAR36;

		}

	}



	FUN10("", VAR21);

	VAR19 = VAR9->VAR37[VAR21].VAR38;

	

	VAR20 = FUN11(VAR19, VAR39, NULL, NULL);

	if (VAR20.VAR40 < 0) {

		return VAR36;

	}



	switch(FUN12(VAR17->VAR41)) {

	case VAR42:

		switch(VAR17->VAR43) {

		case VAR44:

			VAR24 = FUN13(VAR12->VAR45, VAR20.VAR46, FUN14(VAR17->VAR41),

				(VAR17->VAR47 >> 8) & 0xFF, VAR17->VAR47 & 0xFF, VAR5->VAR18 + VAR32, &VAR23);

			break;

		case VAR48:

			VAR24 = FUN15(VAR5->VAR10, &VAR22);

			if (VAR24 == VAR35) {

				VAR23 = 1;

				((VAR49*)VAR5->VAR18)[VAR32] = (VAR49)VAR22;

				VAR24 = VAR50;

			}

			break;

		case VAR51:

			if (VAR17->VAR47 == VAR12->VAR52) {

				VAR24 = VAR50;

			} else {

				FUN16(VAR15, "");

				VAR24 = VAR25;

			}

			break;

		case VAR53:

			VAR23 = 1;

			((VAR49*)VAR5->VAR18)[VAR32] = 0;

			VAR24 = VAR50;

			break;

		case VAR54:

			VAR24 = FUN17(0, VAR5->VAR10, VAR17->VAR55, VAR17->VAR47);

			if (VAR24 == VAR35) {

				VAR24 = VAR50;

			}

			break;

		default:

			FUN16(VAR15, "");

			VAR24 = VAR25;

			break;

		}

		break;

	case VAR56:

		VAR24 =FUN18(VAR12->VAR45, VAR20.VAR46, VAR17->VAR41, VAR17->VAR43, VAR17->VAR47,

			VAR17->VAR55, VAR5->VAR18 + VAR32, VAR7,

			&VAR23, VAR20.VAR57);

		break;

	default:

		FUN16(VAR15, "");

		VAR24 = VAR25;

		break;

	}



	if (VAR24 == VAR50) {

		

		VAR20.VAR57->VAR58 = VAR59;

		

		

		VAR20.VAR57->VAR60 = (VAR61)VAR23;

		VAR24 = VAR35;

	}



	if (VAR24 == VAR35) {

		

		VAR7->VAR27 = VAR20;

		VAR7->VAR62 = (VAR49)VAR21;

	} else {

		FUN19(&VAR20);

	}



	return VAR24;

}