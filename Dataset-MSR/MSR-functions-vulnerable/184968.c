FUN1(xmlParserCtxtPtr VAR1) {
    unsigned int VAR2 = 0;
    int VAR3 = 0;
    unsigned int VAR4 = 0;

    
    if ((VAR5 == '') && (FUN2(1) == '') &&
        (FUN2(2) == '')) {
	FUN3(3);
	VAR6;
	while (VAR5 != '') { 
 	    if (VAR3++ > 20) {
 		VAR3 = 0;
 		VAR6;




 	    }
 	    if ((VAR5 >= '') && (VAR5 <= '')) 
 	        VAR2 = VAR2 * 16 + (VAR7 - '');
	    else if ((VAR5 >= '') && (VAR5 <= '') && (VAR3 < 20))
	        VAR2 = VAR2 * 16 + (VAR7 - '') + 10;
	    else if ((VAR5 >= '') && (VAR5 <= '') && (VAR3 < 20))
	        VAR2 = VAR2 * 16 + (VAR7 - '') + 10;
	    else {
		FUN4(VAR1, VAR8, NULL);
		VAR2 = 0;
		break;
	    }
	    if (VAR2 > 0x10FFFF)
	        VAR4 = VAR2;

	    VAR9;
	    VAR3++;
	}
	if (VAR5 == '') {
	    
	    VAR1->VAR10->VAR11++;
	    VAR1->VAR12 ++;
	    VAR1->VAR10->VAR13++;
	}
    } else if  ((VAR5 == '') && (FUN2(1) == '')) {
	FUN3(2);
	VAR6;
	while (VAR5 != '') { 
 	    if (VAR3++ > 20) {
 		VAR3 = 0;
 		VAR6;




 	    }
 	    if ((VAR5 >= '') && (VAR5 <= '')) 
 	        VAR2 = VAR2 * 10 + (VAR7 - '');
	    else {
		FUN4(VAR1, VAR14, NULL);
		VAR2 = 0;
		break;
	    }
	    if (VAR2 > 0x10FFFF)
	        VAR4 = VAR2;

	    VAR9;
	    VAR3++;
	}
	if (VAR5 == '') {
	    
	    VAR1->VAR10->VAR11++;
	    VAR1->VAR12 ++;
	    VAR1->VAR10->VAR13++;
	}
    } else {
        FUN4(VAR1, VAR15, NULL);
    }

    
    if ((FUN5(VAR2) && (VAR4 == 0))) {
        return(VAR2);
    } else {
        FUN6(VAR1, VAR16,
                          "",
	                  VAR2);
    }
    return(0);
}