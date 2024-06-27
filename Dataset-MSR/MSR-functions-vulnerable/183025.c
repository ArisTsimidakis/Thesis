FUN1(VAR1 *VAR2,
              register const VAR3 *VAR4,
              u_short VAR5)
{
    struct VAR6 {
        uint8_t VAR7[2];
        uint8_t VAR8[2];
    };

    const struct VAR6 *VAR6;
    u_short VAR9,VAR10,VAR11,VAR12,VAR13;
    u_char VAR14;
    u_int VAR15,VAR16, VAR17, VAR18,VAR19;
    char VAR20[100];
    int VAR21;

    VAR6 = (const struct VAR6 *)VAR4;
    FUN2(*VAR6);
    VAR10=FUN3(VAR6->VAR8);
    if (VAR10 + 4 > VAR5) {
        FUN4((VAR2, ""));
        return 0;
    }
    VAR11=VAR10;
    VAR9=FUN5(FUN3(VAR6->VAR7));

    
    FUN4((VAR2, "",
           FUN6(VAR22,
                   "",
                   VAR9),
           VAR9,
           VAR10,
           FUN7(FUN3(&VAR6->VAR7)) ? "" : "",
           FUN8(FUN3(&VAR6->VAR7)) ? "" : ""));

    VAR4+=sizeof(struct VAR6);

    switch(VAR9) {

    case VAR23:
        FUN9(4);
        FUN4((VAR2, "",
               FUN3(VAR4),
               (FUN3(VAR4+2)&0x8000) ? "" : "",
               (FUN3(VAR4+2)&0x4000) ? "" : ""));
        break;

    case VAR24:
        FUN9(4);
        FUN4((VAR2, "", FUN10(VAR2, VAR4)));
        break;
    case VAR25:
        FUN9(16);
        FUN4((VAR2, "", FUN11(VAR2, VAR4)));
        break;
    case VAR26:
        FUN9(4);
        FUN4((VAR2, "", FUN12(VAR4)));
        break;

    case VAR27:
        FUN9(VAR28);
	VAR12 = FUN3(VAR4);
	VAR4+=VAR28;
        VAR11 -= VAR28;
	FUN4((VAR2, "",
               FUN6(VAR29, "", VAR12)));
        switch (VAR12) {
        case VAR30:
	    while(VAR11 >= sizeof(struct VAR31)) {
		FUN13(*VAR4, sizeof(struct VAR31));
		FUN4((VAR2, "", FUN10(VAR2, VAR4)));
		VAR11-=sizeof(struct VAR31);
		VAR4+=sizeof(struct VAR31);
	    }
            break;
        case VAR32:
	    while(VAR11 >= sizeof(struct VAR33)) {
		FUN13(*VAR4, sizeof(struct VAR33));
		FUN4((VAR2, "", FUN11(VAR2, VAR4)));
		VAR11-=sizeof(struct VAR33);
		VAR4+=sizeof(struct VAR33);
	    }
            break;
        default:
            
            break;
        }
	break;

    case VAR34:
	FUN9(8);
	FUN4((VAR2, "",
	       FUN3(VAR4), FUN3(VAR4+2),
	       (FUN3(VAR4+6)&0x8000) ? "" : "",
	       (FUN3(VAR4+6)&0x4000) ? "" : ""
	       ));
	break;

    case VAR35:
        FUN9(1);
        VAR14 = *VAR4;
	FUN4((VAR2, "",
	       FUN6(VAR36, "", VAR14),
	       VAR14));

	VAR4+=1;
	VAR11-=1;
	switch(VAR14) {

	case VAR37:
	    break;
	case VAR38:
	    FUN9(2);
	    VAR12 = FUN3(VAR4);
	    VAR4+=VAR28;
	    VAR11-=VAR28;
	    if (VAR12 == VAR30) {
		VAR21=FUN14(VAR2, VAR4, VAR11, VAR20, sizeof(VAR20));
		if (VAR21 == -2)
		    goto VAR39;
		if (VAR21 == -3)
		    FUN4((VAR2, ""));
		else if (VAR21 == -1)
		    FUN4((VAR2, ""));
		else
		    FUN4((VAR2, "", VAR20));
	    }
	    else if (VAR12 == VAR32) {
		VAR21=FUN15(VAR2, VAR4, VAR11, VAR20, sizeof(VAR20));
		if (VAR21 == -2)
		    goto VAR39;
		if (VAR21 == -3)
		    FUN4((VAR2, ""));
		else if (VAR21 == -1)
		    FUN4((VAR2, ""));
		else
		    FUN4((VAR2, "", VAR20));
	    }
	    else
		FUN4((VAR2, "", VAR12));
	    break;
	case VAR40:
	    break;
	case VAR41:
            
            FUN9(7);
            VAR16 = *(VAR4+2);

            
            if (VAR16 == 0) {
                FUN4((VAR2, "",
                       FUN6(VAR42, "", FUN3(VAR4)&0x7fff),
                       FUN3(VAR4)&0x8000 ? "" : "",
                       FUN12(VAR4+3),
                       VAR16));
                break;
            }

            
            FUN9(11);
	    FUN4((VAR2, "",
		   FUN6(VAR42, "", FUN3(VAR4)&0x7fff),
		   FUN3(VAR4)&0x8000 ? "" : "",
                   FUN12(VAR4+3),
		   FUN12(VAR4+7),
                   VAR16));
            if (VAR16 < 4) {
                
                FUN4((VAR2, ""));
                return(VAR10+4); 
	    }
            VAR16 -= 4; 

            
            VAR4+=11;
            VAR11-=11;
            FUN9(VAR16);

            while (VAR16 > 2) {
                VAR17 = *VAR4;
                VAR18 = *(VAR4+1);
                if (VAR18 < 2)
                    break;
                if (VAR16 < VAR18)
                    break;

                FUN4((VAR2, "",
                       FUN6(VAR43,"",VAR17),
                       VAR17,
                       VAR18));

                switch(VAR17) {
                case VAR44:
                    FUN4((VAR2, "", FUN3(VAR4+2)));
                    break;

                case VAR45:
                    FUN4((VAR2, ""));
                    for (VAR19 = 2; VAR19 < VAR18; VAR19++)
                        FUN16(VAR2, *(VAR4 + VAR19));
                    break;

                case VAR46:
                    FUN4((VAR2, "",
                           *(VAR4+2),
                           FUN17(VAR47, "", *(VAR4+2))));
                    FUN4((VAR2, "",
                           *(VAR4+3),
                           FUN17(VAR48, "", *(VAR4+3))));
                    break;

                default:
                    FUN18(VAR2, VAR4+2, "", VAR18-2);
                    break;
                }

                VAR16 -= VAR18;
                VAR4 += VAR18;
            }
	    break;
	}

	break;

    case VAR49:
	FUN9(4);
	FUN4((VAR2, "", FUN12(VAR4) & 0xfffff));
	break;

    case VAR50:
	FUN9(8);
	VAR15 = FUN12(VAR4);
	VAR4+=4;
	FUN4((VAR2, "",
	       VAR15&0x3fffffff,
	       VAR15&0x80000000 ? "" : "",
	       VAR15&0x40000000 ? "" : ""));
	VAR15 = FUN12(VAR4);
	VAR4+=4;
	if (VAR15)
	    FUN4((VAR2, "", VAR15));
 	break;
 
     case VAR51:

	FUN9(8);


 	VAR13 = FUN3(VAR4);
 	FUN4((VAR2, "",
 	       VAR13&0x8000 ? "" : "",
 	       VAR13&0x8 ? "" : "",
 	       VAR13&0x4 ? "" : "",
 	       VAR13&0x2 ? "" : "",
 	       VAR13&0x1 ? "" : ""));


 	VAR4+=4;
 	VAR15 = FUN12(VAR4);
 	if (VAR15)
	    FUN4((VAR2, "", VAR15));
	VAR4+=4;
	VAR15 = FUN12(VAR4);
	if (VAR15)
	    FUN4((VAR2, "", VAR15));
	break;

    case VAR52:
	FUN9(2);
	FUN4((VAR2, "", FUN3(VAR4)));
	break;


    

    case VAR53:
    case VAR54:
    case VAR55:
    case VAR56:
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60:
    case VAR61:
    case VAR62:

    default:
        if (VAR2->VAR63 <= 1)
            FUN18(VAR2, VAR4, "", VAR11);
        break;
    }
     return(VAR10+4); 
 
 VAR39:

    FUN4((VAR2, ""));


     return 0;
 
 VAR64:
    FUN4((VAR2, ""));
    return(VAR10+4); 
}