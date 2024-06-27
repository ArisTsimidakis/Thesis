FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	uint64_t VAR5 = VAR4->VAR6.VAR7;
	uint64_t VAR8;
	float VAR9, VAR10;
	double VAR11, VAR12;
	int VAR13;
	union VAR14 *VAR15 = &VAR2->VAR16;

	switch (VAR4->VAR17) {
	case VAR18:
		VAR8 = VAR15->VAR19;
		break;

	case VAR20:
	case VAR21:
	case VAR22:
		VAR8 = VAR15->VAR23;
		break;

	case VAR24:
	case VAR25:
	case VAR26:
	case VAR27:
	case VAR28:
	case VAR29:
	case VAR30:
	case VAR31:
	case VAR32:
	case VAR33:
	case VAR34:
	case VAR35:
		VAR8 = VAR15->VAR5;
		break;

	case VAR36:
	case VAR37:
	case VAR38:
	case VAR39:
	case VAR40:
	case VAR41:
	case VAR42:
	case VAR43:
	case VAR44:
	case VAR45:
	case VAR46:
	case VAR47:
		VAR8 = VAR15->VAR7;
		break;

	case VAR48:
	case VAR49:
	case VAR50:
		VAR9 = VAR4->VAR6.VAR51;
		VAR10 = VAR15->VAR51;
		switch (VAR4->VAR52) {
		case '':
			VAR13 = 1;
			break;

		case '':
			VAR13 = VAR10 != VAR9;
			break;

		case '':
			VAR13 = VAR10 == VAR9;
			break;

		case '':
			VAR13 = VAR10 > VAR9;
			break;

		case '':
			VAR13 = VAR10 < VAR9;
			break;

		default:
			FUN2(VAR2, "",
			    VAR4->VAR52);
			return -1;
		}
		return VAR13;

	case VAR53:
	case VAR54:
	case VAR55:
		VAR11 = VAR4->VAR6.VAR56;
		VAR12 = VAR15->VAR56;
		switch (VAR4->VAR52) {
		case '':
			VAR13 = 1;
			break;

		case '':
			VAR13 = VAR12 != VAR11;
			break;

		case '':
			VAR13 = VAR12 == VAR11;
			break;

		case '':
			VAR13 = VAR12 > VAR11;
			break;

		case '':
			VAR13 = VAR12 < VAR11;
			break;

		default:
			FUN2(VAR2, "", VAR4->VAR52);
			return -1;
		}
		return VAR13;

	case VAR57:
	case VAR58:
		VAR5 = 0;
		VAR8 = 0;
		break;

	case VAR59:
	case VAR60:
		VAR5 = 0;
		VAR8 = FUN3(VAR4->VAR6.VAR61, VAR15->VAR61, (VAR62)VAR4->VAR63, VAR4->VAR64);
		break;

	case VAR65:
	case VAR66:
		VAR5 = 0;
		VAR8 = FUN4(VAR4->VAR6.VAR61, VAR15->VAR61, (VAR62)VAR4->VAR63, VAR4->VAR64);
		break;

	case VAR67: { 
		size_t VAR68;
		size_t VAR69;

		if (VAR2->VAR70.VAR61 == NULL)
			return 0;

		VAR68 = FUN5(VAR4->VAR63, sizeof(VAR4->VAR6.VAR61));
		VAR5 = 0;
		VAR8 = 0;

		for (VAR69 = 0; VAR4->VAR71 == 0 || VAR69 < VAR4->VAR71; VAR69++) {
			if (VAR68 + VAR69 > VAR2->VAR70.VAR72)
				break;

			VAR8 = FUN3(VAR4->VAR6.VAR61, VAR2->VAR70.VAR61 + VAR69, VAR68, VAR4->VAR64);
			if (VAR8 == 0) {	
				VAR2->VAR70.VAR73 += VAR69;
				break;
			}
		}
		break;
	}
	case VAR74: {
		int VAR75;
		file_regex_t VAR76;

		if (VAR2->VAR70.VAR61 == NULL)
			return 0;

		VAR5 = 0;
		VAR75 = FUN6(&VAR76, VAR4->VAR6.VAR61,
		    VAR77|VAR78|
		    ((VAR4->VAR64 & VAR79) ? VAR80 : 0));
		if (VAR75) {
 			FUN7(&VAR76, VAR75, VAR2);
 			VAR8 = (VAR81)-1;
 		} else {






 			regmatch_t VAR82[1];








 #ifndef VAR83
 #define	REG_STARTEND	0

			size_t VAR5 = VAR2->VAR70.VAR72 - 1;

			char VAR84 = VAR2->VAR70.VAR61[VAR5];

			((char *)(VAR85)VAR2->VAR70.VAR61)[VAR5] = '';








 #else
 			VAR82[0].VAR86 = 0;

			VAR82[0].VAR87 = VAR2->VAR70.VAR72;


 #endif
 			VAR75 = FUN8(&VAR76, (const char *)VAR2->VAR70.VAR61,
 			    1, VAR82, VAR83);
#if VAR83 == 0
			((char *)(VAR85)VAR2->VAR70.VAR61)[VAR5] = VAR84;
#endif
			switch (VAR75) {
			case 0:
				VAR2->VAR70.VAR61 += (int)VAR82[0].VAR86;
				VAR2->VAR70.VAR73 += (VAR62)VAR82[0].VAR86;
				VAR2->VAR70.VAR88 =
				    (VAR62)(VAR82[0].VAR87 - VAR82[0].VAR86);
				VAR8 = 0;
				break;

			case VAR89:
				VAR8 = 1;
				break;

			default:
				FUN7(&VAR76, VAR75, VAR2);
				VAR8 = (VAR81)-1;
				break;
			}
		}
		FUN9(&VAR76);
		if (VAR8 == (VAR81)-1)
			return -1;
		break;
	}
	case VAR90:
	case VAR91:
	case VAR92:
		return 1;
	default:
		FUN2(VAR2, "", VAR4->VAR17);
		return -1;
	}

	VAR8 = FUN10(VAR2, VAR4, VAR8);

	switch (VAR4->VAR52) {
	case '':
		if ((VAR2->VAR93 & VAR94) != 0)
			(void) fprintf(VAR95, "" VAR96
			    "", (unsigned long long)VAR8);
		VAR13 = 1;
		break;

	case '':
		VAR13 = VAR8 != VAR5;
		if ((VAR2->VAR93 & VAR94) != 0)
			(void) fprintf(VAR95, "" VAR96 ""
			    VAR96 "", (unsigned long long)VAR8,
			    (unsigned long long)VAR5, VAR13);
		break;

	case '':
		VAR13 = VAR8 == VAR5;
		if ((VAR2->VAR93 & VAR94) != 0)
			(void) fprintf(VAR95, "" VAR96 ""
			    VAR96 "", (unsigned long long)VAR8,
			    (unsigned long long)VAR5, VAR13);
		break;

	case '':
		if (VAR4->VAR97 & VAR98) {
			VAR13 = VAR8 > VAR5;
			if ((VAR2->VAR93 & VAR94) != 0)
				(void) fprintf(VAR95, "" VAR96
				    "" VAR96 "",
				    (unsigned long long)VAR8,
				    (unsigned long long)VAR5, VAR13);
		}
		else {
			VAR13 = (VAR99) VAR8 > (VAR99) VAR5;
			if ((VAR2->VAR93 & VAR94) != 0)
				(void) fprintf(VAR95, "" VAR96
				    "" VAR96 "",
				    (long long)VAR8, (long long)VAR5, VAR13);
		}
		break;

	case '':
		if (VAR4->VAR97 & VAR98) {
			VAR13 = VAR8 < VAR5;
			if ((VAR2->VAR93 & VAR94) != 0)
				(void) fprintf(VAR95, "" VAR96
				    "" VAR96 "",
				    (unsigned long long)VAR8,
				    (unsigned long long)VAR5, VAR13);
		}
		else {
			VAR13 = (VAR99) VAR8 < (VAR99) VAR5;
			if ((VAR2->VAR93 & VAR94) != 0)
				(void) fprintf(VAR95, "" VAR96
				    "" VAR96 "",
				     (long long)VAR8, (long long)VAR5, VAR13);
		}
		break;

	case '':
		VAR13 = (VAR8 & VAR5) == VAR5;
		if ((VAR2->VAR93 & VAR94) != 0)
			(void) fprintf(VAR95, "" VAR96 ""
			    VAR96 "" VAR96
			    "", (unsigned long long)VAR8,
			    (unsigned long long)VAR5, (unsigned long long)VAR5,
			    VAR13);
		break;

	case '':
		VAR13 = (VAR8 & VAR5) != VAR5;
		if ((VAR2->VAR93 & VAR94) != 0)
			(void) fprintf(VAR95, "" VAR96 ""
			    VAR96 "" VAR96
			    "", (unsigned long long)VAR8,
			    (unsigned long long)VAR5, (unsigned long long)VAR5,
			    VAR13);
		break;

	default:
		FUN2(VAR2, "",
		    VAR4->VAR52);
		return -1;
	}

	return VAR13;
}