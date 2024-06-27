FUN1(xmlParserCtxtPtr VAR1) {
    const VAR2 *VAR3;
     xmlEntityPtr VAR4 = NULL;
 
     VAR5;




 
     if (VAR6 != '')
         return(NULL);
    VAR7;
    VAR3 = FUN2(VAR1);
    if (VAR3 == NULL) {
	FUN3(VAR1, VAR8,
		       "");
        return(NULL);
    }
    if (VAR6 != '') {
	FUN4(VAR1, VAR9, NULL);
	return(NULL);
    }
    VAR7;

    
    if ((VAR1->VAR10 & VAR11) == 0) {
        VAR4 = FUN5(VAR3);
        if (VAR4 != NULL)
            return(VAR4);
    }

    
    VAR1->VAR12++;

    
    if (VAR1->VAR13 != NULL) {
	if (VAR1->VAR13->VAR14 != NULL)
	    VAR4 = VAR1->VAR13->FUN6(VAR1->VAR15, VAR3);
	if ((VAR1->VAR16 == 1 ) && (VAR4 == NULL) && 
	    (VAR1->VAR10 & VAR11))
	    VAR4 = FUN5(VAR3);
	if ((VAR1->VAR16 == 1 ) && (VAR4 == NULL) &&
	    (VAR1->VAR15==VAR1)) {
 	    VAR4 = FUN7(VAR1, VAR3);
 	}
     }




     
    if (VAR4 == NULL) {
	if ((VAR1->VAR17 == 1) ||
	    ((VAR1->VAR18 == 0) &&
	     (VAR1->VAR19 == 0))) {
	    FUN8(VAR1, VAR20,
		     "", VAR3);
	} else {
	    FUN9(VAR1, VAR21,
		     "", VAR3);
	    if ((VAR1->VAR22 == 0) &&
		(VAR1->VAR13 != NULL) &&
		(VAR1->VAR13->VAR23 != NULL)) {
		VAR1->VAR13->FUN10(VAR1->VAR15, VAR3);
	    }
	}
	VAR1->VAR24 = 0;
    }

    
    else if (VAR4->VAR25 == VAR26) {
	FUN8(VAR1, VAR27,
		 "", VAR3);
    }

    
    else if ((VAR1->VAR28 == VAR29) &&
	     (VAR4->VAR25 == VAR30)) {
	FUN8(VAR1, VAR31,
	     "", VAR3);
    }
    
    else if ((VAR1->VAR28 == VAR29) &&
	     (VAR4 != NULL) && (VAR4->VAR32 != NULL) &&
	     (VAR4->VAR25 != VAR33) &&
	     (FUN11(VAR4->VAR32, ''))) {
	FUN8(VAR1, VAR34,
    "", VAR3);
    }

    
    else {
	switch (VAR4->VAR25) {
	    case VAR35:
	    case VAR36:
	    FUN8(VAR1, VAR37,
	     "",
			      VAR3);
	    break;
	    default:
	    break;
	}
    }

    
    return(VAR4);
}