static int FUN1(struct VAR1 *VAR1, bool VAR2)
{
	struct VAR3 *VAR4 = NULL;
	struct VAR5 *VAR6;
	struct VAR7 *VAR8;
	uint16_t VAR9;
	struct VAR10 *VAR11 = FUN2(VAR1);
	struct VAR12 *VAR13 = FUN3(VAR1->VAR14);
	struct VAR15 *VAR16 = &VAR11->VAR17;
	unsigned int VAR18;
	unsigned int VAR19 = 0;
	int VAR20 = -VAR21;

VAR22:
	if (VAR16->VAR23 >=
	    VAR13->VAR24[VAR16->VAR25].VAR26) {
		FUN4("",
			  VAR16->VAR23, VAR16->VAR25);
		return -VAR21;
	}

	
	VAR4 = FUN5(VAR1->VAR14, VAR16, 0, &VAR9);
	if (!VAR4) {
		FUN6(VAR1->VAR14, "", VAR1->VAR27);
		return -VAR21;
	}

	if (VAR9 != VAR28 && VAR9 != VAR29 &&
	    VAR9 != VAR30) {
		FUN6(VAR1->VAR14, "",
			VAR1->VAR27, VAR9);
		goto VAR31;
	}

	VAR6 = (struct VAR5 *)VAR4->VAR32;
	VAR8 = (struct VAR7 *)VAR4->VAR32;

	if (VAR6->VAR33.VAR34 == FUN7(4096)) {
		struct VAR3 *VAR35;

		VAR35 = FUN5(VAR1->VAR14, VAR16, 1, &VAR9);
		if (VAR9 == VAR36 && VAR35) {
			struct kernel_lb_addr VAR37;
			struct VAR38 *VAR39;

			VAR39 = (struct VAR38 *)VAR35->VAR32;
			VAR37 = FUN8(VAR39->VAR40.VAR41);

			if (VAR39->VAR40.VAR42) {
				FUN9(VAR35);
				memcpy(&VAR11->VAR17, &VAR37,
				       sizeof(struct VAR15));
				if (++VAR19 > VAR43) {
					FUN6(VAR1->VAR14,
						""
						"",
						VAR43);
					goto VAR31;
				}
				FUN9(VAR4);
				goto VAR22;
			}
		}
		FUN9(VAR35);
	} else if (VAR6->VAR33.VAR34 != FUN7(4)) {
		FUN6(VAR1->VAR14, "",
			FUN10(VAR6->VAR33.VAR34));
		goto VAR31;
	}
	if (VAR6->VAR33.VAR34 == FUN7(4))
		VAR11->VAR44 = 0;
	else 
		VAR11->VAR44 = 1;

	VAR11->VAR45 = FUN10(VAR6->VAR33.VAR46) &
							VAR47;
	VAR11->VAR48 = 0;
	VAR11->VAR49 = 0;
	VAR11->VAR50 = 0;
	VAR11->VAR51 = 0;
	VAR11->VAR52 = 0;
	VAR11->VAR53 = 0;
	if (VAR6->VAR54.VAR55 == FUN7(VAR29)) {
		VAR11->VAR56 = 1;
		VAR11->VAR57 = 0;
		VAR20 = FUN11(VAR1, VAR1->VAR14->VAR58 -
					sizeof(struct VAR7));
		if (VAR20)
			goto VAR31;
		memcpy(VAR11->VAR59.VAR60,
		       VAR4->VAR32 + sizeof(struct VAR7),
		       VAR1->VAR14->VAR58 -
					sizeof(struct VAR7));
	} else if (VAR6->VAR54.VAR55 == FUN7(VAR28)) {
		VAR11->VAR56 = 0;
		VAR11->VAR57 = 0;
		VAR20 = FUN11(VAR1, VAR1->VAR14->VAR58 -
						sizeof(struct VAR5));
		if (VAR20)
			goto VAR31;
		memcpy(VAR11->VAR59.VAR60,
		       VAR4->VAR32 + sizeof(struct VAR5),
		       VAR1->VAR14->VAR58 - sizeof(struct VAR5));
	} else if (VAR6->VAR54.VAR55 == FUN7(VAR30)) {
		VAR11->VAR56 = 0;
		VAR11->VAR57 = 1;
		VAR11->VAR51 = FUN12(
				((struct VAR61 *)VAR4->VAR32)->
				 VAR62);
		VAR20 = FUN11(VAR1, VAR1->VAR14->VAR58 -
					sizeof(struct VAR61));
		if (VAR20)
			goto VAR31;
		memcpy(VAR11->VAR59.VAR60,
		       VAR4->VAR32 + sizeof(struct VAR61),
		       VAR1->VAR14->VAR58 -
					sizeof(struct VAR61));
		return 0;
	}

	VAR20 = -VAR21;
	FUN13(&VAR13->VAR63);
	FUN14(VAR1, FUN12(VAR6->VAR64));
	if (!FUN15(VAR1->VAR65) ||
	    FUN16(VAR1->VAR14, VAR66) ||
	    FUN16(VAR1->VAR14, VAR67))
		VAR1->VAR65 = FUN3(VAR1->VAR14)->VAR68;

	FUN17(VAR1, FUN12(VAR6->VAR69));
	if (!FUN18(VAR1->VAR70) ||
	    FUN16(VAR1->VAR14, VAR71) ||
	    FUN16(VAR1->VAR14, VAR72))
		VAR1->VAR70 = FUN3(VAR1->VAR14)->VAR73;

	if (VAR6->VAR33.VAR74 != VAR75 &&
			VAR13->VAR76 != VAR77)
		VAR1->VAR78 = VAR13->VAR76;
	else if (VAR6->VAR33.VAR74 == VAR75 &&
			VAR13->VAR79 != VAR77)
		VAR1->VAR78 = VAR13->VAR79;
	else
		VAR1->VAR78 = FUN19(VAR6);
	VAR1->VAR78 &= ~VAR13->VAR80;
	FUN20(&VAR13->VAR63);

	VAR18 = FUN10(VAR6->VAR81);
	if (!VAR18) {
		if (!VAR2) {
			VAR20 = -VAR82;
			goto VAR31;
		}
		VAR18 = 1;
	}
	FUN21(VAR1, VAR18);

	VAR1->VAR83 = FUN22(VAR6->VAR84);
	VAR11->VAR50 = VAR1->VAR83;

	if (VAR11->VAR56 == 0) {
		VAR1->VAR85 = FUN22(VAR6->VAR86) <<
			(VAR1->VAR14->VAR87 - 9);

		if (!FUN23(&VAR1->VAR88, VAR6->VAR89))
			VAR1->VAR88 = VAR13->VAR90;

		if (!FUN23(&VAR1->VAR91,
					    VAR6->VAR92))
			VAR1->VAR91 = VAR13->VAR90;

		if (!FUN23(&VAR1->VAR93, VAR6->VAR94))
			VAR1->VAR93 = VAR13->VAR90;

		VAR11->VAR48 = FUN22(VAR6->VAR95);
		VAR11->VAR49 = FUN12(VAR6->VAR96);
		VAR11->VAR51 = FUN12(VAR6->VAR62);
		VAR11->VAR97 = FUN12(VAR6->VAR98);
	} else {
		VAR1->VAR85 = FUN22(VAR8->VAR86) <<
		    (VAR1->VAR14->VAR87 - 9);

		if (!FUN23(&VAR1->VAR88, VAR8->VAR89))
			VAR1->VAR88 = VAR13->VAR90;

		if (!FUN23(&VAR1->VAR91,
					    VAR8->VAR92))
			VAR1->VAR91 = VAR13->VAR90;

		if (!FUN23(&VAR11->VAR99, VAR8->VAR100))
			VAR11->VAR99 = VAR13->VAR90;

		if (!FUN23(&VAR1->VAR93, VAR8->VAR94))
			VAR1->VAR93 = VAR13->VAR90;

		VAR11->VAR48 = FUN22(VAR8->VAR95);
		VAR11->VAR49 = FUN12(VAR8->VAR96);
		VAR11->VAR51 = FUN12(VAR8->VAR62);
		VAR11->VAR97 = FUN12(VAR8->VAR98);
 	}
 	VAR1->VAR101 = VAR11->VAR48;
 




























 	switch (VAR6->VAR33.VAR74) {
 	case VAR75:
 		VAR1->VAR102 = &VAR103;
		VAR1->VAR104 = &VAR105;
		VAR1->VAR78 |= VAR106;
		FUN24(VAR1);
		break;
	case VAR107:
	case VAR108:
	case VAR109:
	case VAR110:
		if (VAR11->VAR45 == VAR111)
			VAR1->VAR60.VAR112 = &VAR113;
		else
			VAR1->VAR60.VAR112 = &VAR114;
		VAR1->VAR102 = &VAR115;
		VAR1->VAR104 = &VAR116;
		VAR1->VAR78 |= VAR117;
		break;
	case VAR118:
		VAR1->VAR78 |= VAR119;
		break;
	case VAR120:
		VAR1->VAR78 |= VAR121;
		break;
	case VAR122:
		FUN25(VAR1, VAR1->VAR78 | VAR123, 0);
		break;
	case VAR124:
		FUN25(VAR1, VAR1->VAR78 | VAR125, 0);
		break;
	case VAR126:
		VAR1->VAR60.VAR112 = &VAR127;
		VAR1->VAR102 = &VAR128;
		VAR1->VAR78 = VAR129 | VAR130;
		break;
	case VAR131:
		FUN4("");
		break;
	case VAR132:
		FUN4("");
		break;
	case VAR133:
		FUN4("");
		break;
	default:
		FUN6(VAR1->VAR14, "",
			VAR1->VAR27, VAR6->VAR33.VAR74);
		goto VAR31;
	}
	if (FUN26(VAR1->VAR78) || FUN27(VAR1->VAR78)) {
		struct VAR134 *VAR135 =
			(struct VAR134 *)FUN28(VAR1, 12, 1);
		if (VAR135) {
			FUN25(VAR1, VAR1->VAR78,
				FUN29(FUN12(VAR135->VAR136),
				      FUN12(VAR135->VAR137)));
			
		} else
			goto VAR31;
	}
	VAR20 = 0;
VAR31:
	FUN9(VAR4);
	return VAR20;
}