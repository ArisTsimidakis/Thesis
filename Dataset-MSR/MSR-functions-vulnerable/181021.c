FUN1(VAR1 *VAR2,
          register const VAR3 *VAR4, register u_int VAR5,
          register const VAR3 *VAR6)
{
	register const struct VAR7 *VAR8;
	register const struct VAR9 *VAR9;
	register char VAR10;
	uint16_t VAR11, VAR12;
	u_int VAR13;
	char VAR14[VAR15];
	register const struct VAR16 *VAR17;
	uint8_t VAR18, VAR19;
	uint32_t VAR20, VAR21, VAR22, VAR23;

	VAR8 = (const struct VAR7 *)VAR4;
	VAR9 = (const struct VAR9 *)VAR6;
	if (FUN2(VAR9) == 6)
		VAR17 = (const struct VAR16 *)VAR6;
	else
		VAR17 = NULL;
	VAR10 = '';
	if (!FUN3(VAR8->VAR24)) {
		if (VAR17) {
 			FUN4((VAR2, "",
 				FUN5(VAR2, &VAR17->VAR25),
 				FUN5(VAR2, &VAR17->VAR26)));

			return;
 		} else {
 			FUN4((VAR2, "",
 				FUN6(VAR2, &VAR9->VAR27),
 				FUN6(VAR2, &VAR9->VAR28)));

			return;
 		}


 	}
 
 	VAR11 = FUN7(&VAR8->VAR29);
	VAR12 = FUN7(&VAR8->VAR24);

	if (VAR17) {
		if (VAR17->VAR30 == VAR31) {
			FUN4((VAR2, "",
				FUN5(VAR2, &VAR17->VAR25),
				FUN8(VAR2, VAR11),
				FUN5(VAR2, &VAR17->VAR26),
				FUN8(VAR2, VAR12)));
		} else {
			FUN4((VAR2, "",
				FUN8(VAR2, VAR11), FUN8(VAR2, VAR12)));
		}
	} else {
		if (VAR9->VAR32 == VAR31) {
			FUN4((VAR2, "",
				FUN6(VAR2, &VAR9->VAR27),
				FUN8(VAR2, VAR11),
				FUN6(VAR2, &VAR9->VAR28),
				FUN8(VAR2, VAR12)));
		} else {
			FUN4((VAR2, "",
				FUN8(VAR2, VAR11), FUN8(VAR2, VAR12)));
		}
	}

	FUN9(*VAR8);

        FUN4((VAR2, "", FUN7(&VAR8->VAR33)));

        if (!VAR2->VAR34)
            return;

	FUN4((VAR2, "",
		     VAR8->VAR35[0],
                     VAR8->VAR35[1],
                     VAR8->VAR35[2],
		     VAR8->VAR35[3],
                     VAR8->VAR35[4],
                     VAR8->VAR35[5]));
	switch (VAR8->VAR36) {
	case VAR37: {
	    const struct VAR38 *VAR39;

	    VAR39 = (const struct VAR38 *)(VAR8 + 1);
	    FUN9(*VAR39);
	    VAR4 = (const VAR3 *) (VAR39 + 1);

	    switch (FUN7(&VAR39->VAR40)) {
	    case VAR41:
		FUN10(*VAR4, sizeof(struct VAR42));
		FUN11(VAR4, VAR14, sizeof(VAR14));
		VAR4 += sizeof(struct VAR42);
		break;
	    case VAR43:
		FUN10(*VAR4, sizeof(struct VAR44));
		FUN12(VAR4, VAR14, sizeof(VAR14));
		VAR4 += sizeof(struct VAR44);
		break;
	    default:
		goto VAR45;
		break;
	    }

	    FUN4((VAR2, "",
			 FUN13(&VAR39->VAR46),
                         FUN13(&VAR39->VAR47),
			 FUN13(&VAR39->VAR48),
                         VAR14));
	    break;
	}

	case VAR49: {
	    const struct VAR50 *VAR51;

	    VAR51 = (const struct VAR50 *)(VAR8 + 1);
	    FUN9(*VAR51);
	    FUN4((VAR2, "",
			 FUN13(&VAR51->VAR52),
                         FUN7(&VAR51->VAR53)));
	    VAR4 = (const VAR3 *) (VAR51 + 1);
	    break;
	}
	case VAR54: {
	    const struct VAR55 *VAR56;
	    uint32_t VAR57, VAR58, VAR59;

	    VAR56 = (const struct VAR55 *)(VAR8 + 1);
	    FUN9(*VAR56);
	    VAR4 = (const VAR3 *) (VAR56 + 1);

	    switch (FUN7(&VAR56->VAR60)) {
	    case VAR41:
		FUN10(*VAR4, sizeof(struct VAR42));
		FUN11(VAR4, VAR14, sizeof(VAR14));
		VAR4 += sizeof(struct VAR42);
		break;
	    case VAR43:
		FUN10(*VAR4, sizeof(struct VAR44));
		FUN12(VAR4, VAR14, sizeof(VAR14));
		VAR4 += sizeof(struct VAR44);
		break;
	    default:
		goto VAR45;
		break;
	    }

	    FUN10(*VAR4, sizeof(VAR61));
	    VAR57 = FUN13(VAR4);
	    VAR4 += sizeof(VAR61);

	    FUN10(*VAR4, sizeof(VAR61));
	    VAR58 = FUN13(VAR4);
	    VAR4 += sizeof(VAR61);

	    FUN10(*VAR4, sizeof(VAR61));
	    VAR59 = FUN13(VAR4);
	    VAR4 += sizeof(VAR61);

	    FUN4((VAR2, ""
			 "", FUN13(&VAR56->VAR52),
			 FUN7(&VAR56->VAR53), VAR14, VAR57, VAR58, VAR59));
	    break;
	}
	case VAR62: {
	    const struct VAR63 *VAR64;

	    VAR64 = (const struct VAR63 *)(VAR8 + 1);
	    FUN9(*VAR64);
	    FUN4((VAR2, "",
			 FUN13(&VAR64->VAR65),
			 FUN13(&VAR64->VAR66)));
	    VAR4 = (const VAR3 *) (VAR64 + 1);
	    break;
	}

	case VAR67: {
	    const struct VAR63 *VAR68;

	    VAR68 = (const struct VAR63 *)(VAR8 + 1);
	    FUN9(*VAR68);
	    FUN4((VAR2, "",
			 FUN13(&VAR68->VAR65),
			 FUN13(&VAR68->VAR66)));
	    VAR4 = (const VAR3 *) (VAR68 + 1);
	    break;
	}

	case VAR69:
	case VAR70:
	case VAR71: {
	    const struct VAR72 *VAR73;
	    char VAR74[VAR15], VAR75[VAR15];

	    VAR73 = (const struct VAR72 *)(VAR8 + 1);
	    FUN9(*VAR73);
	    VAR4 = (const VAR3 *) (VAR73 + 1);

	    
	    switch (FUN7(&VAR73->VAR76)) {
	    case VAR41:
		FUN10(*VAR4, sizeof(struct VAR42));
		FUN11(VAR4, VAR74, sizeof(VAR74));
		VAR4 += sizeof(struct VAR42);
		break;
	    case VAR43:
		FUN10(*VAR4, sizeof(struct VAR44));
		FUN12(VAR4, VAR74, sizeof(VAR74));
		VAR4 += sizeof(struct VAR44);
		break;
	    default:
		goto VAR45;
		break;
	    }

	    
 	    VAR4 += (2 * sizeof(VAR77));


 	    switch (FUN7(VAR4)) {
 	    case VAR41:
 		FUN10(*VAR4, sizeof(struct VAR42));
		FUN11(VAR4, VAR75, sizeof(VAR75));
		VAR4 += sizeof(struct VAR42);
		break;
	    case VAR43:
		FUN10(*VAR4, sizeof(struct VAR44));
		FUN12(VAR4, VAR75, sizeof(VAR75));
		VAR4 += sizeof(struct VAR44);
		break;
	    default:
		goto VAR45;
		break;
	    }

	    
	    switch (VAR8->VAR36) {
		case VAR69:
		    FUN4((VAR2, ""));
		    break;
		case VAR70:
		    FUN4((VAR2, ""));
		    break;
		case VAR71:
		    FUN4((VAR2, ""));
		    break;
		default:
                    break;
	    }
	    FUN4((VAR2, "",
			 VAR74, VAR75, FUN13(&VAR73->VAR78)));
	    break;
	}

	case VAR79: {
	    const struct VAR80 *VAR81;

	    VAR81 = (const struct VAR80 *)(VAR8 + 1);
	    FUN9(*VAR81);
	    FUN4((VAR2, "",
			 FUN13(&VAR81->VAR82)));
	    VAR4 = (const VAR3 *) (VAR81 + 1);
	    break;
	}

	case VAR83:
	    FUN4((VAR2, ""));
	    break;

	default:
	    FUN4((VAR2, "", VAR8->VAR36));
	    break;

	}
	if (VAR8->VAR84 & VAR85) {

	    
	    if (!FUN14(*VAR4, VAR86)) {
		FUN4((VAR2, ""));
		return;
	    }

	    
	    VAR18 = *VAR4++;
	    if ((VAR18 & VAR87) != VAR88) {
		FUN4((VAR2, "", VAR18 & VAR87));
		return;
	    }
	    VAR19 = *VAR4++;
	    if (VAR19 != 4) {
		FUN4((VAR2, "", VAR19));
		return;
	    }
	    VAR21 = FUN7(VAR4);
	    if (VAR21 < 4) {
		FUN4((VAR2, "", VAR21));
		return;
	    }
	    VAR4 += sizeof(VAR77);
	    FUN4((VAR2, "", VAR21));
	    VAR21 -= 4;

	    while (VAR21) {
		if (VAR21 < VAR86) {
		    FUN4((VAR2, ""));
		    return;
		}
		if (!FUN14(*VAR4, 2)) {
		    FUN4((VAR2, ""));
		    return;
		}
		VAR18 = *VAR4++;
		VAR19 = *VAR4++;
		if (VAR19 < VAR86) {
		    FUN4((VAR2, "", VAR19,
		        VAR86));
		    break;
		}
		if (VAR21 < VAR19) {
		    FUN4((VAR2, ""));
		    return;
		}
		if (!FUN14(*VAR4, VAR19 - 2)) {
		    FUN4((VAR2, ""));
		    return;
		}

		switch (VAR18 & VAR87) {
		case VAR88:
#define FUN15	(2+2)
		    if (VAR19 != VAR89) {
			FUN4((VAR2, "",
			    VAR19, VAR89));
			return;
		    }
		    FUN4((VAR2, "", FUN7(VAR4)));
		    VAR4 += 2;
		    VAR21 -= VAR89;
		    break;

		case VAR90:
#define FUN16	(2+2+4+4+4)
		    if (VAR19 != VAR91) {
			FUN4((VAR2, "",
			    VAR19, VAR91));
			return;
		    }
		    VAR4 += 2;
		    VAR20 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR23 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR22 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR20, VAR23, VAR22));
		    VAR21 -= VAR91;
		    break;

		case VAR92:
		    VAR4 += 2;
		    VAR19 -= 4;	
		    FUN4((VAR2, ""));
		    while (VAR19) {
			if (VAR19 < 4) {
			    FUN4((VAR2, ""));
			    return;
			}
			FUN10(*VAR4, 4);
			FUN4((VAR2, "", FUN13(VAR4)));
			VAR4 += 4;
			VAR19 -= 4;
			VAR21 -= 4;
		    }
		    break;

		case VAR93:
#define FUN17	(2+2+4)
		    if (VAR19 != VAR94) {
			FUN4((VAR2, "",
			    VAR19, VAR94));
			return;
		    }
		    VAR4 += 2;
		    VAR20 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR20));
		    VAR21 -= VAR94;
		    break;

		case VAR95:
