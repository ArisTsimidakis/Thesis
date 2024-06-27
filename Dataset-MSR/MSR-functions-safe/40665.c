static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
		void *VAR5, struct VAR6 *VAR7, int VAR8,
		__be16 VAR9, unsigned char *VAR10, int VAR11)
{
	union tpacket_uhdr VAR12;
	int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
	struct socket *VAR19 = VAR2->VAR20.VAR21;
	struct VAR22 *VAR22;
	void *VAR23;
	int VAR24;

	VAR12.VAR25 = VAR5;

	VAR4->VAR26 = VAR9;
	VAR4->VAR7 = VAR7;
	VAR4->VAR27 = VAR2->VAR20.VAR28;
	VAR4->VAR29 = VAR2->VAR20.VAR30;
	FUN2(&VAR2->VAR20, &FUN3(VAR4)->VAR31);
	FUN3(VAR4)->VAR32 = VAR12.VAR25;

	switch (VAR2->VAR33) {
	case VAR34:
		VAR16 = VAR12.VAR35->VAR16;
		break;
	default:
		VAR16 = VAR12.VAR36->VAR16;
		break;
	}
	if (FUN4(VAR16 > VAR8)) {
		FUN5("", VAR16, VAR8);
		return -VAR37;
	}

	FUN6(VAR4, VAR11);
	FUN7(VAR4);
	FUN8(VAR4, 0);

	if (VAR2->VAR38) {
		int VAR39, VAR40, VAR41;
		VAR39 = VAR2->VAR42 - sizeof(struct VAR43);
		VAR40 = VAR2->VAR44.VAR45 - VAR16;
		if (VAR19->VAR46 == VAR47) {
			switch (VAR2->VAR33) {
			case VAR34:
				VAR41 = VAR12.VAR35->VAR48;
				break;
			default:
				VAR41 = VAR12.VAR36->VAR48;
				break;
			}
		} else {
			switch (VAR2->VAR33) {
			case VAR34:
				VAR41 = VAR12.VAR35->VAR49;
				break;
			default:
				VAR41 = VAR12.VAR36->VAR49;
				break;
			}
		}
		if (FUN4((VAR41 < VAR39) || (VAR40 < VAR41)))
			return -VAR50;
		VAR23 = VAR12.VAR25 + VAR41;
	} else {
		VAR23 = VAR12.VAR25 + VAR2->VAR42 - sizeof(struct VAR43);
	}
	VAR13 = VAR16;

	if (VAR19->VAR46 == VAR47) {
		VAR24 = FUN9(VAR4, VAR7, FUN10(VAR9), VAR10,
				NULL, VAR16);
		if (FUN4(VAR24 < 0))
			return -VAR50;
	} else if (VAR7->VAR51) {
		
		if (FUN4(VAR16 <= VAR7->VAR51)) {
			FUN5("",
			       VAR16, VAR7->VAR51);
			return -VAR50;
		}

		FUN11(VAR4, VAR7->VAR51);
		VAR24 = FUN12(VAR4, 0, VAR23,
				VAR7->VAR51);
		if (FUN4(VAR24))
			return VAR24;

		VAR23 += VAR7->VAR51;
		VAR13 -= VAR7->VAR51;
	}

	VAR14 = FUN13(VAR23);
	VAR18 = VAR52 - VAR14;
	VAR15 = ((VAR13 > VAR18) ? VAR18 : VAR13);

	VAR4->VAR53 = VAR13;
	VAR4->VAR15 += VAR13;
	VAR4->VAR54 += VAR13;
	FUN14(VAR13, &VAR2->VAR20.VAR55);

	while (FUN15(VAR13)) {
		VAR17 = FUN3(VAR4)->VAR17;

		if (FUN4(VAR17 >= VAR56)) {
			FUN5("",
			       VAR56);
			return -VAR57;
		}

		VAR22 = FUN16(VAR23);
		VAR23 += VAR15;
		FUN17(VAR22);
		FUN18(VAR22);
		FUN19(VAR4, VAR17, VAR22, VAR14, VAR15);
		VAR13 -= VAR15;
		VAR14 = 0;
		VAR18 = VAR52;
		VAR15 = ((VAR13 > VAR18) ? VAR18 : VAR13);
	}

	return VAR16;
}