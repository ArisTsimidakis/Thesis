static int FUN1(struct VAR1 *VAR2,
		struct VAR3 *VAR4)
{
	char *VAR5;
	unsigned short VAR6;
	int VAR7 = 0, VAR8 = 0;
	unsigned long VAR9;
	struct VAR10 *VAR11;
	uint32_t VAR12 = (VAR13)VAR4->VAR14[5] << 24 |
		(VAR13)VAR4->VAR14[6] << 16 |
		(VAR13)VAR4->VAR14[7] << 8 |
		(VAR13)VAR4->VAR14[8];
	struct VAR15 *VAR16;

	VAR6 = FUN2(VAR4);
	VAR16 = FUN3(VAR4);
	VAR5 = FUN4(FUN5(VAR16)) + VAR16->VAR17;
	if (VAR6 > 1) {
		VAR7 = VAR18;
		goto VAR19;
	}
	VAR8 += VAR16->VAR20;
	if (VAR8 > sizeof(struct VAR10)) {
		VAR7 = VAR18;
		FUN6("", VAR21);
		goto VAR19;
	}
	VAR11 = (struct VAR10 *)VAR5;
	switch (VAR12) {
	case VAR22: {
		unsigned char *VAR23;
		VAR24 *VAR25;
		uint32_t VAR26 = 0;
		VAR23 = FUN7(VAR27, VAR28);
		if (!VAR23) {
			VAR7 = VAR18;
			FUN6("", VAR21);
			goto VAR19;
		}
		VAR25 = VAR23;
		FUN8(&VAR2->VAR29, VAR9);
		if (VAR2->VAR30 != VAR2->VAR31) {
			unsigned int VAR32 = VAR2->VAR30;
			unsigned int VAR33 = VAR2->VAR31;
			unsigned int VAR34 = FUN9(VAR33, VAR32, VAR35);

			VAR26 = FUN10(VAR33, VAR32, VAR35);
			if (VAR26 > VAR27)
				VAR26 = VAR27;

			if (VAR26 <= VAR34)
				memcpy(VAR25, VAR2->VAR36 + VAR32, VAR26);
			else {
				memcpy(VAR25, VAR2->VAR36 + VAR32, VAR34);
				memcpy(VAR25 + VAR34, VAR2->VAR36, VAR26 - VAR34);
			}
			VAR2->VAR30 = (VAR2->VAR30 + VAR26) % VAR35;
		}
		memcpy(VAR11->VAR37, VAR23,
			VAR26);
		if (VAR2->VAR38 & VAR39) {
			struct QBUFFER VAR40 *VAR41;
			VAR2->VAR38 &= ~VAR39;
			VAR41 = FUN11(VAR2);
			if (FUN12(VAR2, VAR41) == 0)
				VAR2->VAR38 |= VAR39;
		}
		FUN13(&VAR2->VAR29, VAR9);
		FUN14(VAR23);
		VAR11->VAR42.VAR43 = VAR26;
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		break;
 	}
 	case VAR49: {
 		unsigned char *VAR23;

		int32_t VAR50, VAR51;




 		VAR24 *VAR52, *VAR53;
 		VAR23 = FUN7(VAR27, VAR28);
 		if (!VAR23) {
			VAR7 = VAR18;
			goto VAR19;
 		}
 		VAR53 = VAR23;
 		VAR50 = VAR11->VAR42.VAR43;










 		memcpy(VAR53,
 			VAR11->VAR37, VAR50);
 		FUN8(&VAR2->VAR54, VAR9);
		if (VAR2->VAR55 != VAR2->VAR56) {
			struct VAR57 *VAR58 =
				(struct VAR57 *)VAR4->VAR59;
			FUN15(VAR2);
			
			VAR58->VAR60 = VAR61;
			VAR58->VAR62 = VAR63;
			VAR58->VAR64 = 0x0A;
			VAR58->VAR65 = 0x20;
			VAR58->VAR66 = 1;
			VAR7 = VAR18;
		} else {
			VAR52 = &VAR2->VAR67[VAR2->VAR55];
			VAR51 = VAR35 - VAR2->VAR55;
			if (VAR50 > VAR51) {
				memcpy(VAR52, VAR53, VAR51);
				VAR53 += VAR51;
				VAR50 -= VAR51;
				VAR2->VAR55 = 0;
				VAR52 = VAR2->VAR67;
			}
			memcpy(VAR52, VAR53, VAR50);
			VAR2->VAR55 += VAR50;
			VAR2->VAR55 %= VAR35;
			if (VAR2->VAR38 & VAR68) {
				VAR2->VAR38 &=
						~VAR68;
				FUN15(VAR2);
			}
		}
		FUN13(&VAR2->VAR54, VAR9);
		FUN14(VAR23);
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		break;
	}
	case VAR69: {
		VAR24 *VAR52 = VAR2->VAR36;

		FUN16(VAR2);
		FUN8(&VAR2->VAR29, VAR9);
		VAR2->VAR38 |= VAR70;
		VAR2->VAR30 = 0;
		VAR2->VAR31 = 0;
		memset(VAR52, 0, VAR35);
		FUN13(&VAR2->VAR29, VAR9);
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		break;
	}
	case VAR71: {
		VAR24 *VAR52 = VAR2->VAR67;
		FUN8(&VAR2->VAR54, VAR9);
		VAR2->VAR38 |= (VAR68 |
			VAR72);
		VAR2->VAR56 = 0;
		VAR2->VAR55 = 0;
		memset(VAR52, 0, VAR35);
		FUN13(&VAR2->VAR54, VAR9);
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		break;
	}
	case VAR73: {
		VAR24 *VAR52;
		FUN16(VAR2);
		FUN8(&VAR2->VAR29, VAR9);
		VAR2->VAR38 |= VAR70;
		VAR2->VAR30 = 0;
		VAR2->VAR31 = 0;
		VAR52 = VAR2->VAR36;
		memset(VAR52, 0, sizeof(struct VAR74));
		FUN13(&VAR2->VAR29, VAR9);
		FUN8(&VAR2->VAR54, VAR9);
		VAR2->VAR38 |= (VAR68 |
			VAR72);
		VAR2->VAR56 = 0;
		VAR2->VAR55 = 0;
		VAR52 = VAR2->VAR67;
		memset(VAR52, 0, sizeof(struct VAR74));
		FUN13(&VAR2->VAR54, VAR9);
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		break;
	}
	case VAR75: {
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR76;
		break;
	}
	case VAR77: {
		VAR78 *VAR79 = "";
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		memcpy(VAR11->VAR37,
			VAR79, (VAR80)strlen(VAR79));
		break;
	}
	case VAR81: {
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		FUN17(VAR2);
		break;
	}
	case VAR82: {
		if (VAR2->VAR44 == VAR45)
			VAR11->VAR42.VAR46 =
				VAR47;
		else
			VAR11->VAR42.VAR46 =
				VAR48;
		FUN18(VAR2);
		break;
	}
	default:
		VAR7 = VAR18;
		FUN6("", VAR21);
	}
VAR19:
	if (VAR6) {
		struct VAR15 *VAR16 = FUN3(VAR4);
		FUN19(VAR5 - VAR16->VAR17);
	}
	return VAR7;
}