#define FUN18	(2+2+4+4)
		    if (VAR19 != VAR96) {
			FUN4((VAR2, "",
			    VAR19, VAR96));
			return;
		    }
		    VAR4 += 2;
		    VAR23 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR20 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR23, VAR20));
		    VAR21 -= VAR96;
		    break;

		case VAR97:
#define FUN19	(2+2+4+4)
		    if (VAR19 != VAR98) {
			FUN4((VAR2, "",
			    VAR19, VAR98));
			return;
		    }
		    VAR4 += 2;
		    VAR23 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR20 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR23, VAR20));
		    VAR21 -= VAR98;
		    break;

		case VAR99:
#define FUN20	(2+2+2+2)
		    if (VAR19 < VAR100) {
			FUN4((VAR2, "",
			    VAR19, VAR100));
			return;
		    }
		    VAR4 += 2;
		    VAR13 = FUN7(VAR4);
		    VAR4 += 2+2;
		    switch (VAR13) {
		    case VAR41:
			if (VAR19 != VAR100 + sizeof(struct VAR42)) {
			    FUN4((VAR2, "",
			        VAR19, VAR100));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR42));
			FUN11(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR42);
			VAR21 -= VAR100 + sizeof(struct VAR42);
			break;
		    case VAR43:
			if (VAR19 != VAR100 + sizeof(struct VAR44)) {
			    FUN4((VAR2, "",
			        VAR100, VAR19));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR44));
			FUN12(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR44);
			VAR21 -= VAR100 + sizeof(struct VAR44);
			break;
		    default:
			goto VAR45;
			break;
		    }

		    FUN4((VAR2, "",  VAR14));
		    break;

		case VAR101:
