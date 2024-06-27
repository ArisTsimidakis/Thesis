FUN1(xmlParserCtxtPtr VAR1, const VAR2 *VAR3,
                const VAR2 *VAR4, int VAR5, int VAR6, int VAR7) {
    const VAR2 *VAR8;

    VAR9;
    if ((VAR10 != '') || (FUN2(1) != '')) {
	FUN3(VAR1, VAR11, NULL);
	return;
    }
    FUN4(2);

    if ((VAR7 > 0) && (FUN5(VAR1->VAR12->VAR13, VAR1->VAR8, VAR7) == 0)) {
        if (VAR1->VAR12->VAR13[VAR7] == '') {
	    VAR1->VAR12->VAR13 += VAR7 + 1;
	    goto VAR14;
	}
	VAR1->VAR12->VAR13 += VAR7;
	VAR8 = (VAR2*)1;
    } else {
	if (VAR3 == NULL)
	    VAR8 = FUN6(VAR1, VAR1->VAR8);
	else
	    VAR8 = FUN7(VAR1, VAR1->VAR8, VAR3);
    }

    
     VAR9;




     VAR15;
     if ((!FUN8(VAR10)) || (VAR10 != '')) {
 	FUN3(VAR1, VAR16, NULL);
    } else
	VAR17;

    
    if (VAR8 != (VAR2*)1) {
        if (VAR8 == NULL) VAR8 = VAR18 "";
        if ((VAR5 == 0) && (VAR1->VAR19 != NULL))
            VAR5 = VAR1->VAR19->VAR5;
        FUN9(VAR1, VAR20,
		     "",
		                VAR1->VAR8, VAR5, VAR8);
    }

    
VAR14:
    if ((VAR1->VAR21 != NULL) && (VAR1->VAR21->VAR22 != NULL) &&
	(!VAR1->VAR23))
	VAR1->VAR21->FUN10(VAR1->VAR24, VAR1->VAR8, VAR3, VAR4);

    FUN11(VAR1);
    if (VAR6 != 0)
	FUN12(VAR1, VAR6);
    return;
}