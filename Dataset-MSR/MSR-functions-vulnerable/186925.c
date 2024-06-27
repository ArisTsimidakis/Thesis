FUN1(xmlParserCtxtPtr VAR1) {
    int VAR2 = 0, VAR3;
    int VAR4;
    int VAR5 = 0;
    const VAR6 *VAR7 = VAR1->VAR8->VAR7;

    
    VAR9;
    VAR4 = FUN2(VAR3);
    if ((VAR4 == '') || (VAR4 == '') || (VAR4 == '') || 
	(!FUN3(VAR4) && (VAR4 != '') &&
         (VAR4 != ''))) {
	return(NULL);
    }

    while ((VAR4 != '') && (VAR4 != '') && (VAR4 != '') && 
	   ((FUN3(VAR4)) || (FUN4(VAR4)) ||
            (VAR4 == '') || (VAR4 == '') ||
	    (VAR4 == '') || (VAR4 == '') ||
	    (FUN5(VAR4)) ||
	    (FUN6(VAR4)))) {
	if (VAR5++ > 100) {
	    VAR5 = 0;
	    VAR9;
	}
	VAR2 += VAR3;
	FUN7(VAR3);
	VAR4 = FUN2(VAR3);
	if (VAR1->VAR8->VAR7 != VAR7) {
	    
	    return(FUN1(VAR1));
 	}
     }
 

    if (VAR1->VAR8->VAR7 > VAR1->VAR8->VAR10 - VAR2)

	return(NULL);












 
     return(FUN8(VAR1->VAR11, VAR1->VAR8->VAR10 - VAR2, VAR2));
 }