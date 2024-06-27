FUN1(xmlParserCtxtPtr VAR1, const VAR2 *VAR3,
                       const VAR2 *VAR4) {
    FUN2(VAR1);
    VAR5;

    if ((VAR1->VAR6 == (const VAR2 *)VAR7) &&
        (VAR1->VAR8->VAR9 - VAR1->VAR8->VAR10 >= 4)) {
        xmlChar VAR11[4];
	xmlCharEncoding VAR12;

	VAR11[0] = VAR13;
	VAR11[1] = FUN3(1);
	VAR11[2] = FUN3(2);
	VAR11[3] = FUN3(3);
	VAR12 = FUN4(VAR11, 4);
	if (VAR12 != VAR7)
	    FUN5(VAR1, VAR12);
    }

    if (FUN6(VAR14, '', '', '', '', '')) {
	FUN7(VAR1);
	if (VAR1->VAR15 == VAR16) {
	    
	    VAR1->VAR17 = VAR18;
	    return;
	}
    }
    if (VAR1->VAR19 == NULL) {
        VAR1->VAR19 = FUN8(VAR20 "");
	if (VAR1->VAR19 == NULL) {
	    FUN9(VAR1, "");
	    return;
	}
	VAR1->VAR19->VAR21 = VAR22;
    }
    if ((VAR1->VAR19 != NULL) && (VAR1->VAR19->VAR23 == NULL))
        FUN10(VAR1->VAR19, NULL, VAR3, VAR4);

    VAR1->VAR17 = VAR24;
    VAR1->VAR25 = 1;
    while (((VAR13 == '') && (FUN3(1) == '')) ||
           ((VAR13 == '') && (FUN3(1) == '')) ||
	   (VAR13 == '') || FUN11(VAR26)) {
	const VAR2 *VAR27 = VAR14;
	unsigned int VAR28 = VAR1->VAR8->VAR29;

	VAR5;
        if ((VAR13 == '') && (FUN3(1) == '') && (FUN3(2) == '')) {
	    FUN12(VAR1);
	} else if (FUN11(VAR26)) {
	    VAR30;
	} else if (VAR13 == '') {
            FUN13(VAR1);
	} else
	    FUN14(VAR1);

	
	while ((VAR13 == 0) && (VAR1->VAR31 > 1))
	    FUN15(VAR1);

	if ((VAR14 == VAR27) && (VAR28 == VAR1->VAR8->VAR29)) {
	    FUN16(VAR1, VAR32, NULL);
 	    break;
 	}
     }

    


     if (VAR13 != 0) {
 	FUN16(VAR1, VAR32, NULL);
     }

}