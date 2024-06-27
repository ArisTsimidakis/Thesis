FUN1 (xsltStylesheetPtr VAR1, xmlNodePtr VAR2) {
    VAR3 *VAR4, *VAR5;
    xmlNsPtr VAR6;
    xmlHashTablePtr VAR7;
    VAR8 *VAR9;

    if ((VAR1 == NULL) || (VAR2 == NULL) || (VAR2->VAR10 != VAR11))
	return;

    {
	VAR3 *VAR12;

	VAR12 = FUN2(VAR2, (const VAR3 *) "");
	VAR4 = FUN3 (VAR12, &VAR5);
	FUN4(VAR12);
    }
    if ((VAR4 == NULL) || (VAR5 == NULL)) {
	FUN5(VAR13,
			 "");
	if (VAR4 != NULL)
	    FUN4(VAR4);
	return;
    }
    
    VAR6 = FUN6 (VAR2->VAR14, VAR2, VAR5);
    if (VAR6 == NULL) {
	FUN5(VAR13,
			 "",
			 VAR5);
	FUN4(VAR4);
	FUN4(VAR5);
	return;
    }
    FUN4(VAR5);

    FUN7(VAR1, VAR2);

    
     VAR9 = FUN8();








     VAR9->VAR15 = VAR2->VAR16;
     while (FUN9(VAR9->VAR15) &&
 	   FUN10(VAR9->VAR15, "")) {
	VAR9->VAR15 = VAR9->VAR15->VAR17;
	VAR9->VAR18++;
    }

    
#ifdef VAR19
    
    VAR7 = (VAR20)
	FUN11(VAR1,
	    VAR21);
#else
    VAR7 = (VAR20)
	FUN12 (VAR1, VAR21);
#endif
    if (VAR7 == NULL) {
	FUN5(VAR13,
			 "");
	FUN4(VAR4);
	return;
    }

    if (FUN13 (VAR7, VAR6->VAR22, VAR4, VAR9) < 0) {
	FUN14(NULL, VAR1, VAR2,
	    "",
			 VAR6->VAR22, VAR4);
	VAR1->VAR23++;
    } else {
	FUN15(VAR24,
			 "",
			 VAR6->VAR22, VAR4);
    }
    FUN4(VAR4);
}