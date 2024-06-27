FUN1(VAR1 *VAR2,
           register const VAR3 *VAR4, register u_int VAR5)
 {
     const struct VAR6 *VAR7;
     const struct VAR8 *VAR9;
     const VAR3 *VAR10,*VAR11;

    int VAR12,VAR13,VAR14,VAR15;


     int VAR16;

    int VAR17,VAR18,VAR19,VAR20;

    int VAR21;




 
     union { 
         float VAR22;
        uint32_t VAR23;
    } VAR24;

    VAR10=VAR4;
    VAR7 = (const struct VAR6 *)VAR4;
    FUN2(*VAR7);

    
    if (FUN3(VAR7->VAR25[0]) != VAR26) {
	FUN4((VAR2, "",
               FUN3(VAR7->VAR25[0])));
	return;
    }

    
    if (VAR2->VAR27 < 1) {
        FUN4((VAR2, "",
               FUN3(VAR7->VAR25[0]),
               FUN5(VAR28, "",VAR7->VAR29),
               VAR5));
        return;
    }

    

    VAR12=FUN6(VAR7->VAR30);

    FUN4((VAR2, "",
           FUN3(VAR7->VAR25[0]),
            FUN5(VAR28, "",VAR7->VAR29),
            FUN7(VAR31,"",VAR7->VAR32),
            VAR12));
















 
     VAR10+=sizeof(const struct VAR6);
     VAR12-=sizeof(const struct VAR6);

    while(VAR12>0) {
        
        FUN8(*VAR10, sizeof(struct VAR8));

        VAR9 = (const struct VAR8 *)VAR10;
         VAR13=FUN6(VAR9->VAR30);
         VAR14=(VAR9->VAR33)&0x7f;
 

        if(VAR13 % 4 || VAR13 < 4)

            return;


         FUN4((VAR2, "",
                FUN5(VAR34,
                        "",
                       VAR9->VAR35),
               VAR9->VAR35,
               FUN5(VAR36,
                       "",
                       ((VAR9->VAR35)<<8)+VAR14),
               VAR14,
                (VAR9->VAR33)&0x80 ? "" : "",
                VAR13));
 


















         VAR11=VAR10+sizeof(struct VAR8);
         VAR15=VAR13-sizeof(struct VAR8);
 
        
        FUN8(*VAR10, VAR13);
        VAR16=VAR37;

        switch(VAR9->VAR35) {

        case VAR38:
             switch(VAR14) {
             case VAR39:
             case VAR40:








                 FUN4((VAR2, "",
                        FUN9(VAR11),
                        FUN9(VAR11)));
                break;

            default:
                VAR16=VAR41;
            }
            break;

        case VAR42:
        case VAR43:
             switch(VAR14) {
             case VAR44:
             case VAR45:








                 FUN4((VAR2, "",
                        FUN10(VAR2, VAR11),
                        FUN9(VAR11)));
                 break;
             case VAR46:
             case VAR47:








                 FUN4((VAR2, "",
                        FUN11(VAR2, VAR11),
                        FUN9(VAR11)));
                 break;
             case VAR48:
             case VAR49:








                 FUN4((VAR2, "",
                        FUN9(VAR11),
                        FUN9(VAR11)));
                break;
            default:
                VAR16=VAR41;
            }
            break;

         case VAR50:
             switch(VAR14) {
             case VAR51:








                 FUN4((VAR2, "",
                        FUN9(VAR11),
                        FUN9(VAR11)));
                 break;
             case VAR52:








                 FUN4((VAR2, "",
                        FUN9(VAR11),
                        FUN9(VAR11)));
                break;
            default:
                VAR16=VAR41;
            }
            break;

        case VAR53:
             switch(VAR14) {
             case VAR39:
             case VAR40:








                 FUN4((VAR2, "",
                        FUN10(VAR2, VAR11),
                        FUN9(VAR11)));
                break;

            default:
                VAR16=VAR41;
            }
            break;

         case VAR54:
             switch(VAR14) {
             case VAR55:








                 FUN4((VAR2, "",
                        FUN6(VAR11),
                        FUN6(VAR11+2)));
                break;

            default:
                VAR16=VAR41;
            }
            break;

         case VAR56:
             switch(VAR14) {
 	    case VAR57:








                 FUN4((VAR2, "",
                        FUN9(VAR11),
                        FUN9(VAR11+4)));
                break;

            default:
                VAR16=VAR41;
            }
             break;
 
         case VAR58:












 		FUN4((VAR2, "",

		FUN7(VAR59,


 			"",

			FUN6(VAR11)>>8)));


 

	    switch(VAR14) {

	    case VAR60:
 		FUN4((VAR2, ""
 		       "",
                        FUN10(VAR2, VAR11+4),
                       FUN9(VAR11+4),
                       FUN10(VAR2, VAR11+8),
                       FUN9(VAR11+8)));
 		break;
 
 	    case VAR61:


































 	    case VAR62:


































             default:
                 VAR16=VAR41;
             }
             break;
 
         case VAR63:

		FUN4((VAR2, "",

		FUN7(VAR64,

			"",

			FUN6(VAR11)>>8)));


 	    switch(VAR14) {
 	    case VAR60:

	    case VAR62:
















                 FUN4((VAR2, ""
                        "",
                        FUN10(VAR2, VAR11+4),
                        FUN9(VAR11+4),
                        FUN10(VAR2, VAR11+8),
                        FUN9(VAR11+8)));
 

		VAR20 = VAR13 - 16;

		VAR17 = 12;

		while (VAR20 > 0 && VAR16 == VAR37 ) {

			VAR18 = FUN6(VAR11+VAR17)>>8;

			VAR19  = FUN6(VAR11+VAR17)&0x00FF;

			FUN4((VAR2, "",

				FUN5(VAR65,

					"",

					VAR18),

					VAR18,

					VAR19));

			switch(VAR18) {

			case VAR66:

				FUN4((VAR2, "",

					FUN5(VAR67,

						"",

						FUN6(VAR11+VAR17+2)>>8),

					FUN6(VAR11+VAR17+2)>>8));

				FUN4((VAR2, "",

					FUN5(VAR68,

						"",

						FUN6(VAR11+VAR17+2)&0x00FF),

					FUN6(VAR11+VAR17+2)&0x00FF));

				VAR24.VAR23 = FUN9(VAR11+VAR17+4);

				FUN4((VAR2, "",

                                       VAR24.VAR22*8/1000000));

				VAR24.VAR23 = FUN9(VAR11+VAR17+8);

				FUN4((VAR2, "",

                                       VAR24.VAR22*8/1000000));

				break;

			case VAR69:

				FUN4((VAR2, "",

					FUN9(VAR11+VAR17+4)));

				break;

			default:

				

				VAR16=VAR41;

				break;

			}

			VAR20-=VAR19;

			VAR17+=VAR19;

		}






 		break;


 	    case VAR61:














































































             default:
                 VAR16=VAR41;
             }
            break;

         case VAR70:
 	    switch(VAR14) {
             case VAR51:








 		FUN4((VAR2, "",
 		FUN7(VAR71,
 			"",
			FUN6(VAR11))));
		FUN4((VAR2, "",
			FUN6(VAR11+2)));
		FUN4((VAR2, "",
			FUN9(VAR11+4)));
                FUN4((VAR2, "",
			FUN5(VAR68, "", *(VAR11+8))));
                FUN4((VAR2, "",
			FUN6(VAR11+10),
			FUN6(VAR11+10),
			FUN6(VAR11+10)&8000 ? "" : ""));
                VAR24.VAR23 = FUN9(VAR11+12);
		FUN4((VAR2, "",VAR24.VAR22*8/1000000));
		FUN4((VAR2, "",
			FUN9(VAR11+16)));
		break;

            default:
                VAR16=VAR41;
            }
            break;

         case VAR72:
 	    switch(VAR14) {
             case VAR51:








                 FUN4((VAR2, ""
                        "",
                        FUN6(VAR11),
                       FUN6(VAR11+2)));
                break;

            default:
                VAR16=VAR41;
            }
            break;

 	case VAR73:
 	    switch(VAR14) {
             case VAR51:








                 FUN4((VAR2, "",
                        FUN9(VAR11)));
                 break;

            default:
                VAR16=VAR41;
            }
            break;

 	case VAR74:
             switch(VAR14) {
 	    case VAR60:

	    case VAR62:
 		VAR17 = 0;
 		

		while (VAR17 < (VAR13-(int)sizeof(struct VAR8)) ) {


 			FUN4((VAR2, "",
 			FUN10(VAR2, VAR11+VAR17),
 			FUN9(VAR11+VAR17)));
 

			FUN4((VAR2, "", 		(FUN9(VAR11+VAR17+4)>>31) ?




 						"" : "",
 				(FUN9(VAR11+VAR17+4)>>31)));
 

			FUN4((VAR2, "", (FUN9(VAR11+VAR17+4)>>30)&0x1 ?




 						"" : "",
 				(FUN9(VAR11+VAR17+4)>>30)&0x1));
 
			FUN4((VAR2, "",
					FUN5(VAR75,
			 		"",
					FUN9(VAR11+VAR17+4)&0x3FFFFFF),
			FUN9(VAR11+VAR17+4)&0x3FFFFFF));
 			VAR17+=8;
 		}
                 break;


 	    case VAR61:










































































































             default:
                 VAR16=VAR41;
             }
            break;

 	case VAR76:
             switch(VAR14) {
 	    case VAR60:

	    case VAR62:
 		VAR17 = 0;

		while (VAR17 < (VAR13-(int)sizeof(struct VAR8)) ) {


 			FUN4((VAR2, "",
 			FUN10(VAR2, VAR11+VAR17),
 			FUN9(VAR11+VAR17)));
 			VAR17+=4;
 		}
                 break;


 	    case VAR61:






































 	    default:
                 VAR16=VAR41;
             }
            break;

         case VAR77:
 	    switch(VAR14) {
             case VAR78:








 		FUN4((VAR2, "",
 		FUN7(VAR79,
 			"",
 			FUN9(VAR11))));
                 break;
 
             case VAR80:








 		FUN4((VAR2, "",
 		FUN7(VAR81,
 			"",
			FUN9(VAR11))));
                break;
            default:
                VAR16=VAR41;
            }
            break;

 	case VAR82:
 	    switch (VAR14) {
 	    case VAR83:










 		FUN4((VAR2, "",
 		       FUN7(VAR84,
 				  "",

				  FUN6(VAR11)>>8)));


 
 		FUN4((VAR2, "",

		       FUN6(VAR11) & 0x00FF));


 
 		break;
 
             case VAR85:








 

		VAR21 = FUN6(VAR11)>>8;


 
 		FUN4((VAR2, "",
 		       FUN5(VAR86,
 			       "", VAR21),
 		       VAR21));
 

		if (VAR21 == VAR87) {




 		    FUN4((VAR2, "",
 			   FUN5(VAR88,
 				   "",

				   FUN6(VAR11) & 0x00FF),

			   FUN6(VAR11) & 0x00FF));

		}






 

		if (VAR21 == VAR89) {


 		    FUN4((VAR2, "",
 			   FUN5(VAR90,
 				   "",

				   FUN6(VAR11) & 0x00FF),

			   FUN6(VAR11) & 0x00FF));






 		}
 
 		FUN4((VAR2, "",
 		       FUN7(VAR91,
 				  "",

				  FUN6(VAR11+2)>>8)));


 
 		FUN4((VAR2, "",
 		       FUN7(VAR92,
 				  "",

				  FUN6(VAR11+2)>>8 & 0x00FF)));


 
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
 
 	    case VAR93:








 
 		FUN4((VAR2, "",
 		       FUN7(
			   VAR94,
			   "",
			   FUN9(VAR11))));

		FUN4((VAR2, "",
 		       FUN7(
 			   VAR95,
 			   "",

			   FUN6(VAR11+6) & 0x00FF)));


 
 		break;
 
 	    case VAR96:








 
 		FUN4((VAR2, "",
 		       FUN7(
 			   VAR97,
 			   "",

			   FUN6(VAR11+2) & 0x00FF)));


 		break;
 
 	    default:
		VAR16 = VAR41;
	    }

	break;

        default:
            if (VAR2->VAR27 <= 1)
                FUN12(VAR2,VAR11,"",VAR15);
            break;
        }
        
        if (VAR2->VAR27 > 1 || VAR16==VAR41)
            FUN12(VAR2,VAR10+sizeof(struct VAR8),"",
                               VAR13-sizeof(struct VAR8));

        VAR10+=VAR13;
        VAR12-=VAR13;
    }
    return;
VAR98:
    FUN4((VAR2, ""));
}