#define FUN21	(2+2+4)
		    if (VAR19 != VAR102) {
			FUN4((VAR2, "",
			    VAR19, VAR102));
			return;
		    }
		    VAR4 += 2;
		    VAR22 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR22));
		    VAR21 -= VAR102;
		    break;

		case VAR103:
#define FUN22	(2+2+4)
		    if (VAR19 != VAR104) {
			FUN4((VAR2, "",
			    VAR19, VAR104));
			return;
		    }
		    VAR4 += 2;
		    VAR20 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR20));
		    VAR21 -= VAR104;
		    break;

		case VAR105:
#define FUN23	(2+2+4)
		    if (VAR19 != VAR106) {
			FUN4((VAR2, "",
			    VAR19, VAR106));
			return;
		    }
		    VAR4 += 2;
		    VAR22 = FUN13(VAR4);
		    VAR4 += 4;
		    FUN4((VAR2, "", VAR22));
		    VAR21 -= VAR106;
		    break;

		case VAR107:
#define FUN24	(2+2)
		    if (VAR19 != VAR108) {
			FUN4((VAR2, "",
			    VAR19, VAR108));
			return;
		    }
		    VAR4 += 2;
		    FUN4((VAR2, ""));
		    VAR21 -= VAR108;
		    break;

		case VAR109:
		    FUN4((VAR2, "", VAR19));
		    VAR4 += VAR19;
		    VAR21 -= VAR19;
		    break;

		case VAR110:
