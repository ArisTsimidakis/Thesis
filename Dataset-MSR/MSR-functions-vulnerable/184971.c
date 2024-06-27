FUN1(xmlParserCtxtPtr VAR1, VAR2 *VAR3, int VAR4, int VAR5) {
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12 = 0;
    int VAR13;

    VAR13 = VAR1->VAR14->VAR15;

    if (VAR3 == NULL) {
        VAR4 = 0;
	VAR5 = VAR16;
	VAR3 = (VAR2 *) FUN2(VAR5 * sizeof(VAR2));
	if (VAR3 == NULL) {
	    FUN3(VAR1, NULL);
	    return;
	}
    }
    VAR17;	
    VAR6 = FUN4(VAR7);
    if (VAR6 == 0)
        goto VAR18;
    if (!FUN5(VAR6)) {
        FUN6(VAR1, VAR19,
                          "",
	                  VAR6);
	FUN7 (VAR3);
	return;
    }
    FUN8(VAR7);
    VAR8 = FUN4(VAR9);
    if (VAR8 == 0)
        goto VAR18;
    if (!FUN5(VAR8)) {
        FUN6(VAR1, VAR19,
                          "",
	                  VAR6);
	FUN7 (VAR3);
	return;
    }
    FUN8(VAR9);
    VAR10 = FUN4(VAR11);
    if (VAR10 == 0)
        goto VAR18;
    while (FUN5(VAR10) && 
           ((VAR10 != '') ||
	    (VAR8 != '') || (VAR6 != ''))) {
	if ((VAR8 == '') && (VAR6 == '')) {
	    FUN9(VAR1, VAR20, NULL);
	}
	if (VAR4 + 5 >= VAR5) {
	    VAR2 *VAR21;
	    VAR5 *= 2;
	    VAR21 = (VAR2 *) FUN10(VAR3, VAR5 * sizeof(VAR2));
	    if (VAR21 == NULL) {
		FUN7 (VAR3);
		FUN3(VAR1, NULL);
		return;
	    }
	    VAR3 = VAR21;
	}
	FUN11(VAR7,VAR3,VAR4,VAR6);
	VAR6 = VAR8;
	VAR7 = VAR9;
	VAR8 = VAR10;
	VAR9 = VAR11;

	VAR12++;
 	if (VAR12 > 50) {
 	    VAR17;
 	    VAR12 = 0;








 	}
 	FUN8(VAR11);
 	VAR10 = FUN4(VAR11);
	if (VAR10 == 0) {
	    VAR22;
	    VAR17;
	    VAR10 = FUN4(VAR11);
	}
    }
    VAR3[VAR4] = 0;
    if (VAR10 == 0) {
	FUN12(VAR1, VAR23,
	                     "", VAR3);
    } else if (!FUN5(VAR10)) {
        FUN6(VAR1, VAR19,
                          "",
	                  VAR10);
    } else {
	if (VAR13 != VAR1->VAR14->VAR15) {
	    FUN13(VAR1, VAR24,
		"");
	}
        VAR25;
	if ((VAR1->VAR26 != NULL) && (VAR1->VAR26->VAR27 != NULL) &&
	    (!VAR1->VAR28))
	    VAR1->VAR26->FUN14(VAR1->VAR29, VAR3);
    }
    FUN7(VAR3);
    return;
VAR18:
    FUN12(VAR1, VAR23,
			 "", NULL);
    FUN7(VAR3);
    return;
}