FUN1(VAR1 *VAR2,
          register const VAR3 *VAR4, register u_int VAR5)
{
    const struct VAR6 *VAR7;
     const struct VAR8 *VAR9;
     const VAR3 *VAR10,*VAR11;
     u_int VAR12,VAR13,VAR14,VAR15;

    int VAR16;


     u_int VAR17;
     u_int VAR18;
 
    union { 
        float VAR19;
        uint32_t VAR20;
    } VAR21;

    VAR10=VAR4;
    VAR7 = (const struct VAR6 *)VAR4;
    FUN2(*VAR7);

    
    if (FUN3(VAR7->VAR22[0]) != VAR23) {
	FUN4((VAR2, "",
               FUN3(VAR7->VAR22[0])));
	return;
    }

    
    if (VAR2->VAR24 < 1) {
        FUN4((VAR2, "",
               FUN3(VAR7->VAR22[0]),
               FUN5(VAR25, "",VAR7->VAR26),
               VAR5));
        return;
    }

    

    VAR12=FUN6(VAR7->VAR27);

    FUN4((VAR2, "",
           FUN3(VAR7->VAR22[0]),
           FUN5(VAR25, "",VAR7->VAR26),
           FUN7(VAR28,"",VAR7->VAR29),
           VAR12));
    if (VAR12 < sizeof(const struct VAR6)) {
        FUN4((VAR2, ""));
        return;
    }
    if (VAR12 > VAR5) {
        FUN4((VAR2, ""));
        VAR12 = VAR5;
    }

    VAR10+=sizeof(const struct VAR6);
    VAR12-=sizeof(const struct VAR6);

    while(VAR12>0) {
        
        FUN8(*VAR10, sizeof(struct VAR8));

        VAR9 = (const struct VAR8 *)VAR10;
        VAR13=FUN6(VAR9->VAR27);
        VAR14=(VAR9->VAR30)&0x7f;

        FUN4((VAR2, "",
               FUN5(VAR31,
                       "",
                       VAR9->VAR32),
               VAR9->VAR32,
               FUN5(VAR33,
                       "",
                       ((VAR9->VAR32)<<8)+VAR14),
               VAR14,
               (VAR9->VAR30)&0x80 ? "" : "",
               VAR13));

        if (VAR13 < 4) {
            FUN4((VAR2, ""));
            return;
        }
        if ((VAR13 % 4) != 0) {
            FUN4((VAR2, ""));
            return;
        }

        VAR11=VAR10+sizeof(struct VAR8);
        VAR15=VAR13-sizeof(struct VAR8);

        
        FUN8(*VAR10, VAR13);
        VAR16=VAR34;

        switch(VAR9->VAR32) {

        case VAR35:
            switch(VAR14) {
            case VAR36:
            case VAR37:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11),
                       FUN9(VAR11)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR39:
        case VAR40:
            switch(VAR14) {
            case VAR41:
            case VAR42:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN10(VAR2, VAR11),
                       FUN9(VAR11)));
                break;
            case VAR43:
            case VAR44:
                if (VAR15 != 16) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN11(VAR2, VAR11),
                       FUN9(VAR11)));
                break;
            case VAR45:
            case VAR46:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11),
                       FUN9(VAR11)));
                break;
            default:
                VAR16=VAR38;
            }
            break;

        case VAR47:
            switch(VAR14) {
            case VAR48:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11),
                       FUN9(VAR11)));
                break;
            case VAR49:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11),
                       FUN9(VAR11)));
                break;
            default:
                VAR16=VAR38;
            }
            break;

        case VAR50:
            switch(VAR14) {
            case VAR36:
            case VAR37:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN10(VAR2, VAR11),
                       FUN9(VAR11)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR51:
            switch(VAR14) {
            case VAR52:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN6(VAR11),
                       FUN6(VAR11+2)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR53:
            switch(VAR14) {
	    case VAR54:
                if (VAR15 != 8) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11),
                       FUN9(VAR11+4)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR55:
	    switch(VAR14) {
	    case VAR56:
                if (VAR15 != 12) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		    FUN7(VAR57,
			"",
			FUN12(VAR11))));

		FUN4((VAR2, ""
		       "",
                       FUN10(VAR2, VAR11+4),
                       FUN9(VAR11+4),
                       FUN10(VAR2, VAR11+8),
                       FUN9(VAR11+8)));
		break;

	    case VAR58:
                if (VAR15 != 36) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		    FUN7(VAR57,
			"",
			FUN12(VAR11))));

		FUN4((VAR2, ""
		       "",
                       FUN11(VAR2, VAR11+4),
                       FUN9(VAR11+4),
                       FUN11(VAR2, VAR11+20),
                       FUN9(VAR11+20)));
                break;

	    case VAR59:
                if (VAR15 != 12) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		    FUN7(VAR57,
			"",
			FUN12(VAR11))));

		FUN4((VAR2, ""
		       "",
                       FUN9(VAR11+4),
                       FUN9(VAR11+4),
                       FUN9(VAR11+8),
                       FUN9(VAR11+8)));
		break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR60:
	    switch(VAR14) {
	    case VAR56:
                if (VAR15 < 12) {
                    FUN4((VAR2, ""));
                    break;
                }
	        FUN4((VAR2, "",
		    FUN7(VAR61,
			"",
			FUN12(VAR11))));
                FUN4((VAR2, ""
                       "",
                       FUN10(VAR2, VAR11+4),
                       FUN9(VAR11+4),
                        FUN10(VAR2, VAR11+8),
                        FUN9(VAR11+8)));
 

		if (FUN13(VAR2, VAR11, VAR15 - 12, 12))








 		    VAR16=VAR38;
 		break;
 
	    case VAR58:
                if (VAR15 < 36) {
                    FUN4((VAR2, ""));
                    break;
                }
	        FUN4((VAR2, "",
		    FUN7(VAR61,
			"",
			FUN12(VAR11))));
                FUN4((VAR2, ""
                       "",
                       FUN11(VAR2, VAR11+4),
                       FUN9(VAR11+4),
                        FUN11(VAR2, VAR11+20),
                        FUN9(VAR11+20)));
 

		if (FUN13(VAR2, VAR11, VAR15 - 36, 36))








 		    VAR16=VAR38;
 		break;
 
	    case VAR59:
                if (VAR15 < 12) {
                    FUN4((VAR2, ""));
                    break;
                }
	        FUN4((VAR2, "",
		    FUN7(VAR61,
			"",
			FUN12(VAR11))));
                FUN4((VAR2, ""
                       "",
                       FUN9(VAR11+4),
                       FUN9(VAR11+4),
                        FUN9(VAR11+8),
                        FUN9(VAR11+8)));
 

		if (FUN13(VAR2, VAR11, VAR15 - 12, 12))








 		    VAR16=VAR38;
 		break;
 
            default:
                VAR16=VAR38;
            }
            break;

        case VAR62:
	    switch(VAR14) {
            case VAR48:
                if (VAR15 != 20) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		FUN7(VAR63,
			"",
			FUN6(VAR11))));
		FUN4((VAR2, "",
			FUN6(VAR11+2)));
		FUN4((VAR2, "",
			FUN9(VAR11+4)));
                FUN4((VAR2, "",
			FUN5(VAR64, "", *(VAR11+8))));
                FUN4((VAR2, "",
			FUN6(VAR11+10),
			FUN6(VAR11+10),
			FUN6(VAR11+10)&8000 ? "" : ""));
                VAR21.VAR20 = FUN9(VAR11+12);
		FUN4((VAR2, "",VAR21.VAR19*8/1000000));
		FUN4((VAR2, "",
			FUN9(VAR11+16)));
		break;

            default:
                VAR16=VAR38;
            }
            break;

        case VAR65:
	    switch(VAR14) {
            case VAR48:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, ""
                       "",
                       FUN6(VAR11),
                       FUN6(VAR11+2)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

	case VAR66:
	    switch(VAR14) {
            case VAR48:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
                FUN4((VAR2, "",
                       FUN9(VAR11)));
                break;

            default:
                VAR16=VAR38;
            }
            break;

	case VAR67:
            switch(VAR14) {
	    case VAR56:
		VAR17 = 0;
		
		while (VAR17+8 <= VAR15) {
			FUN4((VAR2, "",
			FUN10(VAR2, VAR11+VAR17),
			FUN9(VAR11+VAR17)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+4)>>31) ?
						"" : "",
				(FUN9(VAR11+VAR17+4)>>31)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+4)>>30)&0x1 ?
						"" : "",
				(FUN9(VAR11+VAR17+4)>>30)&0x1));

			FUN4((VAR2, "",
					FUN5(VAR68,
			 		"",
					FUN9(VAR11+VAR17+4)&0x3FFFFFF),
			FUN9(VAR11+VAR17+4)&0x3FFFFFF));
			VAR17+=8;
		}
                break;

	    case VAR58:
		VAR17 = 0;
		
		while (VAR17+20 <= VAR15) {
			FUN4((VAR2, "",
			FUN11(VAR2, VAR11+VAR17),
			FUN9(VAR11+VAR17)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+16)>>31) ?
						"" : "",
				(FUN9(VAR11+VAR17+16)>>31)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+16)>>30)&0x1 ?
						"" : "",
				(FUN9(VAR11+VAR17+16)>>30)&0x1));

			FUN4((VAR2, "",
					FUN5(VAR68,
					"",
					FUN9(VAR11+VAR17+16)&0x3FFFFFF),
			FUN9(VAR11+VAR17+16)&0x3FFFFFF));
			VAR17+=20;
		}
                break;

	    case VAR59:
		VAR17 = 0;
		
		while (VAR17+8 <= VAR15) {
			FUN4((VAR2, "",
			FUN9(VAR11+VAR17),
			FUN9(VAR11+VAR17)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+4)>>31) ?
						"" : "",
				(FUN9(VAR11+VAR17+4)>>31)));

			FUN4((VAR2, "",
				(FUN9(VAR11+VAR17+4)>>30)&0x1 ?
						"" : "",
				(FUN9(VAR11+VAR17+4)>>30)&0x1));

			FUN4((VAR2, "",
					FUN5(VAR68,
					"",
					FUN9(VAR11+VAR17+4)&0x3FFFFFF),
			FUN9(VAR11+VAR17+4)&0x3FFFFFF));
			VAR17+=8;
		}
                break;

            default:
                VAR16=VAR38;
            }
            break;

	case VAR69:
            switch(VAR14) {
	    case VAR56:
		VAR17 = 0;
		while (VAR17+4 <= VAR15) {
			FUN4((VAR2, "",
			FUN10(VAR2, VAR11+VAR17),
			FUN9(VAR11+VAR17)));
			VAR17+=4;
		}
                break;

	    case VAR58:
		VAR17 = 0;
		while (VAR17+16 <= VAR15) {
			FUN4((VAR2, "",
			FUN11(VAR2, VAR11+VAR17),
			FUN9(VAR11+VAR17)));
			VAR17+=16;
		}
                break;

	    case VAR59:
		VAR17 = 0;
		while (VAR17+4 <= VAR15) {
			FUN4((VAR2, "",
			FUN9(VAR11+VAR17),
			FUN9(VAR11+VAR17)));
			VAR17+=4;
		}
                break;

	    default:
                VAR16=VAR38;
            }
            break;

        case VAR70:
	    switch(VAR14) {
            case VAR71:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		FUN7(VAR72,
			"",
			FUN9(VAR11))));
                break;

            case VAR73:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		FUN7(VAR74,
			"",
			FUN9(VAR11))));
                break;
            default:
                VAR16=VAR38;
            }
            break;

	case VAR75:
	    switch (VAR14) {
	    case VAR76:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }
		FUN4((VAR2, "",
		       FUN7(VAR77,
				  "",
				  FUN12(VAR11))));

		FUN4((VAR2, "",
		       FUN12(VAR11 + 1)));

		break;

            case VAR78:
                if (VAR15 != 16) {
                    FUN4((VAR2, ""));
                    break;
                }

		VAR18 = FUN12(VAR11);

		FUN4((VAR2, "",
		       FUN5(VAR79,
			       "", VAR18),
		       VAR18));

		switch (VAR18) {
		case VAR80:
		    FUN4((VAR2, "",
			   FUN5(VAR81,
				   "",
				   FUN12(VAR11 + 1)),
				   FUN12(VAR11 + 1)));
		    break;

		case VAR82:
		    FUN4((VAR2, "",
			   FUN5(VAR83,
				   "",
				   FUN12(VAR11 + 1)),
				   FUN12(VAR11 + 1)));
		    break;
		}

		FUN4((VAR2, "",
		       FUN7(VAR84,
				  "",
				  FUN12(VAR11 + 2))));

		FUN4((VAR2, "",
		       FUN7(VAR85,
				  "",
				  FUN12(VAR11 + 3))));

		FUN4((VAR2, "",
		       FUN6(VAR11+4)));

		FUN4((VAR2, "",
		       FUN6(VAR11+6)));

		FUN4((VAR2, "",
		       FUN6(VAR11+8)));

		FUN4((VAR2, "",
		       FUN6(VAR11+10)));

		FUN4((VAR2, "",
		       FUN10(VAR2, VAR11+12),
		       FUN9(VAR11+12)));

		break;

	    case VAR86:
                if (VAR15 != 8) {
                    FUN4((VAR2, ""));
                    break;
                }

		FUN4((VAR2, "",
		       FUN7(
			   VAR87,
			   "",
			   FUN9(VAR11))));

		FUN4((VAR2, "",
		       FUN7(
			   VAR88,
			   "",
			   FUN12(VAR11 + 7))));

		break;

	    case VAR89:
                if (VAR15 != 4) {
                    FUN4((VAR2, ""));
                    break;
                }

		FUN4((VAR2, "",
		       FUN7(
			   VAR90,
			   "",
			   FUN12(VAR11 + 3))));
		break;

	    default:
		VAR16 = VAR38;
	    }

	break;

        default:
            if (VAR2->VAR24 <= 1)
                FUN14(VAR2,VAR11,"",VAR15);
            break;
        }
        
        if (VAR2->VAR24 > 1 || VAR16==VAR38)
            FUN14(VAR2,VAR10+sizeof(struct VAR8),"",
                               VAR13-sizeof(struct VAR8));

        VAR10+=VAR13;
        VAR12-=VAR13;
    }
    return;
VAR91:
    FUN4((VAR2, ""));
}