#define FUN25	(2+2)
		    if (VAR19 != VAR111) {
			FUN4((VAR2, "",
			    VAR19, VAR111));
			return;
		    }
		    VAR4 += 2;
		    FUN4((VAR2, ""));
		    VAR21 -= VAR111;
		    break;

		case VAR112:
#define FUN26	(2+2)
		    if (VAR19 != VAR113) {
			FUN4((VAR2, "",
			    VAR19, VAR113));
			return;
		    }
		    VAR4 += 2;
		    FUN4((VAR2, ""));
		    VAR21 -= VAR113;
		    break;

		case VAR114:
#define FUN27	(2+2)
		    if (VAR19 != VAR115) {
			FUN4((VAR2, "",
			    VAR19, VAR115));
			return;
		    }
		    VAR4 += 2;
		    FUN4((VAR2, ""));
		    VAR21 -= VAR115;
		    break;

		case VAR116:
		    FUN4((VAR2, ""));
		    VAR4 += VAR19;
		    VAR21 -= VAR19;
		    break;

		case VAR117:
#define FUN28	(2+2)
		    if (VAR19 != VAR118) {
			FUN4((VAR2, "",
			    VAR19, VAR118));
			return;
		    }
		    VAR4 += 2;
		    FUN4((VAR2, ""));
		    VAR21 -= VAR118;
		    break;

		case VAR119:
