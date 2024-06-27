FUN1(VAR1 *VAR2,
               const VAR3 *VAR4, u_int VAR5, const VAR3 *VAR6,
               const char *VAR7, u_int VAR8,
               const struct VAR9 *VAR10)
{
    const struct VAR11 *VAR12;
    const VAR3 *VAR13;
    union {
        const struct VAR14 *VAR15;
        const struct VAR16 *VAR17;
    } VAR18;

    u_short VAR19,VAR20,VAR21,VAR22;
    int VAR23,VAR24,VAR25,VAR26,VAR27,VAR28,VAR29;
    union {
	float VAR30;
	uint32_t VAR28;
    } VAR31;
    uint8_t VAR32;

    u_int VAR33, VAR34;

    while(VAR8>=sizeof(struct VAR11)) {
        
        FUN2(*VAR6, sizeof(struct VAR11));

        VAR12 = (const struct VAR11 *)VAR6;
        VAR19=FUN3(VAR12->VAR35);
        VAR20=VAR12->VAR36;

        if(VAR19 % 4) {
            FUN4((VAR2, "", VAR7, VAR19));
            return -1;
        }
        if(VAR19 < sizeof(struct VAR11)) {
            FUN4((VAR2, "", VAR7, VAR19,
                   (unsigned long)sizeof(const struct VAR11)));
            return -1;
        }

        FUN4((VAR2, "",
               VAR7,
               FUN5(VAR37,
                       "",
                       VAR12->VAR38),
               VAR12->VAR38,
               ((VAR12->VAR38) & 0x80) ? "" : ""));

        if (VAR12->VAR38 > 128)
            FUN4((VAR2, "",
                   ((VAR12->VAR38) & 0x40) ? "" : ""));

        FUN4((VAR2, "",
               FUN5(VAR39,
                       "",
                       ((VAR12->VAR38)<<8)+VAR20),
               VAR20,
               VAR19));

        if(VAR8 < VAR19) {
            FUN4((VAR2, "", VAR7));
            return -1;
        }

        VAR13=VAR6+sizeof(struct VAR11);
        VAR21=VAR19-sizeof(struct VAR11);

        
        if (!FUN6(*VAR6, VAR19))
            return -1;
        VAR23=VAR40;

        switch(VAR12->VAR38) {
        case VAR41:
            switch(VAR20) {
            case VAR42:
                if (VAR21 < 8)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       *(VAR13 + sizeof(struct VAR43))));
                FUN4((VAR2, "",
                       VAR7,
                       *(VAR13+5),
                       FUN3(VAR13 + 6)));
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR44:
                if (VAR21 < 20)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       *(VAR13 + sizeof(struct VAR45))));
                FUN4((VAR2, "",
                       VAR7,
                       *(VAR13+sizeof(struct VAR45)+1),
                       FUN3(VAR13 + sizeof(struct VAR45) + 2)));
                VAR21-=20;
                VAR13+=20;
                break;

            case VAR46:
                if (VAR21 < 36)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN3(VAR13+18),
                       FUN8(VAR2, VAR13 + 20)));
                VAR21-=36;
                VAR13+=36;
                break;

            case VAR47: 
                if (VAR21 < 26)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13),
                       FUN3(VAR13+6),
                       FUN8(VAR2, VAR13 + 8)));
                VAR21-=26;
                VAR13+=26;
                break;
            case VAR48: 
                if (VAR21 < 12)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13+6),
                       FUN7(VAR2, VAR13 + 8)));
                VAR21-=12;
                VAR13+=12;
                break;
            case VAR49:
            case VAR50:
                if (VAR21 < 12)
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13+6),
                       FUN7(VAR2, VAR13 + 8)));
                VAR21-=12;
                VAR13+=12;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR52:
            switch(VAR20) {
            case VAR42:
                if (VAR21 < sizeof(struct VAR43))
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13)));
                VAR21-=sizeof(struct VAR43);
                VAR13+=sizeof(struct VAR43);
                break;
            case VAR44:
                if (VAR21 < sizeof(struct VAR45))
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13)));
                VAR21-=sizeof(struct VAR45);
                VAR13+=sizeof(struct VAR45);
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR53:
            switch(VAR20) {
            case VAR42:
                if (VAR21 < sizeof(struct VAR43))
                    return -1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13)));
                VAR21-=sizeof(struct VAR43);
                VAR13+=sizeof(struct VAR43);
                break;
            case VAR44:
                if (VAR21 < sizeof(struct VAR45))
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13)));
                VAR21-=sizeof(struct VAR45);
                VAR13+=sizeof(struct VAR45);
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR54: 
        case VAR55:  
        case VAR56:  
        case VAR57:
            switch(VAR20) {
            case VAR58:
                while(VAR21 >= 4 ) {
                    FUN4((VAR2, "", VAR7, FUN9(VAR13)));
                    VAR21-=4;
                    VAR13+=4;
                }
                break;
            case VAR59:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13)));
                VAR21-=4;
                VAR13+=4;
                break;
            case VAR60:
                if (VAR21 < 12)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13),
                       VAR7,
                       FUN9(VAR13+4),
                       FUN9(VAR13 + 8)));
                VAR21-=12;
                VAR13+=12;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR61:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN5(VAR62,
                               "",
                               FUN10(VAR13+1)),
                       *(VAR13)));
                VAR21-=4;
                VAR13+=4;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR63:
            switch(VAR20) {
            case VAR42:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13 + 6)));
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR44:
                if (VAR21 < 20)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN3(VAR13 + 18)));
                VAR21-=20;
                VAR13+=20;
                break;
            case VAR48: 
                if (VAR21 < 40)
                    return-1;
                FUN4((VAR2, ""
                       "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN3(VAR13+18),
                       VAR7,
                       FUN8(VAR2, VAR13+20),
                       FUN3(VAR13 + 38)));
                VAR21-=40;
                VAR13+=40;
                break;
            case VAR49:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13 + 6)));
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR64: 
                if (VAR21 < 16)
                    return-1;
                FUN4((VAR2, ""
                       "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13+6),
                       VAR7,
                       FUN7(VAR2, VAR13+8),
                       FUN3(VAR13 + 12)));
                VAR21-=16;
                VAR13+=16;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR65:
            switch(VAR20) {
            case VAR58:
                while(VAR21 >= 4 ) {
                    FUN4((VAR2, "",
                           VAR7,
                           FUN5(VAR66,
                                   "",
                                   FUN3(VAR13 + 2))));
                    VAR21-=4;
                    VAR13+=4;
                }
                break;
            case VAR59:
                if (VAR21 < 12)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN5(VAR66,
                               "",
                               FUN3(VAR13 + 2))));
                FUN4((VAR2, "",((*(VAR13 + 4)) & 0x80) ? "" : "" ));
                FUN4((VAR2, "",
                       VAR7,
                       (FUN3(VAR13+4))&0xfff,
                       (FUN3(VAR13 + 6)) & 0xfff));
                FUN4((VAR2, "",
                       VAR7,
                       (FUN3(VAR13+8))&0xfff,
                       (FUN3(VAR13 + 10)) & 0xfff));
                VAR21-=12;
                VAR13+=12;
                break;
            case VAR60:
                if (VAR21 < 12)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN5(VAR66,
                               "",
                               FUN3(VAR13 + 2))));
                FUN4((VAR2, "",
                       VAR7,
                       (FUN9(VAR13+4))&0x7fffff,
                       (FUN9(VAR13+8))&0x7fffff,
                       (((FUN3(VAR13+4)>>7)&3) == 0 ) ? "" : "",
                       (((FUN3(VAR13 + 4) >> 7) & 3) == 2 ) ? "" : ""));
                VAR21-=12;
                VAR13+=12;
                break;
            case VAR67:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN5(VAR68,
                               "",
                               *VAR13),
		       *VAR13));
                FUN4((VAR2, "",
                       VAR7,
                       FUN5(VAR69,
                               "",
                               *(VAR13+1)),
		       *(VAR13+1),
                       FUN5(VAR70,
                               "",
                               FUN3(VAR13+2)),
		       FUN3(VAR13 + 2)));
                VAR21-=4;
                VAR13+=4;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR71:
        case VAR72:
            switch(VAR20) {
            case VAR42:
                while(VAR21 >= 4 ) {
		    u_char VAR35;

		    FUN2(*VAR13, 4);
		    VAR35 = *(VAR13 + 1);
                    FUN4((VAR2, "",
                           VAR7,
                           FUN5(VAR73,
                                   "",
                                   FUN11(*VAR13)),
                           VAR35));

                    if (VAR35 == 0) { 
                        FUN4((VAR2, "", VAR7));
                        break;
                    }

                    switch(FUN11(*VAR13)) {
		    u_char VAR74;

                    case VAR75:
			if (VAR35 != 8) {
				FUN4((VAR2, ""));
				goto VAR76;
			}
			FUN2(*VAR13, 8);
			VAR74 = *(VAR13+6);
			if (VAR74 != 32) {
				FUN4((VAR2, "",
					  VAR74));
				goto VAR76;
			}
                        FUN4((VAR2, "",
                               FUN12(*VAR13) ? "" : "",
                               FUN7(VAR2, VAR13+2),
                               *(VAR13+6),
                               FUN13(VAR77,
                                   "",
                                   *(VAR13 + 7)))); 
                    break;
                    case VAR78:
			if (VAR35 != 8) {
				FUN4((VAR2, ""));
				goto VAR76;
			}
			FUN2(*VAR13, 8);
                        FUN4((VAR2, "",
                               FUN13(VAR79,
                                   "",
                                   *(VAR13+2)),
                               *(VAR13+2),
                               FUN5(VAR39,
                                       "",
                                       *(VAR13+3) + 256*VAR71),
                               *(VAR13+3),
                               FUN9(VAR13 + 4)));
                    }
                    VAR21-=*(VAR13+1);
                    VAR13+=*(VAR13+1);
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR80:
            switch(VAR20) {
            case VAR58:
            case VAR59:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13),
                       FUN9(VAR13 + 4)));
                VAR21-=8;
                VAR13+=8;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR81:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13),
                       FUN9(VAR13 + 4)));
                VAR21-=8;
                VAR13+=8;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR82:
            switch(VAR20) {
            case VAR49:
                if (VAR21 < 4)
                    return-1;
                VAR32 = *(VAR13+3);
                if (VAR21 < 4+VAR32)
                    return-1;
                FUN4((VAR2, "", VAR7));
                for (VAR28 = 0; VAR28 < VAR32; VAR28++)
                    FUN14(VAR2, *(VAR13 + 4 + VAR28));
                FUN4((VAR2, "",
                       VAR7,
                       (int)*VAR13,
                       (int)*(VAR13+1),
                       FUN13(VAR83,
                                  "",
                                  *(VAR13+2)),
                       *(VAR13 + 2)));
                VAR21-=4+*(VAR13+3);
                VAR13+=4+*(VAR13+3);
                break;
            default:
                VAR23=VAR51;
            }
            break;

	case VAR84:
            switch(VAR20) {
		int VAR85,VAR86,VAR87,VAR88;

            case VAR58:

                if (VAR21 < 4)
                    return-1;

		
		VAR88 = VAR21;
                while(VAR88 > 0) {
                    VAR87  = FUN3(VAR13);
                    VAR85 = (FUN3(VAR13+2))>>8;
                    VAR86 = (FUN3(VAR13+2))&0x00FF;

                    FUN4((VAR2, "",
                           VAR7,
                           FUN5(VAR89, "", VAR85),
                           VAR85,
                           FUN5(VAR90, "", VAR86), VAR86,
                           VAR87));

                    if(VAR87 == 0)
                        goto VAR76;

                    switch(VAR85) {
                    case VAR91:
                    case VAR92:

                        switch(VAR86) {
                        case VAR93:
                            if (VAR87 < 8)
                                return -1;
                            FUN4((VAR2, "",
                                   VAR7, FUN7(VAR2, VAR13 + 4)));
                            break;
                        case VAR94:
                            if (VAR87 < 20)
                                return -1;
                            FUN4((VAR2, "",
                                   VAR7, FUN8(VAR2, VAR13 + 4)));
                            break;
                        case VAR95:
                            if (VAR87) {
                                
                                VAR23=VAR51;
                            }
                            break;
                        }
                        break;

                    case VAR96:
                        if (VAR87) {
                            
                            VAR23=VAR51;
                        }
                        break;

                    case VAR97:
                        if (VAR87 < 16) {
                            return -1;
                        }

                        FUN4((VAR2, "",
                               VAR7,
                               ((FUN9(VAR13+4))>>31),
                               ((FUN9(VAR13+4))&0xFF),
                               FUN9(VAR13+8),
                               FUN9(VAR13 + 12)));
                        break;

                    case VAR98:
                        if (VAR87 < 8) {
                            return -1;
                        }

                        FUN4((VAR2, "",
                               VAR7, (FUN9(VAR13 + 4)) >> 24));
                        break;

                    default:
                        VAR23=VAR51;
                        break;
                    }
                    VAR88-=VAR87;
                    VAR13+=VAR87;
                    VAR21+=VAR87;
		}

                if (VAR88) {
                    
                    VAR23=VAR51;
                }
                break;

            default:
                VAR23=VAR51;
            }
            break;

        case VAR99:
            switch(VAR20) {
            case VAR60: 
            case VAR42:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN9(VAR13 + 4)));
                VAR21-=8;
                VAR13+=8;
                if (VAR21)
                    VAR23=VAR51; 
                break;
            case VAR67: 
            case VAR44:
                if (VAR21 < 20)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN9(VAR13 + 16)));
                VAR21-=20;
                VAR13+=20;
                VAR23=VAR51; 
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR100:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13)));
                VAR21-=4;
                VAR13+=4;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        
        case VAR101:
        case VAR102:
        case VAR103:
            switch(VAR20) {
            case VAR59:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       (*VAR13 & 0xf0) >> 4,
                       FUN3(VAR13 + 2) << 2));
                VAR13+=4; 
                VAR21-=4;

                while (VAR21 >= 4) {
                    VAR22=FUN3(VAR13+2)<<2;
                    FUN4((VAR2, "",
                           VAR7,
                           FUN5(VAR104,"",*(VAR13)),
                           *(VAR13),
                           (*(VAR13+1)&0x80) ? "" : "",
                           VAR22));

                    VAR13+=4; 
                    VAR21-=4;

                    while (VAR22>=4) {
                        VAR24 = FUN15(VAR2, VAR13, VAR21);
                        if (VAR24 == 0)
                            break;
                        VAR21-=VAR24;
                        VAR22-=VAR24;
                        VAR13+=VAR24;
                    }
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR105:
            switch(VAR20) {
            case VAR42:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13 + 6)));
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR44:
                if (VAR21 < 20)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN3(VAR13 + 18)));
                VAR21-=20;
                VAR13+=20;
                break;
            case VAR60:
                if (VAR21 < 20)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN10(VAR13 + 17)));
                VAR21-=20;
                VAR13+=20;
                break;
            case VAR46:
                if (VAR21 < 20)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13 + 18)));
                VAR21-=20;
                VAR13+=20;
                break;
            case VAR48: 
                if (VAR21 < 40)
                    return-1;
                FUN4((VAR2, ""
                       "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       FUN3(VAR13+18),
                       VAR7,
                       FUN8(VAR2, VAR13+20),
                       FUN3(VAR13 + 38)));
                VAR21-=40;
                VAR13+=40;
                break;
            case VAR49:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13 + 6)));
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR64: 
                if (VAR21 < 16)
                    return-1;
                FUN4((VAR2, ""
                       "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       FUN3(VAR13+6),
                       VAR7,
                       FUN7(VAR2, VAR13+8),
                       FUN3(VAR13 + 12)));
                VAR21-=16;
                VAR13+=16;
                break;
            default:
                VAR23=VAR51;
            }
            break;

         case VAR106:
             
             VAR18.VAR17 = (const struct VAR16 *)VAR13;

            VAR31.VAR28 = FUN9(VAR18.VAR17->VAR107);
 
             switch(VAR20) {
             case VAR58: 
                 if (VAR21 < sizeof(struct VAR16))
                     return-1;


                 FUN4((VAR2, "",
                        VAR7,
                        (int)VAR18.VAR17->VAR108,
                       (int)VAR18.VAR17->VAR109,
                       (int)VAR18.VAR17->VAR110,
                        VAR31.VAR30 * 8 / 1000000));
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR18.VAR17->VAR111),
                       FUN9(VAR18.VAR17->VAR112),
                       FUN9(VAR18.VAR17->VAR113)));
                VAR21-=sizeof(struct VAR16);
                VAR13+=sizeof(struct VAR16);
                break;

             case VAR49: 
                 if (VAR21 < 16)
                     return-1;


                 FUN4((VAR2, "",
                        VAR7,
                        (int)VAR18.VAR17->VAR108,
                       (int)VAR18.VAR17->VAR109,
                       (int)VAR18.VAR17->VAR110,
                        VAR31.VAR30 * 8 / 1000000));
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR18.VAR17->VAR111),
                       FUN9(VAR18.VAR17->VAR112)));
                VAR21-=16;
                VAR13+=16;
                break;

            default:
                VAR23=VAR51;
            }
            break;

        case VAR114:
            switch(VAR20) {
            case VAR49:
                while(VAR21 >= 8) {
                    FUN4((VAR2, "",
                           VAR7,
                           FUN7(VAR2, VAR13),
                           FUN7(VAR2, VAR13 + 4)));
                    VAR21-=8;
                    VAR13+=8;
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR115:
        case VAR116: 
            switch(VAR20) {
            case VAR58:
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR13) & 0x7));
                VAR21-=4;
                VAR13+=4;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR117:
            switch(VAR20) {
            case VAR60: 
            case VAR42:
                if (VAR21 < 8)
                    return-1;
                VAR26=*(VAR13+5);
                VAR27=FUN3(VAR13+6);
                FUN4((VAR2, "",
                       VAR7,
                       FUN7(VAR2, VAR13),
                       *(VAR13+4),
                       VAR7,
                       FUN5(VAR118,"",VAR26),
                       VAR26));
                switch (VAR26) {
                case VAR119:
                    FUN4((VAR2, "",
                           FUN5(VAR120,"",VAR27),
                           VAR27));
                    break;
                case VAR121: 
                case VAR122:
                    FUN4((VAR2, "",
                           FUN5(VAR123,"",VAR27),
                           VAR27));
                    break;
                default:
                    FUN4((VAR2, "", VAR27));
                    break;
                }
                VAR21-=8;
                VAR13+=8;
                break;
            case VAR67: 
            case VAR44:
                if (VAR21 < 20)
                    return-1;
                VAR26=*(VAR13+17);
                VAR27=FUN3(VAR13+18);
                FUN4((VAR2, "",
                       VAR7,
                       FUN8(VAR2, VAR13),
                       *(VAR13+16),
                       VAR7,
                       FUN5(VAR118,"",VAR26),
                       VAR26));

                switch (VAR26) {
                case VAR119:
                    FUN4((VAR2, "",
                           FUN5(VAR120,"",VAR27),
			   VAR27));
                    break;
                default:
                    break;
                }
                VAR21-=20;
                VAR13+=20;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR124:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 4)
                    return-1;
                VAR25 = FUN3(VAR13+2);
                FUN4((VAR2, "",
                       VAR7,
                       FUN3(VAR13),
                       VAR25));
                VAR21-=4;
                VAR13+=4;
                
                while(VAR21 >= 2 + VAR25) {
                    FUN4((VAR2, "", 
                           VAR7,
                           FUN5(VAR125,"",*VAR13),
                           *VAR13,
                           *(VAR13 + 1)));
                    if (VAR21 < *(VAR13+1))
                        return-1;
                    if (*(VAR13+1) < 2)
                        return -1;
                    FUN16(VAR2, VAR13 + 2, "", *(VAR13 + 1) - 2);
                    VAR21-=*(VAR13+1);
                    VAR13+=*(VAR13+1);
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR126:     
        case VAR127: 
        case VAR128:
            switch(VAR20) {
            case VAR58:
            case VAR59:
                if (VAR21 < 8)
                    return-1;
                FUN4((VAR2, "",
                       VAR7,
                       *VAR13,
                       FUN10(VAR13 + 1)));
                VAR21-=4;
                VAR13+=4;
                
                while(VAR21 >= 4) {
                    FUN4((VAR2, "",
                           VAR7,
                           FUN9(VAR13),
                           FUN9(VAR13)));
                    VAR21-=4;
                    VAR13+=4;
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR129:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < sizeof(struct VAR14))
                    return-1;
                VAR18.VAR15 = (const struct VAR14 *)VAR13;
                FUN4((VAR2, "",
                       VAR7,
                       FUN3(VAR18.VAR15->VAR130),
                       FUN9(VAR18.VAR15->VAR130+2),
                       FUN9(VAR18.VAR15->VAR131),
                       FUN9(VAR18.VAR15->VAR131+4),
                       FUN13(VAR132,
                                  "",
                                  VAR18.VAR15->VAR133)));
                FUN4((VAR2, "",
                       VAR7,
                       FUN9(VAR18.VAR15->VAR134),
                       FUN9(VAR18.VAR15->VAR134+4),
                       FUN9(VAR18.VAR15->VAR134+8),
                       FUN9(VAR18.VAR15->VAR134 + 12)));

                VAR29 = FUN17(VAR2, VAR4, VAR5,
                                            VAR18.VAR15->VAR134,
                                            VAR135,
                                            VAR10);
                FUN4((VAR2, "", FUN5(VAR136, "", VAR29)));

                VAR21+=sizeof(struct VAR14);
                VAR13+=sizeof(struct VAR14);
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR137:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "", VAR7,
                       FUN13(VAR138, "",
                                  FUN9(VAR13))));
                VAR21-=4;
                VAR13+=4;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR139:
            switch(VAR20) {
            case VAR58:
                if (VAR21 < 4)
                    return-1;
                VAR33 = (FUN3(VAR13)>>8);

                FUN4((VAR2, "", VAR7,
                       FUN5(VAR140, "", VAR33),
                       VAR33, ((FUN9(VAR13) & 0x7F))));

                switch (VAR33) {
                case VAR141:
                case VAR142: 

		    
		    if (VAR21 < 12)
			return -1;
		    FUN4((VAR2, "", VAR7,
                           FUN9(VAR13+4),
                           FUN9(VAR13 + 8)));
		    VAR21-=12;
		    VAR13+=12;
                    break;

                default:
                    VAR21-=4;
                    VAR13+=4;
                    VAR34 = 1;
                    while(VAR21 >= 4 ) {
                        FUN4((VAR2, "", VAR7, VAR34,
                               FUN9(VAR13)));
                        VAR13+=4;
                        VAR21-=4;
                        VAR34++;
                    }
                    break;
                }
                break;
            default:
                VAR23=VAR51;
            }
            break;

        case VAR143:
            switch (VAR20) {
            case VAR42:
                if (VAR21 < 4)
                    return-1;
                FUN4((VAR2, "",
                       VAR7, FUN7(VAR2, VAR13)));

                VAR21-=4;
                VAR13+=4;
                break;
            case VAR44:
                if (VAR21 < 16)
                    return-1;
                FUN4((VAR2, "",
                       VAR7, FUN8(VAR2, VAR13)));

                VAR21-=16;
                VAR13+=16;
                break;
            default:
                VAR23=VAR51;
            }
            break;

        

        case VAR144:
        case VAR145:
        case VAR146:
        case VAR147:
        default:
            if (VAR2->VAR148 <= 1)
                FUN16(VAR2, VAR13, "", VAR21); 
            break;
        }
        
        if (VAR2->VAR148 > 1 || VAR23 == VAR51)
            FUN16(VAR2, VAR6 + sizeof(struct VAR11), "", 
                               VAR19 - sizeof(struct VAR11));

        VAR6+=VAR19;
        VAR8-=VAR19;
    }
    return 0;
VAR76:
    FUN4((VAR2, "", VAR149));
    return -1;
VAR150:
    FUN4((VAR2, ""));
    FUN4((VAR2, "", VAR151));
    return -1;
}