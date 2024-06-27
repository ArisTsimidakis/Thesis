static int FUN1(VAR1 *VAR2,struct VAR3 *VAR4,
			     const VAR5 *VAR6, size_t VAR7, int VAR8)
{
	void *VAR9 = VAR4->VAR9;
	int (*VAR10)(VAR1 *VAR11, void *VAR12, const VAR5 *VAR13,
			     size_t VAR14, int VAR15);
	VAR16 *VAR17 = (VAR16 *) VAR4->VAR12;
	int VAR18 = 0;

	VAR10 = VAR9;

	FUN2(VAR2, VAR19, "",
		VAR8, VAR8, "", VAR4->VAR20,
		FUN3(VAR6, VAR7 > 16  ? 16 : VAR7),
		VAR7 > 16 ? "" : "");

	switch (VAR4->VAR21) {
	case VAR22:
		if (VAR9 != NULL)
			VAR18 = FUN4(VAR2, (struct VAR3 *) VAR9, VAR6,
				       VAR7, NULL, NULL, 0, VAR8 + 1);
		break;
	case VAR23:
		break;
	case VAR24:
		if (VAR9 != NULL) {
			if (VAR7 != 1) {
				FUN2(VAR2, VAR19,
					 ""VAR25"",
					 VAR7);
				VAR18 = VAR26;
			} else
				*((int *) VAR9) = VAR6[0] ? 1 : 0;
		}
		break;
	case VAR27:
	case VAR28:
		if (VAR9 != NULL) {
			VAR18 = FUN5(VAR6, VAR7, (int *) VAR4->VAR9);
			FUN2(VAR2, VAR19, "", VAR8, VAR8, "",
					VAR4->VAR20, *((int *) VAR4->VAR9));
		}
		break;
	case VAR29:
	case VAR30:
		if (VAR9 != NULL) {
			int VAR31 = VAR4->VAR21 == VAR30 ? 1 : 0;
			assert(VAR17 != NULL);
			if (VAR7 < 1) {
				VAR18 = VAR26;
				break;
			}
			if (VAR4->VAR32 & VAR33) {
				VAR5 **VAR34 = (VAR5 **) VAR9;
				*VAR34 = malloc(VAR7-1);
				if (*VAR34 == NULL) {
					VAR18 = VAR35;
					break;
				}
				*VAR17 = VAR7-1;
				VAR9 = *VAR34;
			}
			VAR18 = FUN6(VAR6, VAR7, (VAR5 *) VAR9, *VAR17, VAR31);
			if (VAR18 >= 0) {
				*VAR17 = VAR18;
				VAR18 = 0;
			}
		}
		break;
	case VAR36:
		if (VAR9 != NULL)
			VAR18 = FUN7(VAR6, VAR7, (VAR5 *) VAR9, *VAR17);
		break;
	case VAR37:
		if (VAR9 != NULL) {
			size_t VAR38;
			assert(VAR17 != NULL);
 
 			
 			if ((VAR4->VAR32 & VAR39)

			 && VAR6[0] == 0x00 && VAR7 > 1) {


 				VAR7--;
 				VAR6++;
 			}

			
			if (VAR4->VAR32 & VAR33) {
				VAR5 **VAR34 = (VAR5 **) VAR9;
				*VAR34 = malloc(VAR7);
				if (*VAR34 == NULL) {
					VAR18 = VAR35;
					break;
				}
				VAR38 = *VAR17 = VAR7;
				VAR9 = *VAR34;
			} else
				VAR38 = VAR7 > *VAR17 ? *VAR17 : VAR7;

			memcpy(VAR9, VAR6, VAR38);
			*VAR17 = VAR38;
		}
		break;
	case VAR40:
		if (VAR9 != NULL) {
			size_t VAR38;
			assert(VAR17 != NULL);
			if (VAR4->VAR32 & VAR33) {
				VAR5 **VAR34 = (VAR5 **) VAR9;
				*VAR34 = malloc(VAR7);
				if (*VAR34 == NULL) {
					VAR18 = VAR35;
					break;
				}
				VAR38 = *VAR17 = VAR7;
				VAR9 = *VAR34;
			} else
				VAR38 = VAR7 > *VAR17 ? *VAR17 : VAR7;

			memcpy(VAR9, VAR6, VAR38);
			*VAR17 = VAR38;
		}
		break;
	case VAR41:
		if (VAR9 != NULL)
			VAR18 = FUN8(VAR6, VAR7, (struct VAR42 *) VAR9);
		break;
	case VAR43:
	case VAR44:
		if (VAR9 != NULL) {
			assert(VAR17 != NULL);
			if (VAR4->VAR32 & VAR33) {
				VAR5 **VAR34 = (VAR5 **) VAR9;
				*VAR34 = malloc(VAR7+1);
				if (*VAR34 == NULL) {
					VAR18 = VAR35;
					break;
				}
				*VAR17 = VAR7+1;
				VAR9 = *VAR34;
			}
			VAR18 = FUN9(VAR6, VAR7, (VAR5 *) VAR9, VAR17);
			if (VAR4->VAR32 & VAR33) {
				*VAR17 -= 1;
			}
		}
		break;
	case VAR45:
		if (VAR4->VAR9 != NULL)
			VAR18 = FUN10(VAR2, VAR6, VAR7, (VAR46 *) VAR9, VAR8);
		break;
	case VAR47:
		if (VAR4->VAR9 != NULL) {
			struct VAR48 *VAR49 = (struct VAR48 *) VAR9;
			size_t VAR38 = VAR7 > sizeof(VAR49->VAR50) ? sizeof(VAR49->VAR50) : VAR7;

			memcpy(VAR49->VAR50, VAR6, VAR38);
			VAR49->VAR17 = VAR38;
		}
		break;
	case VAR51:
		if (VAR4->VAR9 != NULL)
			VAR18 = FUN11(VAR2, VAR6, VAR7, (struct VAR52 *) VAR9, VAR8);
		break;
	case VAR53:
		if (VAR4->VAR9 != NULL)
			VAR18 = FUN12(VAR2, VAR6, VAR7, (struct VAR54 *) VAR9, VAR8);
		break;
	case VAR55:
		if (VAR4->VAR9 != NULL)
			VAR18 = FUN13(VAR2, VAR6, VAR7, (VAR56 ***)VAR4->VAR9, VAR17, VAR8);
		break;
	case VAR57:
		if (VAR4->VAR9 != NULL)
			VAR18 = FUN14(VAR2, VAR4->VAR12, VAR6, VAR7, VAR8);
		break;
	default:
		FUN2(VAR2, VAR19, "", VAR4->VAR21);
		return VAR26;
	}
	if (VAR18) {
		FUN2(VAR2, VAR19, "", VAR4->VAR20,
		      FUN15(VAR18));
		return VAR18;
	}
	VAR4->VAR32 |= VAR58;
	return 0;
}