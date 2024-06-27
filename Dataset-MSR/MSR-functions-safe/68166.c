static int FUN1(struct VAR1 *VAR2, int VAR3,
			    int VAR4, char VAR5 *VAR6, unsigned int VAR7)
{
	struct VAR8 *VAR9 = FUN2(VAR2);
	struct VAR10 *VAR10 = FUN3(VAR2);
	int VAR11 = 0, VAR12;
	bool VAR13 = FUN4(VAR4);

	switch (VAR4) {
	case VAR14:
	case VAR15:
	case VAR16:
	case VAR17:
	case VAR18:
	case VAR19:
	case VAR20:
	case VAR21:
	case VAR22:
	case VAR23:
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
	case VAR36:
	case VAR37:
		if (VAR7 >= sizeof(int)) {
			if (FUN5(VAR11, (int VAR5 *) VAR6))
				return -VAR38;
		} else if (VAR7 >= sizeof(char)) {
			unsigned char VAR39;

			if (FUN5(VAR39, (unsigned char VAR5 *) VAR6))
				return -VAR38;
			VAR11 = (int) VAR39;
		}
	}

	

	if (FUN6(VAR4))
		return FUN7(VAR2, VAR4, VAR6, VAR7);

	VAR12 = 0;
	if (VAR13)
		FUN8();
	FUN9(VAR2);

	switch (VAR4) {
	case VAR40:
	{
		struct VAR41 *VAR42, *VAR43 = NULL;

		if (VAR7 > 40)
			goto VAR44;
		VAR12 = FUN10(FUN3(VAR2), &VAR43,
					       VAR6, VAR7);
		if (VAR12)
			break;
		VAR42 = FUN11(VAR9->VAR45,
						FUN12(VAR2));
		if (VAR9->VAR46) {
			struct VAR47 *VAR48 = FUN13(VAR2);
#if FUN14(VAR49)
			if (VAR2->VAR50 == VAR51 ||
			    (!((1 << VAR2->VAR52) &
			       (VAR53 | VAR54)) &&
			     VAR9->VAR55 != VAR56)) {
#endif
				if (VAR42)
					VAR48->VAR57 -= VAR42->VAR43.VAR7;
				if (VAR43)
					VAR48->VAR57 += VAR43->VAR43.VAR7;
				VAR48->FUN15(VAR2, VAR48->VAR58);
#if FUN14(VAR49)
			}
#endif
		}
		FUN16(VAR9->VAR45, VAR43);
		if (VAR42)
			FUN17(VAR42, VAR59);
		break;
	}
	case VAR14:
		if (VAR11)
			VAR9->VAR60 |= VAR61;
		else
			VAR9->VAR60 &= ~VAR61;
		break;
	case VAR15:
		if (VAR11)
			VAR9->VAR60 |=  VAR62;
		else
			VAR9->VAR60 &= ~VAR62;
		break;
	case VAR17:
		if (VAR11)
			VAR9->VAR60 |=  VAR63;
		else
			VAR9->VAR60 &= ~VAR63;
		break;
	case VAR16:
		if (VAR11)
			VAR9->VAR60 |=  VAR64;
		else
			VAR9->VAR60 &= ~VAR64;
		break;
	case VAR18:
		if (VAR11)
			VAR9->VAR60 |= VAR65;
		else
			VAR9->VAR60 &= ~VAR65;
		break;
	case VAR26:
		if (VAR11)
			VAR9->VAR60 |= VAR66;
		else
			VAR9->VAR60 &= ~VAR66;
		break;
	case VAR35:
		if (VAR11)
			VAR9->VAR60 |= VAR67;
		else
			VAR9->VAR60 &= ~VAR67;
		break;
	case VAR36:
		if (VAR11) {
			if (!(VAR9->VAR60 & VAR68)) {
				FUN18(VAR2);
				VAR9->VAR60 |= VAR68;
			}
		} else {
			if (VAR9->VAR60 & VAR68) {
				FUN19(VAR2);
				VAR9->VAR60 &= ~VAR68;
			}
		}
		break;
	case VAR37:
		if (VAR2->VAR69 != VAR70 && VAR2->VAR69 != VAR71)
			goto VAR44;
		if (VAR11)
			VAR9->VAR60 |= VAR72;
		else
			VAR9->VAR60 &= ~VAR72;
		break;
	case VAR19:	
		if (VAR2->VAR69 == VAR73) {
			VAR11 &= ~VAR74;
			VAR11 |= VAR9->VAR75 & VAR74;
		}
		if (VAR9->VAR75 != VAR11) {
			VAR9->VAR75 = VAR11;
			VAR2->VAR76 = FUN20(VAR11);
			FUN21(VAR2);
		}
		break;
	case VAR20:
		if (VAR7 < 1)
			goto VAR44;
		if (VAR11 != -1 && (VAR11 < 1 || VAR11 > 255))
			goto VAR44;
		VAR9->VAR77 = VAR11;
		break;
	case VAR21:
		if (VAR2->VAR69 != VAR70) {
			VAR12 = -VAR78;
			break;
		}
		VAR9->VAR79 = VAR11 ? 1 : 0;
		break;
	case VAR29:
		if (VAR2->VAR69 != VAR70) {
			VAR12 = -VAR78;
			break;
		}
		VAR9->VAR80 = VAR11 ? 1 : 0;
		break;
	case VAR30:
		VAR9->VAR81 = VAR11 ? 1 : 0;
		break;
	case VAR22:
		if (VAR11 < VAR82 || VAR11 > VAR83)
			goto VAR44;
		VAR9->VAR84 = VAR11;
		break;
	case VAR23:
		VAR9->VAR85 = !!VAR11;
		if (!VAR11)
			FUN22(&VAR2->VAR86);
		break;
	case VAR32:
		if (VAR2->VAR69 == VAR73)
			goto VAR44;
		if (VAR7 < 1)
			goto VAR44;
		if (VAR11 == -1)
			VAR11 = 1;
		if (VAR11 < 0 || VAR11 > 255)
			goto VAR44;
		VAR9->VAR87 = VAR11;
		break;
	case VAR34:
		if (VAR7 < 1)
			goto VAR44;
		VAR9->VAR88 = !!VAR11;
		break;
	case VAR31:
	{
		struct VAR89 *VAR90 = NULL;
		int VAR91;

		if (VAR7 != sizeof(int))
			goto VAR44;

		VAR91 = (__force int)FUN23((__force VAR92)VAR11);
		if (VAR91 == 0) {
			VAR9->VAR93 = 0;
			VAR12 = 0;
			break;
		}

		VAR90 = FUN24(FUN3(VAR2), VAR91);
		VAR12 = -VAR94;
		if (!VAR90)
			break;
		FUN25(VAR90);

		VAR12 = -VAR95;
		if (VAR2->VAR96)
			break;

		VAR9->VAR93 = VAR91;
		VAR12 = 0;
		break;
	}
	case VAR97:
	{
		struct ip_mreqn VAR98;
		struct VAR89 *VAR90 = NULL;
		int VAR99;

		if (VAR2->VAR69 == VAR73)
			goto VAR44;
		

		if (VAR7 < sizeof(struct VAR100))
			goto VAR44;

		VAR12 = -VAR38;
		if (VAR7 >= sizeof(struct VAR101)) {
			if (FUN26(&VAR98, VAR6, sizeof(VAR98)))
				break;
		} else {
			memset(&VAR98, 0, sizeof(VAR98));
			if (VAR7 >= sizeof(struct VAR102)) {
				if (FUN26(&VAR98, VAR6,
						   sizeof(struct VAR102)))
					break;
			} else if (VAR7 >= sizeof(struct VAR100)) {
				if (FUN26(&VAR98.VAR103, VAR6,
						   sizeof(struct VAR100)))
					break;
			}
		}

		if (!VAR98.VAR104) {
			if (VAR98.VAR103.VAR105 == FUN27(VAR106)) {
				VAR9->VAR107 = 0;
				VAR9->VAR108  = 0;
				VAR12 = 0;
				break;
			}
			VAR90 = FUN28(FUN3(VAR2), VAR98.VAR103.VAR105);
			if (VAR90)
				VAR98.VAR104 = VAR90->VAR91;
		} else
			VAR90 = FUN24(FUN3(VAR2), VAR98.VAR104);


		VAR12 = -VAR94;
		if (!VAR90)
			break;

		VAR99 = FUN29(VAR90);

		FUN25(VAR90);

		VAR12 = -VAR95;
		if (VAR2->VAR96 &&
		    VAR98.VAR104 != VAR2->VAR96 &&
		    (!VAR99 || VAR99 != VAR2->VAR96))
			break;

		VAR9->VAR107 = VAR98.VAR104;
		VAR9->VAR108  = VAR98.VAR103.VAR105;
		VAR12 = 0;
		break;
	}

	case VAR109:
	case VAR110:
	{
		struct ip_mreqn VAR98;

		VAR12 = -VAR111;
		if (FUN2(VAR2)->VAR46)
			break;

		if (VAR7 < sizeof(struct VAR102))
			goto VAR44;
		VAR12 = -VAR38;
		if (VAR7 >= sizeof(struct VAR101)) {
			if (FUN26(&VAR98, VAR6, sizeof(VAR98)))
				break;
		} else {
			memset(&VAR98, 0, sizeof(VAR98));
			if (FUN26(&VAR98, VAR6, sizeof(struct VAR102)))
				break;
		}

		if (VAR4 == VAR109)
			VAR12 = FUN30(VAR2, &VAR98);
		else
			VAR12 = FUN31(VAR2, &VAR98);
		break;
	}
	case VAR112:
	{
		struct VAR113 *VAR114;

		if (VAR7 < FUN32(0))
			goto VAR44;
		if (VAR7 > VAR115) {
			VAR12 = -VAR116;
			break;
		}
		VAR114 = FUN33(VAR7, VAR117);
		if (!VAR114) {
			VAR12 = -VAR116;
			break;
		}
		VAR12 = -VAR38;
		if (FUN26(VAR114, VAR6, VAR7)) {
			FUN34(VAR114);
			break;
		}
		
		if (VAR114->VAR118 >= 0x3ffffffcU ||
		    VAR114->VAR118 > VAR10->VAR119.VAR120) {
			FUN34(VAR114);
			VAR12 = -VAR116;
			break;
		}
		if (FUN32(VAR114->VAR118) > VAR7) {
			FUN34(VAR114);
			VAR12 = -VAR95;
			break;
		}
		VAR12 = FUN35(VAR2, VAR114, 0);
		FUN34(VAR114);
		break;
	}
	case VAR121:
	case VAR122:
	case VAR123:
	case VAR124:
	{
		struct ip_mreq_source VAR125;
		int VAR126, VAR127;

		if (VAR7 != sizeof(struct VAR128))
			goto VAR44;
		if (FUN26(&VAR125, VAR6, sizeof(VAR125))) {
			VAR12 = -VAR38;
			break;
		}
		if (VAR4 == VAR121) {
			VAR126 = VAR129;
			VAR127 = 1;
		} else if (VAR4 == VAR122) {
			VAR126 = VAR129;
			VAR127 = 0;
		} else if (VAR4 == VAR123) {
			struct ip_mreqn VAR98;

			VAR98.VAR130.VAR105 = VAR125.VAR130;
			VAR98.VAR103.VAR105 = VAR125.VAR131;
			VAR98.VAR104 = 0;
			VAR12 = FUN30(VAR2, &VAR98);
			if (VAR12 && VAR12 != -VAR132)
				break;
			VAR126 = VAR133;
			VAR127 = 1;
		} else  {
			VAR126 = VAR133;
			VAR127 = 0;
		}
		VAR12 = FUN36(VAR127, VAR126, VAR2, &VAR125, 0);
		break;
	}
	case VAR134:
	case VAR135:
	{
		struct group_req VAR136;
		struct VAR137 *VAR138;
		struct ip_mreqn VAR98;

		if (VAR7 < sizeof(struct VAR139))
			goto VAR44;
		VAR12 = -VAR38;
		if (FUN26(&VAR136, VAR6, sizeof(VAR136)))
			break;
		VAR138 = (struct VAR137 *)&VAR136.VAR140;
		if (VAR138->VAR141 != VAR142)
			goto VAR44;
		memset(&VAR98, 0, sizeof(VAR98));
		VAR98.VAR130 = VAR138->VAR143;
		VAR98.VAR104 = VAR136.VAR144;

		if (VAR4 == VAR134)
			VAR12 = FUN30(VAR2, &VAR98);
		else
			VAR12 = FUN31(VAR2, &VAR98);
		break;
	}
	case VAR145:
	case VAR146:
	case VAR147:
	case VAR148:
	{
		struct group_source_req VAR149;
		struct ip_mreq_source VAR125;
		struct VAR137 *VAR138;
		int VAR126, VAR127;

		if (VAR7 != sizeof(struct VAR150))
			goto VAR44;
		if (FUN26(&VAR149, VAR6, sizeof(VAR149))) {
			VAR12 = -VAR38;
			break;
		}
		if (VAR149.VAR151.VAR152 != VAR142 ||
		    VAR149.VAR153.VAR152 != VAR142) {
			VAR12 = -VAR94;
			break;
		}
		VAR138 = (struct VAR137 *)&VAR149.VAR151;
		VAR125.VAR130 = VAR138->VAR143.VAR105;
		VAR138 = (struct VAR137 *)&VAR149.VAR153;
		VAR125.VAR154 = VAR138->VAR143.VAR105;
		VAR125.VAR131 = 0; 

		if (VAR4 == VAR147) {
			VAR126 = VAR129;
			VAR127 = 1;
		} else if (VAR4 == VAR148) {
			VAR126 = VAR129;
			VAR127 = 0;
		} else if (VAR4 == VAR145) {
			struct ip_mreqn VAR98;

			VAR138 = (struct VAR137 *)&VAR149.VAR151;
			VAR98.VAR130 = VAR138->VAR143;
			VAR98.VAR103.VAR105 = 0;
			VAR98.VAR104 = VAR149.VAR155;
			VAR12 = FUN30(VAR2, &VAR98);
			if (VAR12 && VAR12 != -VAR132)
				break;
			VAR149.VAR155 = VAR98.VAR104;
			VAR126 = VAR133;
			VAR127 = 1;
		} else  {
			VAR126 = VAR133;
			VAR127 = 0;
		}
		VAR12 = FUN36(VAR127, VAR126, VAR2, &VAR125,
				   VAR149.VAR155);
		break;
	}
	case VAR156:
	{
		struct VAR137 *VAR138;
		struct VAR113 *VAR114 = NULL;
		struct VAR157 *VAR158 = NULL;
		int VAR159, VAR160, VAR91;

		if (VAR7 < FUN37(0))
			goto VAR44;
		if (VAR7 > VAR115) {
			VAR12 = -VAR116;
			break;
		}
		VAR158 = FUN33(VAR7, VAR117);
		if (!VAR158) {
			VAR12 = -VAR116;
			break;
		}
		VAR12 = -VAR38;
		if (FUN26(VAR158, VAR6, VAR7))
			goto VAR161;

		
		if (VAR158->VAR162 >= 0x1ffffff ||
		    VAR158->VAR162 > VAR10->VAR119.VAR120) {
			VAR12 = -VAR116;
			goto VAR161;
		}
		if (FUN37(VAR158->VAR162) > VAR7) {
			VAR12 = -VAR95;
			goto VAR161;
		}
		VAR159 = FUN32(VAR158->VAR162);
		VAR114 = FUN33(VAR159, VAR117);
		if (!VAR114) {
			VAR12 = -VAR116;
			goto VAR161;
		}
		VAR91 = VAR158->VAR163;
		VAR138 = (struct VAR137 *)&VAR158->VAR164;
		if (VAR138->VAR141 != VAR142) {
			VAR12 = -VAR94;
			goto VAR161;
		}
		VAR114->VAR165 = VAR138->VAR143.VAR105;
		VAR114->VAR166 = 0;
		VAR114->VAR167 = VAR158->VAR168;
		VAR114->VAR118 = VAR158->VAR162;
		VAR12 = -VAR94;
		for (VAR160 = 0; VAR160 < VAR158->VAR162; ++VAR160) {
			VAR138 = (struct VAR137 *)&VAR158->VAR169[VAR160];

			if (VAR138->VAR141 != VAR142)
				goto VAR161;
			VAR114->VAR170[VAR160] = VAR138->VAR143.VAR105;
		}
		FUN34(VAR158);
		VAR158 = NULL;

		VAR12 = FUN35(VAR2, VAR114, VAR91);
VAR161:
		FUN34(VAR114);
		FUN34(VAR158);
		break;
	}
	case VAR33:
		if (VAR7 < 1)
			goto VAR44;
		if (VAR11 != 0 && VAR11 != 1)
			goto VAR44;
		VAR9->VAR171 = VAR11;
		break;
	case VAR24:
		VAR12 = FUN38(VAR2, VAR11 ? 1 : 0, NULL);
		break;

	case VAR25:
		if (VAR7 < 1)
			goto VAR44;
		VAR9->VAR172 = !!VAR11;
		break;

	case VAR173:
	case VAR174:
		VAR12 = -VAR175;
		if (!FUN39(FUN3(VAR2)->VAR176, VAR177))
			break;
		VAR12 = FUN40(VAR2, VAR4, VAR6, VAR7);
		break;

	case VAR27:
		if (!!VAR11 && !FUN39(FUN3(VAR2)->VAR176, VAR178) &&
		    !FUN39(FUN3(VAR2)->VAR176, VAR177)) {
			VAR12 = -VAR175;
			break;
		}
		if (VAR7 < 1)
			goto VAR44;
		VAR9->VAR179 = !!VAR11;
		break;

	case VAR28:
		if (VAR7 < 1)
			goto VAR44;
		if (VAR11 < 0 || VAR11 > 255)
			goto VAR44;
		VAR9->VAR180 = VAR11;
		break;

	default:
		VAR12 = -VAR78;
		break;
	}
	FUN41(VAR2);
	if (VAR13)
		FUN42();
	return VAR12;

VAR44:
	FUN41(VAR2);
	if (VAR13)
		FUN42();
	return -VAR95;
}