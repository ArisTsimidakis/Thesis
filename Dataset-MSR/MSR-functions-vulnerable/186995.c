FUN1(htmlParserCtxtPtr VAR1, const VAR2 *VAR3) {

    if ((VAR1 == NULL) || (VAR3 == NULL) ||
        (VAR1->VAR4 & VAR5))
	return;

    
    if (VAR1->VAR6->VAR3 != NULL)
        return;

    if (VAR3 != NULL) {
	xmlCharEncoding VAR7;
	xmlCharEncodingHandlerPtr VAR8;

	while ((*VAR3 == '') || (*VAR3 == '')) VAR3++;

	if (VAR1->VAR6->VAR3 != NULL)
	    FUN2((VAR2 *) VAR1->VAR6->VAR3);
	VAR1->VAR6->VAR3 = FUN3(VAR3);

	VAR7 = FUN4((const char *) VAR3);
	
	if (VAR7 != VAR9) {
	    if (((VAR7 == VAR10) ||
	         (VAR7 == VAR11) ||
		 (VAR7 == VAR12) ||
		 (VAR7 == VAR13)) &&
		(VAR1->VAR6->VAR14 != NULL) &&
		(VAR1->VAR6->VAR14->VAR15 == NULL)) {
		FUN5(VAR1, VAR16,
		             "",
			     NULL, NULL);
	    } else {
		FUN6(VAR1, VAR7);
	    }
	    VAR1->VAR17 = VAR18;
	} else {
	    
	    VAR8 = FUN7((const char *) VAR3);
	    if (VAR8 != NULL) {
		FUN8(VAR1, VAR8);
		VAR1->VAR17 = VAR18;
	    } else {
		FUN5(VAR1, VAR19,
		             "",
			     VAR3, NULL);
	    }
	}

	if ((VAR1->VAR6->VAR14 != NULL) &&
	    (VAR1->VAR6->VAR14->VAR15 != NULL) &&
	    (VAR1->VAR6->VAR14->VAR20 != NULL) &&
	    (VAR1->VAR6->VAR14->VAR21 != NULL)) {
	    int VAR22;
	    int VAR23;

	    
 	    VAR23 = VAR1->VAR6->VAR24 - VAR1->VAR6->VAR25;
 	    FUN9(VAR1->VAR6->VAR14->VAR21, VAR23);
 	    VAR22 = FUN10(VAR1->VAR6->VAR14, 1);


 	    if (VAR22 < 0) {
 		FUN5(VAR1, VAR16,
 		             "",
 			     NULL, NULL);
 	    }

            FUN11(VAR1->VAR6->VAR14->VAR21, VAR1->VAR6);
 	}
     }
 }