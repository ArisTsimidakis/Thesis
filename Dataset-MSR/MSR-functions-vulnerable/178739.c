static int FUN1(struct VAR1 *VAR2, int VAR3,
			    int VAR4, char VAR5 *VAR6, unsigned int VAR7)
{
	struct VAR8 *VAR9 = FUN2(VAR2);
	int VAR10 = 0, VAR11;

	if (((1<<VAR4) & ((1<<VAR12) | (1<<VAR13) |
			     (1<<VAR14) | (1<<VAR15) |
			     (1<<VAR16) | (1<<VAR17) |
			     (1<<VAR18) | (1<<VAR19) |
			     (1<<VAR20) | (1<<VAR21) |
			     (1<<VAR22) | (1<<VAR23) |
			     (1<<VAR24) | (1<<VAR25) |
			     (1<<VAR26) | (1<<VAR27))) ||
	    VAR4 == VAR28 ||
	    VAR4 == VAR29 ||
	    VAR4 == VAR30 ||
	    VAR4 == VAR31) {
		if (VAR7 >= sizeof(int)) {
			if (FUN3(VAR10, (int VAR5 *) VAR6))
				return -VAR32;
		} else if (VAR7 >= sizeof(char)) {
			unsigned char VAR33;

			if (FUN3(VAR33, (unsigned char VAR5 *) VAR6))
				return -VAR32;
			VAR10 = (int) VAR33;
		}
	}

	

	if (FUN4(VAR4))
		return FUN5(VAR2, VAR4, VAR6, VAR7);

	VAR11 = 0;
	FUN6(VAR2);

 	switch (VAR4) {
 	case VAR34:
 	{

		struct VAR35 *VAR36 = NULL;




 		if (VAR7 > 40)
 			goto VAR37;
 		VAR11 = FUN7(FUN8(VAR2), &VAR36,
 					       VAR6, VAR7);
 		if (VAR11)
 			break;




 		if (VAR9->VAR38) {
 			struct VAR39 *VAR40 = FUN9(VAR2);
 #if FUN10(VAR41) || FUN10(VAR42)
			if (VAR2->VAR43 == VAR44 ||
			    (!((1 << VAR2->VAR45) &
 			       (VAR46 | VAR47)) &&
 			     VAR9->VAR48 != VAR49)) {
 #endif

				if (VAR9->VAR36)

					VAR40->VAR50 -= VAR9->VAR36->VAR7;




 				if (VAR36)

					VAR40->VAR50 += VAR36->VAR7;


 				VAR40->FUN11(VAR2, VAR40->VAR51);
 #if FUN10(VAR41) || FUN10(VAR42)
 			}
 #endif
 		}

		VAR36 = FUN12(&VAR9->VAR36, VAR36);

		FUN13(VAR36);






 		break;
 	}
 	case VAR12:
		if (VAR10)
			VAR9->VAR52 |= VAR53;
		else
			VAR9->VAR52 &= ~VAR53;
		break;
	case VAR13:
		if (VAR10)
			VAR9->VAR52 |=  VAR54;
		else
			VAR9->VAR52 &= ~VAR54;
		break;
	case VAR15:
		if (VAR10)
			VAR9->VAR52 |=  VAR55;
		else
			VAR9->VAR52 &= ~VAR55;
		break;
	case VAR14:
		if (VAR10)
			VAR9->VAR52 |=  VAR56;
		else
			VAR9->VAR52 &= ~VAR56;
		break;
	case VAR16:
		if (VAR10)
			VAR9->VAR52 |= VAR57;
		else
			VAR9->VAR52 &= ~VAR57;
		break;
	case VAR24:
		if (VAR10)
			VAR9->VAR52 |= VAR58;
		else
			VAR9->VAR52 &= ~VAR58;
		break;
	case VAR31:
		if (VAR10)
			VAR9->VAR52 |= VAR59;
		else
			VAR9->VAR52 &= ~VAR59;
		break;
	case VAR17:	
		if (VAR2->VAR60 == VAR61) {
			VAR10 &= ~3;
			VAR10 |= VAR9->VAR62 & 3;
		}
		if (VAR9->VAR62 != VAR10) {
			VAR9->VAR62 = VAR10;
			VAR2->VAR63 = FUN14(VAR10);
			FUN15(VAR2);
		}
		break;
	case VAR18:
		if (VAR7 < 1)
			goto VAR37;
		if (VAR10 != -1 && (VAR10 < 0 || VAR10 > 255))
			goto VAR37;
		VAR9->VAR64 = VAR10;
		break;
	case VAR19:
		if (VAR2->VAR60 != VAR65) {
			VAR11 = -VAR66;
			break;
		}
		VAR9->VAR67 = VAR10 ? 1 : 0;
		break;
	case VAR27:
		if (VAR2->VAR60 != VAR65) {
			VAR11 = -VAR66;
			break;
		}
		VAR9->VAR68 = VAR10 ? 1 : 0;
		break;
	case VAR20:
		if (VAR10 < VAR69 || VAR10 > VAR70)
			goto VAR37;
		VAR9->VAR71 = VAR10;
		break;
	case VAR21:
		VAR9->VAR72 = !!VAR10;
		if (!VAR10)
			FUN16(&VAR2->VAR73);
		break;
	case VAR28:
		if (VAR2->VAR60 == VAR61)
			goto VAR37;
		if (VAR7 < 1)
			goto VAR37;
		if (VAR10 == -1)
			VAR10 = 1;
		if (VAR10 < 0 || VAR10 > 255)
			goto VAR37;
		VAR9->VAR74 = VAR10;
		break;
	case VAR30:
		if (VAR7 < 1)
			goto VAR37;
		VAR9->VAR75 = !!VAR10;
		break;
	case VAR76:
	{
		struct ip_mreqn VAR77;
		struct VAR78 *VAR79 = NULL;

		if (VAR2->VAR60 == VAR61)
			goto VAR37;
		

		if (VAR7 < sizeof(struct VAR80))
			goto VAR37;

		VAR11 = -VAR32;
		if (VAR7 >= sizeof(struct VAR81)) {
			if (FUN17(&VAR77, VAR6, sizeof(VAR77)))
				break;
		} else {
			memset(&VAR77, 0, sizeof(VAR77));
			if (VAR7 >= sizeof(struct VAR80) &&
			    FUN17(&VAR77.VAR82, VAR6,
					   sizeof(struct VAR80)))
				break;
		}

		if (!VAR77.VAR83) {
			if (VAR77.VAR82.VAR84 == FUN18(VAR85)) {
				VAR9->VAR86 = 0;
				VAR9->VAR87  = 0;
				VAR11 = 0;
				break;
			}
			VAR79 = FUN19(FUN8(VAR2), VAR77.VAR82.VAR84);
			if (VAR79)
				VAR77.VAR83 = VAR79->VAR88;
		} else
			VAR79 = FUN20(FUN8(VAR2), VAR77.VAR83);


		VAR11 = -VAR89;
		if (!VAR79)
			break;
		FUN21(VAR79);

		VAR11 = -VAR90;
		if (VAR2->VAR91 &&
		    VAR77.VAR83 != VAR2->VAR91)
			break;

		VAR9->VAR86 = VAR77.VAR83;
		VAR9->VAR87  = VAR77.VAR82.VAR84;
		VAR11 = 0;
		break;
	}

	case VAR92:
	case VAR93:
	{
		struct ip_mreqn VAR77;

		VAR11 = -VAR94;
		if (FUN2(VAR2)->VAR38)
			break;

		if (VAR7 < sizeof(struct VAR95))
			goto VAR37;
		VAR11 = -VAR32;
		if (VAR7 >= sizeof(struct VAR81)) {
			if (FUN17(&VAR77, VAR6, sizeof(VAR77)))
				break;
		} else {
			memset(&VAR77, 0, sizeof(VAR77));
			if (FUN17(&VAR77, VAR6, sizeof(struct VAR95)))
				break;
		}

		if (VAR4 == VAR92)
			VAR11 = FUN22(VAR2, &VAR77);
		else
			VAR11 = FUN23(VAR2, &VAR77);
		break;
	}
	case VAR96:
	{
		struct VAR97 *VAR98;

		if (VAR7 < FUN24(0))
			goto VAR37;
		if (VAR7 > VAR99) {
			VAR11 = -VAR100;
			break;
		}
		VAR98 = FUN25(VAR7, VAR101);
		if (!VAR98) {
			VAR11 = -VAR100;
			break;
		}
		VAR11 = -VAR32;
		if (FUN17(VAR98, VAR6, VAR7)) {
			FUN13(VAR98);
			break;
		}
		
		if (VAR98->VAR102 >= 0x3ffffffcU ||
		    VAR98->VAR102 > VAR103) {
			FUN13(VAR98);
			VAR11 = -VAR100;
			break;
		}
		if (FUN24(VAR98->VAR102) > VAR7) {
			FUN13(VAR98);
			VAR11 = -VAR90;
			break;
		}
		VAR11 = FUN26(VAR2, VAR98, 0);
		FUN13(VAR98);
		break;
	}
	case VAR104:
	case VAR105:
	case VAR106:
	case VAR107:
	{
		struct ip_mreq_source VAR108;
		int VAR109, VAR110;

		if (VAR7 != sizeof(struct VAR111))
			goto VAR37;
		if (FUN17(&VAR108, VAR6, sizeof(VAR108))) {
			VAR11 = -VAR32;
			break;
		}
		if (VAR4 == VAR104) {
			VAR109 = VAR112;
			VAR110 = 1;
		} else if (VAR4 == VAR105) {
			VAR109 = VAR112;
			VAR110 = 0;
		} else if (VAR4 == VAR106) {
			struct ip_mreqn VAR77;

			VAR77.VAR113.VAR84 = VAR108.VAR113;
			VAR77.VAR82.VAR84 = VAR108.VAR114;
			VAR77.VAR83 = 0;
			VAR11 = FUN22(VAR2, &VAR77);
			if (VAR11 && VAR11 != -VAR115)
				break;
			VAR109 = VAR116;
			VAR110 = 1;
		} else  {
			VAR109 = VAR116;
			VAR110 = 0;
		}
		VAR11 = FUN27(VAR110, VAR109, VAR2, &VAR108, 0);
		break;
	}
	case VAR117:
	case VAR118:
	{
		struct group_req VAR119;
		struct VAR120 *VAR121;
		struct ip_mreqn VAR77;

		if (VAR7 < sizeof(struct VAR122))
			goto VAR37;
		VAR11 = -VAR32;
		if (FUN17(&VAR119, VAR6, sizeof(VAR119)))
			break;
		VAR121 = (struct VAR120 *)&VAR119.VAR123;
		if (VAR121->VAR124 != VAR125)
			goto VAR37;
		memset(&VAR77, 0, sizeof(VAR77));
		VAR77.VAR113 = VAR121->VAR126;
		VAR77.VAR83 = VAR119.VAR127;

		if (VAR4 == VAR117)
			VAR11 = FUN22(VAR2, &VAR77);
		else
			VAR11 = FUN23(VAR2, &VAR77);
		break;
	}
	case VAR128:
	case VAR129:
	case VAR130:
	case VAR131:
	{
		struct group_source_req VAR132;
		struct ip_mreq_source VAR108;
		struct VAR120 *VAR121;
		int VAR109, VAR110;

		if (VAR7 != sizeof(struct VAR133))
			goto VAR37;
		if (FUN17(&VAR132, VAR6, sizeof(VAR132))) {
			VAR11 = -VAR32;
			break;
		}
		if (VAR132.VAR134.VAR135 != VAR125 ||
		    VAR132.VAR136.VAR135 != VAR125) {
			VAR11 = -VAR89;
			break;
		}
		VAR121 = (struct VAR120 *)&VAR132.VAR134;
		VAR108.VAR113 = VAR121->VAR126.VAR84;
		VAR121 = (struct VAR120 *)&VAR132.VAR136;
		VAR108.VAR137 = VAR121->VAR126.VAR84;
		VAR108.VAR114 = 0; 

		if (VAR4 == VAR130) {
			VAR109 = VAR112;
			VAR110 = 1;
		} else if (VAR4 == VAR131) {
			VAR109 = VAR112;
			VAR110 = 0;
		} else if (VAR4 == VAR128) {
			struct ip_mreqn VAR77;

			VAR121 = (struct VAR120 *)&VAR132.VAR134;
			VAR77.VAR113 = VAR121->VAR126;
			VAR77.VAR82.VAR84 = 0;
			VAR77.VAR83 = VAR132.VAR138;
			VAR11 = FUN22(VAR2, &VAR77);
			if (VAR11 && VAR11 != -VAR115)
				break;
			VAR132.VAR138 = VAR77.VAR83;
			VAR109 = VAR116;
			VAR110 = 1;
		} else  {
			VAR109 = VAR116;
			VAR110 = 0;
		}
		VAR11 = FUN27(VAR110, VAR109, VAR2, &VAR108,
				   VAR132.VAR138);
		break;
	}
	case VAR139:
	{
		struct VAR120 *VAR121;
		struct VAR97 *VAR98 = NULL;
		struct VAR140 *VAR141 = NULL;
		int VAR142, VAR143, VAR88;

		if (VAR7 < FUN28(0))
			goto VAR37;
		if (VAR7 > VAR99) {
			VAR11 = -VAR100;
			break;
		}
		VAR141 = FUN25(VAR7, VAR101);
		if (!VAR141) {
			VAR11 = -VAR100;
			break;
		}
		VAR11 = -VAR32;
		if (FUN17(VAR141, VAR6, VAR7))
			goto VAR144;

		
		if (VAR141->VAR145 >= 0x1ffffff ||
		    VAR141->VAR145 > VAR103) {
			VAR11 = -VAR100;
			goto VAR144;
		}
		if (FUN28(VAR141->VAR145) > VAR7) {
			VAR11 = -VAR90;
			goto VAR144;
		}
		VAR142 = FUN24(VAR141->VAR145);
		VAR98 = FUN25(VAR142, VAR101);
		if (!VAR98) {
			VAR11 = -VAR100;
			goto VAR144;
		}
		VAR88 = VAR141->VAR146;
		VAR121 = (struct VAR120 *)&VAR141->VAR147;
		if (VAR121->VAR124 != VAR125) {
			VAR11 = -VAR89;
			goto VAR144;
		}
		VAR98->VAR148 = VAR121->VAR126.VAR84;
		VAR98->VAR149 = 0;
		VAR98->VAR150 = VAR141->VAR151;
		VAR98->VAR102 = VAR141->VAR145;
		VAR11 = -VAR89;
		for (VAR143 = 0; VAR143 < VAR141->VAR145; ++VAR143) {
			VAR121 = (struct VAR120 *)&VAR141->VAR152[VAR143];

			if (VAR121->VAR124 != VAR125)
				goto VAR144;
			VAR98->VAR153[VAR143] = VAR121->VAR126.VAR84;
		}
		FUN13(VAR141);
		VAR141 = NULL;

		VAR11 = FUN26(VAR2, VAR98, VAR88);
VAR144:
		FUN13(VAR98);
		FUN13(VAR141);
		break;
	}
	case VAR29:
		if (VAR7 < 1)
			goto VAR37;
		if (VAR10 != 0 && VAR10 != 1)
			goto VAR37;
		VAR9->VAR154 = VAR10;
		break;
	case VAR22:
		VAR11 = FUN29(VAR2, VAR10 ? 1 : 0, NULL);
		break;

	case VAR23:
		if (VAR7 < 1)
			goto VAR37;
		VAR9->VAR155 = !!VAR10;
		break;

	case VAR156:
	case VAR157:
		VAR11 = -VAR158;
		if (!FUN30(VAR159))
			break;
		VAR11 = FUN31(VAR2, VAR4, VAR6, VAR7);
		break;

	case VAR25:
		if (!FUN30(VAR159)) {
			VAR11 = -VAR158;
			break;
		}
		if (VAR7 < 1)
			goto VAR37;
		VAR9->VAR160 = !!VAR10;
		break;

	case VAR26:
		if (VAR7 < 1)
			goto VAR37;
		if (VAR10 < 0 || VAR10 > 255)
			goto VAR37;
		VAR9->VAR161 = VAR10;
		break;

	default:
		VAR11 = -VAR66;
		break;
	}
	FUN32(VAR2);
	return VAR11;

VAR37:
	FUN32(VAR2);
	return -VAR90;
}