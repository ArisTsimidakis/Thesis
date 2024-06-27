FUN1(VAR1 *VAR2,
               u_int VAR3, const VAR4 *VAR5, u_int VAR6)
{
	int VAR7;
	uint16_t VAR8;
	uint8_t VAR9, VAR10, VAR11;
        union { 
            float VAR12;
            uint32_t VAR7;
        } VAR13;
	int VAR14;
	u_int VAR15;
	const VAR4 *VAR16;
	char VAR17[VAR18 + 100];
        int  VAR19;

        VAR16 = VAR5;
        VAR15=VAR6;

	switch (VAR3) {
	case VAR20:
		if (VAR6 != 1)
			FUN2((VAR2, ""));
		else {
			FUN3(*VAR16);
			FUN2((VAR2, "", FUN4(VAR21,
						"",
						VAR16[0])));
		}
		break;

        
	case VAR22:
	case VAR23:
		if (VAR6 % 2) {
			FUN2((VAR2, ""));
			break;
		}
                if (!VAR6) {
			FUN2((VAR2, ""));
			break;
                }

                
                VAR19 = FUN5(VAR2, VAR3, VAR5, VAR6);

		while (VAR16 < VAR5 + VAR6) {
			FUN3(VAR16[0]);
                        FUN2((VAR2, "", FUN4(VAR24,
						"", VAR16[0])));
			FUN3(VAR16[1]);
                        for (VAR7 = 0; VAR7 < VAR16[1] * VAR19; VAR7 += VAR19) {
                            FUN6(VAR16[2 + VAR7], VAR19);
			    FUN2((VAR2, "",
				FUN7(VAR2, VAR25, sizeof(VAR25),
				VAR19 == 2 ?
				FUN8(&VAR16[2 + VAR7]) :
				FUN9(&VAR16[2 + VAR7]))));
                        }
			FUN3(VAR16[0]);
                        FUN2((VAR2, "", FUN4(VAR26,
						"", VAR16[0])));
                        FUN3(VAR16[1]);
                        VAR16 += 2 + VAR16[1] * VAR19;
		}
		break;
	case VAR27:
		if (VAR6 != 4)
			FUN2((VAR2, ""));
		else {
			FUN6(VAR16[0], 4);
			FUN2((VAR2, "", FUN10(VAR2, VAR16)));
		}
		break;
	case VAR28:
	case VAR29:
		if (VAR6 != 4)
			FUN2((VAR2, ""));
		else {
			FUN6(VAR16[0], 4);
			FUN2((VAR2, "", FUN9(VAR16)));
		}
		break;
	case VAR30:
		if (VAR6 != 0)
			FUN2((VAR2, ""));
		break;
        case VAR31:

                
                if (VAR6 != 6 && VAR6 != 8) {
                    FUN2((VAR2, ""));
                    break;
                }
                FUN6(VAR16[0], VAR6);
                if (VAR6 == 6) {
		    FUN2((VAR2, "",
			FUN7(VAR2, VAR25, sizeof(VAR25), FUN8(VAR16)),
			FUN10(VAR2, VAR16 + 2)));
                } else {
		    FUN2((VAR2, "",
			FUN7(VAR2, VAR25, sizeof(VAR25),
			FUN9(VAR16)), FUN10(VAR2, VAR16 + 4)));
                }
                break;
	case VAR32:
		if (VAR6 != 8) {
			FUN2((VAR2, ""));
			break;
		}
		FUN6(VAR16[0], 8);
		FUN2((VAR2, "",
	   	    FUN7(VAR2, VAR25, sizeof(VAR25), FUN9(VAR16)),
		    FUN10(VAR2, VAR16 + 4)));
		break;
	case VAR33:
		if (VAR6 % 4) {
			FUN2((VAR2, ""));
			break;
		}
		while (VAR15>0) {
			uint32_t VAR34;
			FUN6(VAR16[0], 4);
			VAR34 = FUN9(VAR16);
			switch (VAR34) {
			case VAR35:
				FUN2((VAR2, ""));
				break;
			case VAR36:
				FUN2((VAR2, ""));
				break;
			case VAR37:
				FUN2((VAR2, ""));
				break;
			default:
				FUN2((VAR2, "",
                                       (VAR34 >> 16) & 0xffff,
                                       VAR34 & 0xffff,
                                       (VAR15>4) ? "" : ""));
				break;
			}
                        VAR15 -=4;
                        VAR16 +=4;
		}
		break;
        case VAR38:
		if (VAR6 != 4) {
			FUN2((VAR2, ""));
			break;
		}
		FUN6(VAR16[0], 4);
                FUN2((VAR2, "",FUN10(VAR2, VAR16)));
                break;
        case VAR39:
		if (VAR6 % 4) {
			FUN2((VAR2, ""));
			break;
		}
                while (VAR15>0) {
			FUN6(VAR16[0], 4);
                        FUN2((VAR2, "",
                               FUN10(VAR2, VAR16),
                                (VAR15>4) ? "" : ""));
                        VAR15 -=4;
                        VAR16 +=4;
                }
                break;
	case VAR40:
		FUN6(VAR16[0], 3);
		VAR8 = FUN8(VAR16);
		VAR9 = VAR16[2];

                FUN2((VAR2, "",
                       FUN4(VAR41, "", VAR8),
                       VAR8,
                       (VAR9>128) ? "" : "", 
                       FUN4(VAR42, "", VAR9),
                       VAR9));

                switch(VAR8<<8 | VAR9) {
                case (VAR43<<8 | VAR44):
                case (VAR43<<8 | VAR45):
                case (VAR43<<8 | VAR46):
                case (VAR43<<8 | VAR47):
                case (VAR43<<8 | VAR48):
                case (VAR43<<8 | VAR49):
                case (VAR43<<8 | VAR50):
                case (VAR43<<8 | VAR51):
                case (VAR43<<8 | VAR52):
		case (VAR43<<8 | VAR53):
                case (VAR54<<8 | VAR44):
                case (VAR54<<8 | VAR45):
                case (VAR54<<8 | VAR46):
                case (VAR54<<8 | VAR47):
                case (VAR54<<8 | VAR49):
                case (VAR54<<8 | VAR50):
                case (VAR54<<8 | VAR51):
                case (VAR55<<8 | VAR44):
                case (VAR55<<8 | VAR45):
                case (VAR55<<8 | VAR46):
                case (VAR55<<8 | VAR49):
                case (VAR55<<8 | VAR50):
                case (VAR55<<8 | VAR51):
                case (VAR56<<8 | VAR49):
                case (VAR56<<8 | VAR50):
                case (VAR56<<8 | VAR51):
                case (VAR57<<8 | VAR58):
                    break;
                default:
                    FUN6(VAR16[0], VAR15);
                    FUN2((VAR2, "", VAR8, VAR9));
                    if (VAR2->VAR59 <= 1)
                        FUN11(VAR2, VAR16, "", VAR15);
                    goto VAR60;
                    break;
                }

                VAR16 +=3;

		FUN3(VAR16[0]);
		VAR11 = VAR16[0];
                VAR15 = VAR11;
                VAR16++;

		if (VAR15) {
                    int VAR61 = 0;
                    FUN2((VAR2, ""));
                    while (VAR15 > 0) {
                        if ( VAR61++ > 0 ) {
                            FUN2((VAR2,  "" ));
                        }
                        switch(VAR8<<8 | VAR9) {
                        case (VAR43<<8 | VAR44):
                        case (VAR43<<8 | VAR45):
                        case (VAR43<<8 | VAR46):
                        case (VAR43<<8 | VAR47):
                        case (VAR43<<8 | VAR48):
                        case (VAR43<<8 | VAR52):
                        case (VAR43<<8 | VAR53):
			    if (VAR15 < (int)sizeof(struct VAR62)) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], sizeof(struct VAR62));
                                FUN2((VAR2, "",FUN10(VAR2, VAR16)));
                                VAR15 -= sizeof(struct VAR62);
                                VAR16 += sizeof(struct VAR62);
                            }
                            break;
                        case (VAR43<<8 | VAR49):
                        case (VAR43<<8 | VAR50):
                        case (VAR43<<8 | VAR51):
                            if (VAR15 < (int)(sizeof(struct VAR62)+VAR63)) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], sizeof(struct VAR62)+VAR63);
                                FUN2((VAR2, "",
                                       FUN12(VAR2, VAR16),
                                       FUN10(VAR2, VAR16+VAR63)));
                                VAR15 -= (sizeof(struct VAR62)+VAR63);
                                VAR16 += (sizeof(struct VAR62)+VAR63);
                            }
                            break;
                        case (VAR54<<8 | VAR44):
                        case (VAR54<<8 | VAR45):
                        case (VAR54<<8 | VAR46):
                        case (VAR54<<8 | VAR47):
                            if (VAR15 < (int)sizeof(struct VAR64)) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], sizeof(struct VAR64));
                                FUN2((VAR2, "", FUN13(VAR2, VAR16)));
                                VAR15 -= sizeof(struct VAR64);
                                VAR16 += sizeof(struct VAR64);
                            }
                            break;
                        case (VAR54<<8 | VAR49):
                        case (VAR54<<8 | VAR50):
                        case (VAR54<<8 | VAR51):
                            if (VAR15 < (int)(sizeof(struct VAR64)+VAR63)) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], sizeof(struct VAR64)+VAR63);
                                FUN2((VAR2, "",
                                       FUN12(VAR2, VAR16),
                                       FUN13(VAR2, VAR16+VAR63)));
                                VAR15 -= (sizeof(struct VAR64)+VAR63);
                                VAR16 += (sizeof(struct VAR64)+VAR63);
                            }
                            break;
                        case (VAR57<<8 | VAR58):
                        case (VAR56<<8 | VAR49):
                        case (VAR56<<8 | VAR50):
                        case (VAR56<<8 | VAR51):
                            if (VAR15 < (int)sizeof(struct VAR62)) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], sizeof(struct VAR62));
                                FUN2((VAR2, "", FUN10(VAR2, VAR16)));
                                VAR15 -= (sizeof(struct VAR62));
                                VAR16 += (sizeof(struct VAR62));
                            }
                            break;
                        case (VAR55<<8 | VAR44):
                        case (VAR55<<8 | VAR45):
                        case (VAR55<<8 | VAR46):
                            FUN6(VAR16[0], VAR15);
                            FUN2((VAR2, "", FUN14(VAR2, VAR16, VAR15)));
                            VAR16 += VAR15;
                            VAR15 = 0;
                            break;

                        case (VAR55<<8 | VAR49):
                        case (VAR55<<8 | VAR50):
                        case (VAR55<<8 | VAR51):
                            if (VAR15 < VAR63+1) {
                                FUN2((VAR2, ""));
                                VAR15 = 0;
                            } else {
                                FUN6(VAR16[0], VAR15);
                                FUN2((VAR2, "",
                                       FUN12(VAR2, VAR16),
                                       FUN14(VAR2, VAR16+VAR63,VAR15-VAR63)));
                                
                                if (FUN9(VAR16+VAR63) ==  0x47000601)
                                    FUN2((VAR2, "", FUN10(VAR2, VAR16+VAR63+4)));
                                
                                else if (FUN15(VAR16+VAR63) ==  0x350000)
                                    FUN2((VAR2, "", FUN13(VAR2, VAR16+VAR63+3)));
                                VAR16 += VAR15;
                                VAR15 = 0;
                            }
                            break;
                        default:
                            FUN6(VAR16[0], VAR15);
                            FUN2((VAR2, "", VAR8, VAR9));
                            if (VAR2->VAR59 <= 1)
                                FUN11(VAR2, VAR16, "", VAR15);
                            VAR16 += VAR15;
                            VAR15 = 0;
                            goto VAR60;
                            break;
                        }
                    }
		}
		FUN2((VAR2, "", VAR11));
		VAR16 += VAR15;

		FUN3(VAR16[0]);
		VAR10 = VAR16[0];
		VAR16++;

		if (VAR10) {
			FUN2((VAR2, "", VAR10));
			for (; VAR10 > 0; VAR10--) {
				FUN3(VAR16[0]);
				FUN2((VAR2, "", VAR16[0]));
				VAR16 += VAR16[0] + 1;
			}
		} else {
			FUN2((VAR2, ""));
                }

		while (VAR16 < VAR5 + VAR6) {
                    switch (VAR8<<8 | VAR9) {
                    case (VAR43<<8 | VAR44):
                    case (VAR43<<8 | VAR45):
                    case (VAR43<<8 | VAR46):
                        VAR14 = FUN16(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR47):
                        VAR14 = FUN17(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR49):
                    case (VAR43<<8 | VAR50):
                    case (VAR43<<8 | VAR51):
                        VAR14 = FUN18(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR48):
                        VAR14 = FUN19(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR52): 
                    case (VAR54<<8 | VAR52):
                        VAR14 = FUN20(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;

		    case (VAR43<<8 | VAR53):
		      VAR14 = FUN21(VAR2, VAR16, VAR17, sizeof(VAR17));
		      if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
		       break;
                    case (VAR54<<8 | VAR44):
                    case (VAR54<<8 | VAR45):
                    case (VAR54<<8 | VAR46):
                        VAR14 = FUN22(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR54<<8 | VAR47):
                        VAR14 = FUN23(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR54<<8 | VAR49):
                    case (VAR54<<8 | VAR50):
                    case (VAR54<<8 | VAR51):
                        VAR14 = FUN24(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR57<<8 | VAR58):
                    case (VAR56<<8 | VAR49):
                    case (VAR56<<8 | VAR50):
                    case (VAR56<<8 | VAR51):
                        VAR14 = FUN25(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR55<<8 | VAR44):
                    case (VAR55<<8 | VAR45):
                    case (VAR55<<8 | VAR46):
                        VAR14 = FUN26(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR55<<8 | VAR49):
                    case (VAR55<<8 | VAR50):
                    case (VAR55<<8 | VAR51):
                        VAR14 = FUN27(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    default:
                        FUN6(*VAR16,VAR15);
                        FUN2((VAR2, "", VAR8, VAR9));
                        if (VAR2->VAR59 <= 1)
                            FUN11(VAR2, VAR16, "", VAR15);
                        VAR14 = 0;
                        VAR16 = VAR5 + VAR6;
                        break;
                    }
                    if (VAR14 < 0)
                        break;
                    VAR16 += VAR14;
		}
        VAR60:
		break;

	case VAR66:
		FUN6(VAR16[0], VAR67);
		VAR8 = FUN8(VAR16);
		VAR9 = VAR16[2];

                FUN2((VAR2, "",
                       FUN4(VAR41, "", VAR8),
                       VAR8,
                       (VAR9>128) ? "" : "", 
                       FUN4(VAR42, "", VAR9),
                       VAR9));

                if (VAR6 == VAR67)
                    FUN2((VAR2, ""));

		VAR16 += 3;

		while (VAR16 < VAR5 + VAR6) {
                    switch (VAR8<<8 | VAR9) {
                    case (VAR43<<8 | VAR44):
                    case (VAR43<<8 | VAR45):
                    case (VAR43<<8 | VAR46):
                        VAR14 = FUN16(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR47):
                        VAR14 = FUN17(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR43<<8 | VAR49):
                    case (VAR43<<8 | VAR50):
                    case (VAR43<<8 | VAR51):
                        VAR14 = FUN18(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR54<<8 | VAR44):
                    case (VAR54<<8 | VAR45):
                    case (VAR54<<8 | VAR46):
                        VAR14 = FUN22(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR54<<8 | VAR47):
                        VAR14 = FUN23(VAR2, VAR16, VAR6, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else if (VAR14 == -3)
                            break; 
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR54<<8 | VAR49):
                    case (VAR54<<8 | VAR50):
                    case (VAR54<<8 | VAR51):
                        VAR14 = FUN24(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR57<<8 | VAR58):
                    case (VAR56<<8 | VAR49):
                    case (VAR56<<8 | VAR50):
                    case (VAR56<<8 | VAR51):
                        VAR14 = FUN25(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR55<<8 | VAR44):
                    case (VAR55<<8 | VAR45):
                    case (VAR55<<8 | VAR46):
                        VAR14 = FUN26(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    case (VAR55<<8 | VAR49):
                    case (VAR55<<8 | VAR50):
                    case (VAR55<<8 | VAR51):
                        VAR14 = FUN27(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
		    case (VAR43<<8 | VAR53):
		      VAR14 = FUN21(VAR2, VAR16, VAR17, sizeof(VAR17));
		      if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
		       break;
                    case (VAR43<<8 | VAR52): 
                    case (VAR54<<8 | VAR52):
                        VAR14 = FUN20(VAR2, VAR16, VAR17, sizeof(VAR17));
                        if (VAR14 == -1)
                            FUN2((VAR2, ""));
                        else if (VAR14 == -2)
                            goto VAR65;
                        else
                            FUN2((VAR2, "", VAR17));
                        break;
                    default:
                        FUN6(*(VAR16-3),VAR15);
                        FUN2((VAR2, "", VAR8, VAR9));
                        if (VAR2->VAR59 <= 1)
                            FUN11(VAR2, VAR16-3, "", VAR15);
                        VAR14 = 0;
                        VAR16 = VAR5 + VAR6;
                        break;
                    }
                    if (VAR14 < 0)
                        break;
                    VAR16 += VAR14;
		}
		break;
        case VAR68:
		if (VAR6 % 8) {
			FUN2((VAR2, ""));
			break;
		}
                while (VAR15>0) {
                    uint16_t VAR69;

                    FUN6(VAR16[0], 2);
                    VAR69=FUN8(VAR16);

		    FUN2((VAR2, "",
			   FUN4(VAR70,
				      "",
				      VAR69),
			   VAR69,
			   FUN28(VAR71, "", VAR69)));

                    FUN6(*(VAR16+2), 6);
                    switch(VAR69) {
                    case VAR72:
                    case VAR73:
                    case VAR74:
                        FUN2((VAR2, "",
                               FUN8(VAR16+2),
                               FUN9(VAR16+4),
                               FUN10(VAR2, VAR16+4)));
                        break;
                    case VAR75:
                    case VAR76:
                    case VAR77:
                    case VAR78:
                        FUN2((VAR2, "",
                               FUN10(VAR2, VAR16+2),
                               FUN8(VAR16+6)));
                        break;
                    case VAR79:
                    case VAR80:
			FUN2((VAR2, "",
			    FUN7(VAR2, VAR25, sizeof(VAR25),
			    FUN9(VAR16+2)), FUN8(VAR16+6)));
			break;
                    case VAR81:
		        VAR13.VAR7 = FUN9(VAR16+2);
                        FUN2((VAR2, "",
                               VAR13.VAR12*8/1000000));
                        break;
                    case VAR82:
                    case VAR83:
                    case VAR84:
                    case VAR85:
                    case VAR86:
                    case VAR87:
                        FUN2((VAR2, "", FUN10(VAR2, VAR16+2)));
                        break;
                    case VAR88:
                    case VAR89:
                        FUN2((VAR2, "",
                               FUN10(VAR2, VAR16+2),
                               FUN4(VAR90,
					  "",
					  *(VAR16+6)),
                               (*(VAR16+7) &  VAR91) ? "" : "",
                               ((*(VAR16+6) == VAR92) || (*(VAR16+6) == VAR93)) ? "" : ""));
                        break;
                    case VAR94:
                        FUN2((VAR2, "",
                               FUN4(VAR95,
					  "",
					  *(VAR16+2)),
                                       *(VAR16+3),
                               FUN8(VAR16+4)));
                        break;
                    case VAR96:
                        FUN2((VAR2, "", FUN8(VAR16+2)));
                        break;
                    default:
                        FUN6(*VAR16,8);
                        FUN11(VAR2, VAR16, "", 8);
                        break;
                    }
                    VAR15 -=8;
                    VAR16 +=8;
                }
                break;

        case VAR97:
        {
                uint8_t VAR98, VAR99;

                FUN6(VAR16[0], 5);
                VAR98 = *(VAR16+1);
                VAR99 = *VAR16;
                VAR15 = VAR6;

                FUN2((VAR2, "",
                       FUN4(VAR100, "", VAR98),
                       VAR98,
                       FUN28(VAR101, "", VAR99),
                       FUN15(VAR16+2)>>4));

                VAR16 +=5;
                VAR15 -= 5;

                switch (VAR98) {
                case VAR102: 
                case VAR103:
                    FUN6(VAR16[0], 8);
                    FUN2((VAR2, "",
                           FUN10(VAR2, VAR16),
                           FUN10(VAR2, VAR16+4)));
                    break;

                case VAR104:
                    FUN6(VAR16[0], 8);
                    FUN2((VAR2, "",
                           FUN10(VAR2, VAR16),
                           FUN10(VAR2, VAR16+4)));
                    break;
                case VAR105:
                    FUN6(VAR16[0], 4);
                    FUN2((VAR2, "",
                           FUN10(VAR2, VAR16)));
                    break;
                case VAR106: 
                case VAR107:
                    FUN6(VAR16[0], 8);
                    FUN2((VAR2, "",
                           FUN10(VAR2, VAR16),
                           FUN9(VAR16+4)));
                    break;
                case VAR108:
                    FUN6(VAR16[0], 8);
                    FUN2((VAR2, "",
                           FUN10(VAR2, VAR16),
                           FUN9(VAR16+4)));
                    break;
                default:
                    if (VAR2->VAR59 <= 1) {
                        FUN11(VAR2, VAR16, "", VAR15);
                    }
                }
                break;
        }
	case VAR109:
	{
		uint8_t VAR110;
		uint16_t VAR111;

		VAR15 = VAR6;

		while (VAR15 >= 3) {

		    FUN6(VAR16[0], 3);

		    VAR110 = *VAR16;
		    VAR111 = FUN8(VAR16+1);
		    VAR16 += 3;
		    VAR15 -= 3;

		    FUN2((VAR2, "",
			      FUN4(VAR112, "", VAR110),
			      VAR110, VAR111));

		    if (VAR111 < 3)
			goto VAR65;
		    VAR111 -= 3;

		    
		    FUN6(VAR16[3], VAR111);

		    switch (VAR110) {

		    case VAR113:
		        if (VAR111 < 8)
		            goto VAR65;
			FUN2((VAR2, "" VAR114,
				  FUN29(VAR16)));
			break;

		    default:
			if (VAR2->VAR59 <= 1) {
			    FUN11(VAR2, VAR16,"", VAR111);
			}
		    }

		    VAR16 += VAR111;
		    VAR15 -= VAR111;
		}
		break;
	}
        case VAR115:
                FUN6(VAR16[0], 4);
                if (VAR6 < 4)
                	goto VAR65;
		FUN2((VAR2, "",
		    FUN7(VAR2, VAR25, sizeof(VAR25), FUN9(VAR16))));
		VAR16+=4;
                VAR6 -=4;

                while (VAR6) {
                    u_int VAR116, VAR117, VAR118;

                    FUN6(VAR16[0], 2);
                    if (VAR6 < 2)
                        goto VAR65;
                    VAR116 = *VAR16;
                    VAR3 = *(VAR16 + 1);
                    VAR16 += 2;
                    VAR6 -= 2;
                    VAR117 = FUN30(VAR116, VAR16);
                    FUN6(VAR16[0], VAR117);
                    if (VAR6 < VAR117)
                        goto VAR65;
                    VAR118 = FUN31(VAR116, VAR16);
                    VAR16 += VAR117;
                    VAR6 -= VAR117;

                    FUN2((VAR2, "",
                           FUN4(VAR119,
                                      "", VAR3),
                           VAR3,
                           VAR118));

                    if (VAR116) {
                        FUN2((VAR2, "",
                               VAR116 & 0x80 ? "" : "",
                               VAR116 & 0x40 ? "" : "",
                               VAR116 & 0x20 ? "" : "",
                               VAR116 & 0x10 ? "" : ""));
                        if (VAR116 & 0xf)
                            FUN2((VAR2, "", VAR116 & 0xf));
                        FUN2((VAR2, ""));
                    }
                    
                    if (!FUN1(VAR2, VAR3, VAR16, VAR118))
                        return 0;
                    VAR16 += VAR118;
                    VAR6 -= VAR118;
		}
                break;

	case VAR120:
		if (VAR6 == 0 || VAR6 % 12) {
			FUN2((VAR2, ""));
			break;
		}
		FUN2((VAR2, ""));
		while (VAR6 > 0) {
			FUN6(*VAR16, 12);
			FUN2((VAR2, "",
				 FUN9(VAR16),
				 FUN9(VAR16 + 4),
				 FUN9(VAR16 + 8),
				 (VAR6 > 12) ? "" : ""));
                        VAR16 += 12;
                        VAR6 -= 12;
		}
		break;
	default:
	    FUN6(*VAR5,VAR6);
            FUN2((VAR2, "", VAR3)); 
            if (VAR2->VAR59 <= 1)
                FUN11(VAR2, VAR5, "", VAR6);
            break;
	}
        if (VAR2->VAR59 > 1 && VAR6) { 
            FUN6(*VAR5,VAR6);
            FUN11(VAR2, VAR5, "", VAR6);
        }
        return 1;

VAR65:
        return 0;
}