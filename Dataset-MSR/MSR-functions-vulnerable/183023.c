FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5, const VAR3 *VAR6,
           int VAR7)
{
	char *VAR8;
	const struct VAR9 *VAR10;
        const struct VAR11 *VAR12;
	const struct VAR13 *VAR13;
	const char *VAR14, *VAR15;
	const struct VAR13 *VAR16;
	const struct VAR17 *VAR18;
        const VAR19 *VAR20;
        uint32_t VAR21;
        const VAR3 *VAR22;
	const struct VAR23 *VAR24;
	u_int VAR25, VAR26, VAR27, VAR28, VAR29, VAR30;
	char VAR31[VAR32 + 100];
	struct cksum_vec VAR33[1];

	VAR10 = (const struct VAR9 *)VAR4;
        VAR12 = (const struct VAR11 *)VAR4;
	VAR13 = (const struct VAR13 *)VAR6;
	VAR14 = VAR31;

	FUN2(VAR10->VAR34);
	switch (VAR10->VAR35) {

	case VAR36:
	case VAR37:
		FUN2(VAR10->VAR38);
		(void)snprintf(VAR31, sizeof(VAR31), "",
                               VAR10->VAR35 == VAR36 ?
                               "" : "",
                               FUN3(&VAR10->VAR39),
                               FUN3(&VAR10->VAR38));
		break;

	case VAR40:
		FUN2(VAR10->VAR41.VAR42);
		switch (VAR10->VAR34) {

		case VAR43:
			FUN2(VAR10->VAR41.VAR44);
			(void)snprintf(VAR31, sizeof(VAR31),
			    "",
			    FUN4(VAR2, &VAR10->VAR41.VAR42),
			    VAR10->VAR41.VAR44);
			break;

		case VAR45:
			FUN2(VAR10->VAR41.VAR44);
			VAR16 = &VAR10->VAR41;
			VAR25 = FUN5(VAR16) * 4;
			VAR18 = (const struct VAR17 *)(((const VAR3 *)VAR16) + VAR25);
			FUN2(VAR18->VAR46);
			VAR26 = FUN3(&VAR18->VAR46);
			switch (VAR16->VAR44) {

			case VAR47:
				(void)snprintf(VAR31, sizeof(VAR31),
					"",
					FUN4(VAR2, &VAR16->VAR42),
					FUN6(VAR2, VAR26));
				break;

			case VAR48:
				(void)snprintf(VAR31, sizeof(VAR31),
					"",
					FUN4(VAR2, &VAR16->VAR42),
					FUN7(VAR2, VAR26));
				break;

			default:
				(void)snprintf(VAR31, sizeof(VAR31),
					"",
					FUN4(VAR2, &VAR16->VAR42),
					VAR16->VAR44, VAR26);
				break;
			}
			break;

		case VAR49:
		    {
			register const struct VAR50 *VAR51;
			VAR51 = (const struct VAR50 *)(const VAR3 *)&VAR10->VAR52;
			VAR27 = FUN3(&VAR51->VAR53);
			if (VAR27) {
				(void)snprintf(VAR31, sizeof(VAR31),
				    "",
				    FUN4(VAR2, &VAR10->VAR41.VAR42), VAR27);
			} else {
				(void)snprintf(VAR31, sizeof(VAR31),
				    "",
				    FUN4(VAR2, &VAR10->VAR41.VAR42));
			}
		    }
			break;

		default:
			VAR15 = FUN8(VAR54, "",
			    VAR10->VAR34);
			(void)snprintf(VAR31, sizeof(VAR31), VAR15,
			    FUN4(VAR2, &VAR10->VAR41.VAR42));
			break;
		}
		break;

	case VAR55:
		FUN2(VAR10->VAR41.VAR42);
		VAR15 = FUN8(VAR56, "",
		    VAR10->VAR34);
		(void)snprintf(VAR31, sizeof(VAR31), VAR15,
		    FUN4(VAR2, &VAR10->VAR41.VAR42),
		    FUN4(VAR2, &VAR10->VAR57));
		break;

	case VAR58:
	    {
		register const struct VAR59 *VAR60;
		register const struct VAR61 *VAR62;
		u_int VAR63, VAR64, VAR65;

		(void)snprintf(VAR31, sizeof(VAR31), "");
		VAR8 = VAR31 + strlen(VAR31);

		VAR60 = (const struct VAR59 *)&VAR10->VAR52;
		FUN2(*VAR60);
		(void)strncpy(VAR8, "", sizeof(VAR31) - (VAR8 - VAR31));
		VAR8 = VAR31 + strlen(VAR31);
		VAR63 = FUN3(&VAR60->VAR66);
		if (VAR63 < 60) {
			(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31), "",
			    VAR63);
		} else if (VAR63 < 60 * 60) {
			(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31), "",
			    VAR63 / 60, VAR63 % 60);
		} else {
			(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31),
			    "",
			    VAR63 / 3600,
			    (VAR63 % 3600) / 60,
			    VAR63 % 60);
		}
		VAR8 = VAR31 + strlen(VAR31);

		VAR64 = VAR60->VAR67;
		(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31), "", VAR64);
		VAR8 = VAR31 + strlen(VAR31);

		VAR65 = VAR60->VAR68;
		if (VAR65 != 2) {
			(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31),
			    "", VAR65);
			break;
		}
		VAR62 = (const struct VAR61 *)&VAR10->VAR69;
		while (VAR64-- > 0) {
			FUN2(*VAR62);
			(void)snprintf(VAR8, sizeof(VAR31) - (VAR8 - VAR31), "",
			    FUN4(VAR2, &VAR62->VAR70),
			    FUN9(&VAR62->VAR71));
			VAR8 = VAR31 + strlen(VAR31);
			++VAR62;
		}
	    }
		break;

	case VAR72:
		FUN2(VAR10->VAR41.VAR42);
		switch (VAR10->VAR34) {

		case VAR73:
			VAR14 = "";
			break;

		case VAR74:
			VAR14 = "";
			break;

		default:
			(void)snprintf(VAR31, sizeof(VAR31), "",
			    VAR10->VAR34);
			break;
		}
		break;

	case VAR75:
		if (VAR10->VAR34)
			(void)snprintf(VAR31, sizeof(VAR31),
			    "", VAR10->VAR34);
		else {
			FUN2(VAR10->VAR76);
			(void)snprintf(VAR31, sizeof(VAR31),
			    "", VAR10->VAR76);
		}
		break;

	case VAR77:
		FUN2(VAR10->VAR78);
		(void)snprintf(VAR31, sizeof(VAR31), "",
		    FUN9(&VAR10->VAR78));
		break;

	case VAR79:
		FUN2(VAR10->VAR38);
		(void)snprintf(VAR31, sizeof(VAR31),
		    "",
		    FUN3(&VAR10->VAR39),
		    FUN3(&VAR10->VAR38));
		break;

	case VAR80:
		FUN2(VAR10->VAR81);
		(void)snprintf(VAR31, sizeof(VAR31),
		    "",
                               FUN3(&VAR10->VAR39),
                               FUN3(&VAR10->VAR38),
                               FUN10(FUN9(&VAR10->VAR82)));

                (void)snprintf(VAR31+strlen(VAR31),sizeof(VAR31)-strlen(VAR31),"",
                         FUN10(FUN9(&VAR10->VAR83)));
                (void)snprintf(VAR31+strlen(VAR31),sizeof(VAR31)-strlen(VAR31),"",
                         FUN10(FUN9(&VAR10->VAR81)));
                break;

	default:
		VAR14 = FUN8(VAR84, "", VAR10->VAR35);
		break;
	}
	FUN11((VAR2, "", VAR14, VAR5));
	if (VAR2->VAR85 && !VAR7) { 
		if (FUN12(*VAR4, VAR5)) {
			uint16_t VAR86;

			VAR33[0].VAR87 = (const VAR19 *)(const void *)VAR10;
 			VAR33[0].VAR88 = VAR5;
 			VAR86 = FUN13(VAR33, 1);
 			if (VAR86 != 0) {


 				uint16_t VAR89 = FUN3(&VAR10->VAR90);
 				FUN11((VAR2, "",
 					     VAR89,
					     FUN14(VAR89, VAR86)));
			}
		}
	}

        
	if (VAR2->VAR85 >= 1 && FUN15(VAR10->VAR35)) {
		VAR4 += 8;
		FUN11((VAR2, ""));
		VAR13 = (const struct VAR13 *)VAR4;
		VAR2->VAR91 = VAR2->VAR92 - VAR4;
                VAR22 = VAR2->VAR92;
		FUN16(&VAR13->VAR93);
		FUN17(VAR2, VAR4, FUN3(&VAR13->VAR93));
                VAR2->VAR92 = VAR22;
	}

        
        if (VAR2->VAR85 >= 1 && VAR5 > VAR94 && FUN18(VAR10->VAR35)) {

            FUN2(*VAR12);

            
            if (!VAR12->VAR95 &&
                FUN12(VAR12->VAR96, VAR5 - VAR94)) {
                VAR33[0].VAR87 = (const VAR19 *)(const void *)&VAR12->VAR96;
                VAR33[0].VAR88 = VAR5 - VAR94;
                if (FUN13(VAR33, 1)) {
                    return;
                }
            }

            FUN11((VAR2, "",
                   FUN19(*(VAR12->VAR96))));

            
            if (FUN19(*(VAR12->VAR96)) !=
                VAR97) {
                FUN11((VAR2, ""));
                return;
            }

            VAR25 = VAR5 - VAR94;
            if (FUN12(VAR12->VAR96, VAR25)) {
                VAR33[0].VAR87 = (const VAR19 *)(const void *)&VAR12->VAR96;
                VAR33[0].VAR88 = VAR25;
                FUN11((VAR2, "",
                       FUN3(VAR12->VAR98),
                       FUN13(VAR33, 1) ? "" : "",
                       VAR25));
            }

            VAR25 -= 4; 
            VAR20 = (const VAR19 *)VAR12->VAR99;

            while (VAR25 > sizeof(struct VAR23)) {

                VAR24 = (const struct VAR23 *)VAR20;
                FUN2(*VAR24);
                VAR28 = FUN3(VAR24->VAR100);
                VAR29 = VAR24->VAR101;
                VAR30 = VAR24->VAR102;
                VAR20 += sizeof(struct VAR23);

                FUN11((VAR2, "",
                       FUN8(VAR103,"",VAR29),
                       VAR29,
                       VAR30,
                       VAR28));

                VAR25-=sizeof(struct VAR23); 

                
                if ((VAR29 == 0) ||
                    (VAR28 < sizeof(struct VAR23))) {
                    return;
                }
                VAR28-=sizeof(struct VAR23);

                switch (VAR29) {
                case 1:
                    switch(VAR30) {
                    case 1:
                        FUN20(*VAR20, 4);
                        VAR21 = FUN9(VAR20);
                        FUN11((VAR2, "", FUN21(VAR21), FUN22(VAR21)));
                        if (FUN23(VAR21))
                            FUN11((VAR2, ""));
                        FUN11((VAR2, "", FUN24(VAR21)));
                        break;
                    default:
                        FUN25(VAR2, VAR20, "", VAR28);
                    }
                    break;

               
                case 2:
                default:
                    FUN25(VAR2, VAR20, "", VAR28);
                    break;
                }
                if (VAR25 < VAR28)
                    break;
                VAR25 -= VAR28;
                VAR20 += VAR28;
            }
        }

	return;
VAR104:
	FUN11((VAR2, ""));
}