#define FUN29	(2+2+4+2+2)
		    if (VAR19 < VAR120) {
			FUN4((VAR2, "",
			    VAR19, VAR120));
			return;
		    }
		    VAR4 += 2;
		    VAR23 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR13 = FUN7(VAR4);
		    VAR4 += 2+2;
		    switch (VAR13) {
		    case VAR41:
			if (VAR19 != VAR120 + sizeof(struct VAR42)) {
			    FUN4((VAR2, "",
			        VAR19, VAR120));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR42));
			FUN11(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR42);
			VAR21 -= VAR120 + sizeof(struct VAR42);
			break;
		    case VAR43:
			if (VAR19 != VAR120 + sizeof(struct VAR44)) {
			    FUN4((VAR2, "",
			        VAR19, VAR120));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR44));
			FUN12(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR44);
			VAR21 -= VAR120 + sizeof(struct VAR44);
			break;
		    default:
			goto VAR45;
			break;
		    }

		    FUN4((VAR2, "", VAR23, VAR14));
		    break;

		case VAR121:
#define FUN30	(2+2+4+2+2)
		    if (VAR19 < VAR122) {
			FUN4((VAR2, "",
			    VAR19, VAR122));
			return;
		    }
		    VAR4 += 2;
		    VAR23 = FUN13(VAR4);
		    VAR4 += 4;
		    VAR13 = FUN7(VAR4);
		    VAR4 += 2+2;
		    switch (VAR13) {
		    case VAR41:
			if (VAR19 != VAR122 + sizeof(struct VAR42)) {
			    FUN4((VAR2, "",
			        VAR19, VAR122));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR42));
			FUN11(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR42);
			VAR21 -= VAR122 + sizeof(struct VAR42);
			break;
		    case VAR43:
			if (VAR19 != VAR122 + sizeof(struct VAR44)) {
			    FUN4((VAR2, "",
			        VAR19, VAR122));
			    return;
			}
			FUN10(*VAR4, sizeof(struct VAR44));
			FUN12(VAR4, VAR14, sizeof(VAR14));
			VAR4 += sizeof(struct VAR44);
			VAR21 -= VAR122 + sizeof(struct VAR44);
			break;
		    default:
			goto VAR45;
			break;
		    }

		    FUN4((VAR2, "", VAR23, VAR14));
		    break;

		default:
		    FUN4((VAR2, "", VAR18, VAR19));
		    VAR4 += VAR19;
		    VAR21 -= VAR19;
		    break;
		}

		if (VAR18 & VAR123)
		    break;
	     }
	}

	FUN4((VAR2, "", VAR5));
	if (VAR2->VAR124 == VAR125 &&
	    (VAR8->VAR36 == VAR62 || VAR8->VAR36 == VAR67))
		FUN31(VAR2, VAR4, FUN7(&VAR8->VAR33));

	return;

VAR45:
	FUN4((VAR2, ""));
	if (VAR10 != '')
		FUN4((VAR2, ""));
}