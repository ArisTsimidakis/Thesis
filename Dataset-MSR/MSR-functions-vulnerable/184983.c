FUN1(xmlParserCtxtPtr VAR1) {
    xmlChar VAR2[4];
    xmlCharEncoding VAR3;

    if ((VAR1 == NULL) || (VAR1->VAR4 == NULL))
        return(-1);

    FUN2();

    FUN3(VAR1);

    VAR5;

    
    if ((VAR1->VAR6) && (VAR1->VAR6->VAR7))
        VAR1->VAR6->FUN4(VAR1->VAR8, &VAR9);

    
    if ((VAR1->VAR4->VAR10 - VAR1->VAR4->VAR11) >= 4) {
	VAR2[0] = VAR12;
	VAR2[1] = FUN5(1);
	VAR2[2] = FUN5(2);
	VAR2[3] = FUN5(3);
	VAR3 = FUN6(VAR2, 4);
	if (VAR3 != VAR13) {
	    FUN7(VAR1, VAR3);
	}
    }


    if (VAR14 == 0) {
	FUN8(VAR1, VAR15, NULL);
    }

    
    VAR5;
    if ((FUN9(VAR16, '', '', '', '', '')) && (FUN10(FUN5(5)))) {

	
	FUN11(VAR1);
	if (VAR1->VAR17 == VAR18) {
	    
	    return(-1);
	}
	VAR19;
    } else {
	VAR1->VAR20 = FUN12(VAR21);
     }
     if ((VAR1->VAR6) && (VAR1->VAR6->VAR22) && (!VAR1->VAR23))
         VAR1->VAR6->FUN13(VAR1->VAR8);




 
     
    VAR1->VAR24 = VAR25;
    VAR1->VAR26 = 0;
    VAR1->VAR27 = 0;
     VAR1->VAR28 = 0;
 
     FUN14(VAR1);




    
     if ((VAR12 == '') && (FUN5(1) == '')) {
 	FUN8(VAR1, VAR29, NULL);
    } else if (VAR12 != 0) {
	FUN8(VAR1, VAR30, NULL);
    }

    
    if ((VAR1->VAR6) && (VAR1->VAR6->VAR31 != NULL))
        VAR1->VAR6->FUN15(VAR1->VAR8);

    if (! VAR1->VAR32) return(-1);
    return(0);
}