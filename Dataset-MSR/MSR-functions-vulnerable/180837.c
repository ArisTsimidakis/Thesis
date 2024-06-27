FUN1(xmlParserCtxtPtr VAR1)
{
    const VAR2 *VAR3;
    xmlEntityPtr VAR4 = NULL;
    xmlParserInputPtr VAR5;

    if (VAR6 != '')
        return;
    VAR7;
    VAR3 = FUN2(VAR1);
    if (VAR3 == NULL) {
	FUN3(VAR1, VAR8, "");
	return;
    }
    if (VAR9)
	FUN4(VAR10,
		"", VAR3);
    if (VAR6 != '') {
	FUN5(VAR1, VAR11, NULL);
        return;
    }

    VAR7;

    
    VAR1->VAR12++;

    
    if ((VAR1->VAR13 != NULL) &&
	(VAR1->VAR13->VAR14 != NULL))
	VAR4 = VAR1->VAR13->FUN6(VAR1->VAR15, VAR3);
    if (VAR1->VAR16 == VAR17)
	return;
    if (VAR4 == NULL) {
	
	if ((VAR1->VAR18 == 1) ||
	    ((VAR1->VAR19 == 0) &&
	     (VAR1->VAR20 == 0))) {
	    FUN7(VAR1, VAR21,
			      "",
			      VAR3);
	} else {
	    
            if ((VAR1->VAR22) && (VAR1->VAR23.VAR24 != NULL)) {
                FUN8(VAR1, VAR25,
                                 "",
                                 VAR3, NULL);
            } else
                FUN9(VAR1, VAR25,
                              "",
                              VAR3, NULL);
            VAR1->VAR26 = 0;
	}
	FUN10(VAR1, 0, NULL, 0);
    } else {
	
	if ((VAR4->VAR27 != VAR28) &&
	    (VAR4->VAR27 != VAR29)) {
	    FUN9(VAR1, VAR25,
		  "",
			  VAR3, NULL);
	} else {
            xmlChar VAR30[4];
            xmlCharEncoding VAR31;

	    if ((VAR4->VAR27 == VAR29) &&
	        ((VAR1->VAR32 & VAR33) == 0) &&
		((VAR1->VAR32 & VAR34) == 0) &&
		((VAR1->VAR32 & VAR35) == 0) &&
		((VAR1->VAR32 & VAR36) == 0) &&
		(VAR1->VAR37 == 0) &&
		(VAR1->VAR22 == 0))
 		return;
 
 	    VAR5 = FUN11(VAR1, VAR4);

	    if (FUN12(VAR1, VAR5) < 0)




 		return;


 
 	    if (VAR4->VAR27 == VAR29) {
                 
                VAR38
                if (VAR1->VAR16 == VAR17)
                    return;
                if ((VAR1->VAR5->VAR39 - VAR1->VAR5->VAR40)>=4) {
                    VAR30[0] = VAR6;
                    VAR30[1] = FUN13(1);
                    VAR30[2] = FUN13(2);
                    VAR30[3] = FUN13(3);
                    VAR31 = FUN14(VAR30, 4);
                    if (VAR31 != VAR41) {
                        FUN15(VAR1, VAR31);
                    }
                }

                if ((FUN16(VAR42, '', '', '', '', '')) &&
                    (FUN17(FUN13(5)))) {
                    FUN18(VAR1);
                }
            }
	}
    }
    VAR1->VAR20 = 1;
}