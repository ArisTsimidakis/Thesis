FUN1(xsltTransformContextPtr VAR1, xmlNodePtr VAR2,
	              xmlNsPtr VAR3) {
    xmlNsPtr VAR4 = NULL, VAR5;
    xmlNsPtr VAR6 = NULL,VAR7;

    if (VAR3 == NULL)
	return(NULL);
    if (VAR3->VAR8 != VAR9)
	return(NULL);

    
    if ((VAR2 != NULL) && (VAR2->VAR8 != VAR10))
	VAR2 = NULL;

    while (VAR3 != NULL) {
	if (VAR3->VAR8 != VAR9)
	    break;

	
	if (VAR2 != NULL) {
	    if ((VAR2->VAR11 != NULL) &&
		(FUN2(VAR2->VAR11->VAR12, VAR3->VAR12)) &&
	(FUN2(VAR2->VAR11->VAR13, VAR3->VAR13))) {
		VAR3 = VAR3->VAR14;
		continue;
	    }
	    VAR5 = FUN3(VAR2->VAR15, VAR2, VAR3->VAR12);
	    if ((VAR5 != NULL) && (FUN2(VAR5->VAR13, VAR3->VAR13))) {
		VAR3 = VAR3->VAR14;
		continue;
	    }
	}
#ifdef VAR16
	
	VAR7 = FUN4(VAR2, VAR3->VAR13, VAR3->VAR12);
	if (VAR6 == NULL) {
	    VAR4 = VAR6 = VAR7;
	} else {
	    VAR6->VAR14 = VAR7;
	    VAR6 = VAR7;
	}
#else
	
	if (!FUN2(VAR3->VAR13, VAR17)) {
	    const VAR18 *VAR19;
 	    
 	    VAR19 = (const VAR18 *) FUN5(VAR1->VAR20->VAR21,
 		                                  VAR3->VAR13);

	    if (VAR19 == VAR22)




 	        continue;


 	    if (VAR19 != NULL) {
 		VAR7 = FUN4(VAR2, VAR19, VAR3->VAR12);
 	    } else {
		VAR7 = FUN4(VAR2, VAR3->VAR13, VAR3->VAR12);
	    }
	    if (VAR6 == NULL) {
		VAR4 = VAR6 = VAR7;
	    } else {
		VAR6->VAR14 = VAR7;
		VAR6 = VAR7;
	    }
	}
#endif
	VAR3 = VAR3->VAR14;
    }
    return(VAR4);
}