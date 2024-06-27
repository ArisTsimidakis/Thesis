static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4,
			    char VAR5 *VAR6, int VAR5 *VAR7)
{
	struct VAR8 *VAR9 = FUN2(VAR2);
	int VAR10;
	int VAR11;

	if (VAR3 != VAR12)
		return -VAR13;

	if (FUN3(VAR4))
		return FUN4(VAR2, VAR4, VAR6, VAR7);

	if (FUN5(VAR11, VAR7))
		return -VAR14;
	if (VAR11 < 0)
		return -VAR15;

	FUN6(VAR2);

	switch (VAR4) {
 	case VAR16:
 	{
 		unsigned char VAR17[sizeof(struct VAR18)+40];

		struct VAR18 * VAR19 = (struct VAR18 *)VAR17;










 		VAR19->VAR7 = 0;

		if (VAR9->VAR19)

			memcpy(VAR17, VAR9->VAR19,

			       sizeof(struct VAR18)+

			       VAR9->VAR19->VAR7);








 		FUN7(VAR2);
 
 		if (VAR19->VAR7 == 0)
			return FUN8(0, VAR7);

		FUN9(VAR19);

		VAR11 = FUN10(unsigned int, VAR11, VAR19->VAR7);
		if (FUN8(VAR11, VAR7))
			return -VAR14;
		if (FUN11(VAR6, VAR19->VAR20, VAR11))
			return -VAR14;
		return 0;
	}
	case VAR21:
		VAR10 = (VAR9->VAR22 & VAR23) != 0;
		break;
	case VAR24:
		VAR10 = (VAR9->VAR22 & VAR25) != 0;
		break;
	case VAR26:
		VAR10 = (VAR9->VAR22 & VAR27) != 0;
		break;
	case VAR28:
		VAR10 = (VAR9->VAR22 & VAR29) != 0;
		break;
	case VAR30:
		VAR10 = (VAR9->VAR22 & VAR31) != 0;
		break;
	case VAR32:
		VAR10 = (VAR9->VAR22 & VAR33) != 0;
		break;
	case VAR34:
		VAR10 = (VAR9->VAR22 & VAR35) != 0;
		break;
	case VAR36:
		VAR10 = VAR9->VAR37;
		break;
	case VAR38:
		VAR10 = (VAR9->VAR39 == -1 ?
		       VAR40 :
		       VAR9->VAR39);
		break;
	case VAR41:
		VAR10 = VAR9->VAR42;
		break;
	case VAR43:
		VAR10 = VAR9->VAR44;
		break;
	case VAR45:
		VAR10 = VAR9->VAR46;
		break;
	case VAR47:
	{
		struct VAR48 *VAR49;
		VAR10 = 0;
		VAR49 = FUN12(VAR2);
		if (VAR49) {
			VAR10 = FUN13(VAR49);
			FUN14(VAR49);
		}
		if (!VAR10) {
			FUN7(VAR2);
			return -VAR50;
		}
		break;
	}
	case VAR51:
		VAR10 = VAR9->VAR52;
		break;
	case VAR53:
		VAR10 = VAR9->VAR54;
		break;
	case VAR55:
		VAR10 = VAR9->VAR56;
		break;
	case VAR57:
	{
		struct in_addr VAR58;
		VAR11 = FUN10(unsigned int, VAR11, sizeof(struct VAR59));
		VAR58.VAR60 = VAR9->VAR61;
		FUN7(VAR2);

		if (FUN8(VAR11, VAR7))
			return -VAR14;
		if (FUN11(VAR6, &VAR58, VAR11))
			return -VAR14;
		return 0;
	}
	case VAR62:
	{
		struct ip_msfilter VAR63;
		int VAR64;

		if (VAR11 < FUN15(0)) {
			FUN7(VAR2);
			return -VAR15;
		}
		if (FUN16(&VAR63, VAR6, FUN15(0))) {
			FUN7(VAR2);
			return -VAR14;
		}
		VAR64 = FUN17(VAR2, &VAR63,
				   (struct ip_msfilter VAR5 *)VAR6, VAR7);
		FUN7(VAR2);
		return VAR64;
	}
	case VAR65:
	{
		struct group_filter VAR66;
		int VAR64;

		if (VAR11 < FUN18(0)) {
			FUN7(VAR2);
			return -VAR15;
		}
		if (FUN16(&VAR66, VAR6, FUN18(0))) {
			FUN7(VAR2);
			return -VAR14;
		}
		VAR64 = FUN19(VAR2, &VAR66,
				   (struct group_filter VAR5 *)VAR6,
				   VAR7);
		FUN7(VAR2);
		return VAR64;
	}
	case VAR67:
		VAR10 = VAR9->VAR68;
		break;
	case VAR69:
	{
		struct msghdr VAR70;

		FUN7(VAR2);

		if (VAR2->VAR71 != VAR72)
			return -VAR73;

		VAR70.VAR74 = VAR6;
		VAR70.VAR75 = VAR11;
		VAR70.VAR76 = 0;

		if (VAR9->VAR22 & VAR23) {
			struct in_pktinfo VAR77;

			VAR77.VAR78.VAR60 = VAR9->VAR79;
			VAR77.VAR80.VAR60 = VAR9->VAR79;
			VAR77.VAR81 = VAR9->VAR82;
			FUN20(&VAR70, VAR12, VAR21, sizeof(VAR77), &VAR77);
		}
		if (VAR9->VAR22 & VAR25) {
			int VAR83 = VAR9->VAR54;
			FUN20(&VAR70, VAR12, VAR38, sizeof(VAR83), &VAR83);
		}
		VAR11 -= VAR70.VAR75;
		return FUN8(VAR11, VAR7);
	}
	case VAR84:
		VAR10 = VAR9->VAR85;
		break;
	case VAR86:
		VAR10 = VAR9->VAR87;
		break;
	case VAR88:
		VAR10 = VAR9->VAR89;
		break;
	default:
		FUN7(VAR2);
		return -VAR73;
	}
	FUN7(VAR2);

	if (VAR11 < sizeof(int) && VAR11 > 0 && VAR10 >= 0 && VAR10 <= 255) {
		unsigned char VAR90 = (unsigned char)VAR10;
		VAR11 = 1;
		if (FUN8(VAR11, VAR7))
			return -VAR14;
		if (FUN11(VAR6, &VAR90, 1))
			return -VAR14;
	} else {
		VAR11 = FUN10(unsigned int, sizeof(int), VAR11);
		if (FUN8(VAR11, VAR7))
			return -VAR14;
		if (FUN11(VAR6, &VAR10, VAR11))
			return -VAR14;
	}
	return 0;
}