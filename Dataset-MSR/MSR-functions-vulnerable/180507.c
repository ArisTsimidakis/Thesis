static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4,
		    char VAR5 *VAR6, int VAR5 *VAR7, unsigned int VAR8)
{
	struct VAR9 *VAR10 = FUN2(VAR2);
	int VAR11;
	int VAR12;

	if (FUN3(VAR4))
		return FUN4(VAR2, VAR4, VAR6, VAR7);

	if (FUN5(VAR11, VAR7))
		return -VAR13;
	switch (VAR4) {
	case VAR14:
		if (VAR2->VAR15 != VAR16 &&
		    VAR2->VAR15 != VAR17 &&
		    VAR2->VAR15 != VAR18)
			return -VAR19;
		if (VAR2->VAR20 != VAR21)
			return -VAR22;
		VAR12 = VAR2->VAR23;
		break;
	case VAR24:
	{
		struct group_filter VAR25;
		int VAR26;

		if (VAR11 < FUN6(0))
			return -VAR27;
		if (FUN7(&VAR25, VAR6, FUN6(0)))
			return -VAR13;
		if (VAR25.VAR28.VAR29 != VAR30)
			return -VAR31;
		FUN8(VAR2);
		VAR26 = FUN9(VAR2, &VAR25,
			(struct group_filter VAR5 *)VAR6, VAR7);
		FUN10(VAR2);
		return VAR26;
	}

	case VAR32:
	{
		struct msghdr VAR33;
		struct VAR34 *VAR35;

		if (VAR2->VAR36 != VAR37)
			return -VAR19;

		VAR33.VAR38 = VAR6;
		VAR33.VAR39 = VAR11;
		VAR33.VAR40 = VAR8;

		FUN8(VAR2);
		VAR35 = VAR10->VAR41;
		if (VAR35)
			FUN11(VAR2, &VAR33, VAR35);
		FUN10(VAR2);
		if (!VAR35) {
			if (VAR10->VAR42.VAR43.VAR44) {
				struct in6_pktinfo VAR45;
				VAR45.VAR46 = VAR10->VAR47 ? VAR10->VAR47 :
					VAR10->VAR48.VAR46;
				VAR45.VAR49 = VAR10->VAR47 ? VAR2->VAR50 : VAR10->VAR48.VAR49;
				FUN12(&VAR33, VAR51, VAR52, sizeof(VAR45), &VAR45);
			}
			if (VAR10->VAR42.VAR43.VAR53) {
				int VAR54 = VAR10->VAR55;
				FUN12(&VAR33, VAR51, VAR56, sizeof(VAR54), &VAR54);
			}
			if (VAR10->VAR42.VAR43.VAR57) {
				int VAR58 = (int)FUN13(VAR10->VAR59);

				FUN12(&VAR33, VAR51, VAR60, sizeof(VAR58), &VAR58);
			}
			if (VAR10->VAR42.VAR43.VAR61) {
				struct in6_pktinfo VAR45;
				VAR45.VAR46 = VAR10->VAR47 ? VAR10->VAR47 :
					VAR10->VAR48.VAR46;
				VAR45.VAR49 = VAR10->VAR47 ? VAR2->VAR50 :
								     VAR10->VAR48.VAR49;
				FUN12(&VAR33, VAR51, VAR62, sizeof(VAR45), &VAR45);
			}
			if (VAR10->VAR42.VAR43.VAR63) {
				int VAR54 = VAR10->VAR55;
				FUN12(&VAR33, VAR51, VAR64, sizeof(VAR54), &VAR54);
			}
			if (VAR10->VAR42.VAR43.VAR65) {
				__be32 VAR66 = VAR10->VAR59;

				FUN12(&VAR33, VAR51, VAR67, sizeof(VAR66), &VAR66);
			}
		}
		VAR11 -= VAR33.VAR39;
		return FUN14(VAR11, VAR7);
	}
	case VAR68:
	{
		struct VAR69 *VAR70;

		VAR12 = 0;
		FUN15();
		VAR70 = FUN16(VAR2);
		if (VAR70)
			VAR12 = FUN17(VAR70);
		FUN18();
		if (!VAR12)
			return -VAR22;
		break;
	}

	case VAR71:
		VAR12 = VAR2->VAR72;
		break;

	case VAR73:
		VAR12 = VAR10->VAR42.VAR43.VAR44;
		break;

	case VAR62:
		VAR12 = VAR10->VAR42.VAR43.VAR61;
		break;

	case VAR74:
		VAR12 = VAR10->VAR42.VAR43.VAR53;
		break;

	case VAR64:
		VAR12 = VAR10->VAR42.VAR43.VAR63;
		break;

	case VAR75:
		VAR12 = VAR10->VAR42.VAR43.VAR76;
		break;

	case VAR77:
		VAR12 = VAR10->VAR42.VAR43.VAR78;
		break;

	case VAR79:
	case VAR80:
 	case VAR81:
 	case VAR82:
 	{


 
 		FUN8(VAR2);

		VAR11 = FUN19(VAR2, VAR10->VAR83,

					     VAR4, VAR6, VAR11);




 		FUN10(VAR2);
 		
 		if (VAR11 < 0)
			return VAR11;
		return FUN14(VAR11, VAR7);
	}

	case VAR84:
		VAR12 = VAR10->VAR42.VAR43.VAR85;
		break;

	case VAR86:
		VAR12 = VAR10->VAR42.VAR43.VAR87;
		break;

	case VAR88:
		VAR12 = VAR10->VAR42.VAR43.VAR89;
		break;

	case VAR90:
		VAR12 = VAR10->VAR42.VAR43.VAR91;
		break;

	case VAR60:
		VAR12 = VAR10->VAR58;
		break;

	case VAR92:
		VAR12 = VAR10->VAR42.VAR43.VAR57;
		break;

	case VAR67:
		VAR12 = VAR10->VAR42.VAR43.VAR65;
		break;

	case VAR93:
		VAR12 = VAR10->VAR42.VAR43.VAR94;
		break;

	case VAR95:
	{
		struct VAR69 *VAR70;
		struct ip6_mtuinfo VAR96;

		if (VAR11 < sizeof(VAR96))
			return -VAR27;

		VAR11 = sizeof(VAR96);
		memset(&VAR96, 0, sizeof(VAR96));

		FUN15();
		VAR70 = FUN16(VAR2);
		if (VAR70)
			VAR96.VAR97 = FUN17(VAR70);
		FUN18();
		if (!VAR96.VAR97)
			return -VAR22;

		if (FUN14(VAR11, VAR7))
			return -VAR13;
		if (FUN20(VAR6, &VAR96, VAR11))
			return -VAR13;

		return 0;
	}

	case VAR98:
		VAR12 = FUN21(VAR2)->VAR99;
		break;

	case VAR100:
		VAR12 = VAR10->VAR42.VAR43.VAR101;
		break;

	case VAR102:
	case VAR103:
	{
		struct VAR69 *VAR70;

		if (VAR4 == VAR102)
			VAR12 = VAR10->VAR104;
		else
			VAR12 = VAR10->VAR55;

		if (VAR12 < 0) {
			FUN15();
			VAR70 = FUN16(VAR2);
			if (VAR70)
				VAR12 = FUN22(VAR70);
			FUN18();
		}

		if (VAR12 < 0)
			VAR12 = FUN23(VAR2)->VAR105.VAR106->VAR104;
		break;
	}

	case VAR107:
		VAR12 = VAR10->VAR108;
		break;

	case VAR109:
		VAR12 = VAR10->VAR47;
		break;

	case VAR110:
		VAR12 = (__force int)FUN24((VAR111) VAR10->VAR112);
		break;

	case VAR113:
		VAR12 = VAR10->VAR114;
		break;

	case VAR115:
		VAR12 = VAR10->VAR116;
		break;

	case VAR117:
		VAR12 = VAR10->VAR118;
		break;

	case VAR119:
	{
		struct in6_flowlabel_req VAR120;
		int VAR8;

		if (VAR11 < sizeof(VAR120))
			return -VAR27;

		if (FUN7(&VAR120, VAR6, sizeof(VAR120)))
			return -VAR13;

		if (VAR120.VAR121 != VAR122)
			return -VAR27;

		VAR11 = sizeof(VAR120);
		VAR8 = VAR120.VAR123;

		memset(&VAR120, 0, sizeof(VAR120));

		VAR12 = FUN25(VAR2, &VAR120, VAR8);
		if (VAR12 < 0)
			return VAR12;

		if (FUN14(VAR11, VAR7))
			return -VAR13;
		if (FUN20(VAR6, &VAR120, VAR11))
			return -VAR13;

		return 0;
	}

	case VAR124:
		VAR12 = 0;

		if (VAR10->VAR125 & VAR126)
			VAR12 |= VAR126;
		else if (VAR10->VAR125 & VAR127)
			VAR12 |= VAR127;
		else {
			
			VAR12 |= VAR128;
		}

		if (VAR10->VAR125 & VAR129)
			VAR12 |= VAR129;
		else
			VAR12 |= VAR130;
		break;

	case VAR131:
		VAR12 = VAR10->VAR132;
		break;

	case VAR133:
		VAR12 = VAR10->VAR134;
		break;

	case VAR135:
		VAR12 = VAR10->VAR136;
		break;

	default:
		return -VAR19;
	}
	VAR11 = FUN26(unsigned int, sizeof(int), VAR11);
	if (FUN14(VAR11, VAR7))
		return -VAR13;
	if (FUN20(VAR6, &VAR12, VAR11))
		return -VAR13;
	return 0;
}