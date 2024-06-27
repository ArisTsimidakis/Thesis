FUN1(xmlParserCtxtPtr VAR1) {
    const VAR2 *VAR3;
    const VAR2 *VAR4 = NULL;
    const VAR2 *VAR5 = NULL;
    xmlParserNodeInfo VAR6;
    int VAR7, VAR8;
    xmlNodePtr VAR9;
    int VAR10 = VAR1->VAR10;

    if (((unsigned int) VAR1->VAR11 > VAR12) &&
        ((VAR1->VAR13 & VAR14) == 0)) {
	FUN2(VAR1, VAR15,
		 "",
			  VAR12);
	VAR1->VAR16 = VAR17;
	return;
    }

    
    if (VAR1->VAR18) {
        VAR6.VAR19 = VAR1->VAR20->VAR21 +
                          (VAR22 - VAR1->VAR20->VAR23);
	VAR6.VAR24 = VAR1->VAR20->VAR7;
    }

    if (VAR1->VAR25 == 0)
	FUN3(VAR1, -1);
    else if (*VAR1->VAR26 == -2)
	FUN3(VAR1, -1);
    else
	FUN3(VAR1, *VAR1->VAR26);

    VAR7 = VAR1->VAR20->VAR7;
#ifdef VAR27
    if (VAR1->VAR28)
#endif 
        VAR3 = FUN4(VAR1, &VAR4, &VAR5, &VAR8);
#ifdef VAR27
     else
 	VAR3 = FUN5(VAR1);
 #endif 




     if (VAR3 == NULL) {
 	FUN6(VAR1);
         return;
    }
    FUN7(VAR1, VAR3);
    VAR9 = VAR1->VAR29;

#ifdef VAR30
    
    if (VAR1->VAR31 && VAR1->VAR32 && VAR1->VAR33 &&
        VAR1->VAR29 && (VAR1->VAR29 == VAR1->VAR33->VAR34))
        VAR1->VAR35 &= FUN8(&VAR1->VAR36, VAR1->VAR33);
#endif 

    
    if ((VAR37 == '') && (FUN9(1) == '')) {
        FUN10(2);
	if (VAR1->VAR28) {
	    if ((VAR1->VAR38 != NULL) && (VAR1->VAR38->VAR39 != NULL) &&
		(!VAR1->VAR40))
		VAR1->VAR38->FUN11(VAR1->VAR41, VAR3, VAR4, VAR5);
#ifdef VAR27
	} else {
	    if ((VAR1->VAR38 != NULL) && (VAR1->VAR38->VAR42 != NULL) &&
		(!VAR1->VAR40))
		VAR1->VAR38->FUN12(VAR1->VAR41, VAR3);
#endif 
	}
	FUN13(VAR1);
	FUN6(VAR1);
	if (VAR10 != VAR1->VAR10)
	    FUN14(VAR1, VAR1->VAR10 - VAR10);
	if ( VAR9 != NULL && VAR1->VAR18 ) {
	   VAR6.VAR43 = VAR1->VAR20->VAR21 +
			      (VAR22 - VAR1->VAR20->VAR23);
	   VAR6.VAR44 = VAR1->VAR20->VAR7;
	   VAR6.VAR29 = VAR9;
	   FUN15(VAR1, &VAR6);
	}
	return;
    }
    if (VAR37 == '') {
        VAR45;
    } else {
        FUN16(VAR1, VAR46,
		     "",
		                VAR3, VAR7, NULL);

	
	FUN17(VAR1);
	FUN13(VAR1);
	FUN6(VAR1);
	if (VAR10 != VAR1->VAR10)
	    FUN14(VAR1, VAR1->VAR10 - VAR10);

	
	if ( VAR9 != NULL && VAR1->VAR18 ) {
	   VAR6.VAR43 = VAR1->VAR20->VAR21 +
			      (VAR22 - VAR1->VAR20->VAR23);
	   VAR6.VAR44 = VAR1->VAR20->VAR7;
	   VAR6.VAR29 = VAR9;
	   FUN15(VAR1, &VAR6);
	}
	return;
    }

    
    FUN18(VAR1);
    if (!FUN19(VAR37)) {
        FUN16(VAR1, VAR47,
	 "",
		                VAR3, VAR7, NULL);

	
	FUN17(VAR1);
	FUN13(VAR1);
	FUN6(VAR1);
	if (VAR10 != VAR1->VAR10)
	    FUN14(VAR1, VAR1->VAR10 - VAR10);
	return;
    }

    
    if (VAR1->VAR28) {
	FUN20(VAR1, VAR4, VAR5, VAR7, VAR1->VAR10 - VAR10, VAR8);
	FUN13(VAR1);
    }
#ifdef VAR27
      else
	FUN21(VAR1, VAR7);
#endif 

    
    if ( VAR9 != NULL && VAR1->VAR18 ) {
       VAR6.VAR43 = VAR1->VAR20->VAR21 +
                          (VAR22 - VAR1->VAR20->VAR23);
       VAR6.VAR44 = VAR1->VAR20->VAR7;
       VAR6.VAR29 = VAR9;
       FUN15(VAR1, &VAR6);
    }
}