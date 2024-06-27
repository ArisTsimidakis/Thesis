FUN1(htmlParserCtxtPtr VAR1) {
    VAR2 *VAR3;
    int VAR4;
    const VAR2 *VAR5;

    VAR3 = FUN2(VAR1->VAR5);
    VAR4 = VAR1->VAR6;
    while (1) {
	long VAR7 = VAR1->VAR8;

        VAR9;

        if (VAR1->VAR10 == VAR11)
            break;

	
        if ((VAR12 == '') && (FUN3(1) == '')) {
	    if (FUN4(VAR1) &&
		((VAR3 != NULL) || (VAR1->VAR6 == 0))) {
		if (VAR3 != NULL)
		    FUN5(VAR3);
		return;
	    }
	    continue; 
        }

	else if ((VAR12 == '') &&
	         ((FUN6(FUN3(1))) ||
		  (FUN3(1) == '') || (FUN3(1) == ''))) {
	    VAR5 = FUN7(VAR1);
	    if (VAR5 == NULL) {
	        FUN8(VAR1, VAR13,
			 "",
			 NULL, NULL);
	        
        while ((FUN9(VAR12)) && (VAR12 != ''))
	            VAR14;

	        if (VAR3 != NULL)
	            FUN5(VAR3);
	        return;
	    }

	    if (VAR1->VAR5 != NULL) {
	        if (FUN10(VAR5, VAR1->VAR5) == 1) {
	            FUN11(VAR1, VAR5);
	            continue;
	        }
	    }
	}

	
        if ((VAR1->VAR6 > 0) && (VAR4 >= VAR1->VAR6) &&
	    (!FUN12(VAR3, VAR1->VAR5)))
	     {
	    if (VAR3 != NULL) FUN5(VAR3);
	    return;
	}

	if ((VAR12 != 0) && ((FUN12(VAR3, VAR15"")) ||
	    (FUN12(VAR3, VAR15"")))) {
	    
	    FUN13(VAR1);
	} else {
	    
	    if ((VAR12 == '') && (FUN3(1) == '') &&
		(FUN14(2) == '') && (FUN14(3) == '') &&
		(FUN14(4) == '') && (FUN14(5) == '') &&
		(FUN14(6) == '') && (FUN14(7) == '') &&
		(FUN14(8) == '')) {
		FUN8(VAR1, VAR16,
		             "",
			     VAR15 "" , NULL);
		FUN15(VAR1);
	    }

	    
	    if ((VAR12 == '') && (FUN3(1) == '') &&
		(FUN3(2) == '') && (FUN3(3) == '')) {
		FUN16(VAR1);
	    }

	    
	    else if ((VAR12 == '') && (FUN3(1) == '')) {
		FUN17(VAR1);
	    }

	    
	    else if (VAR12 == '') {
		FUN18(VAR1);
	    }

	    
	    else if (VAR12 == '') {
		FUN19(VAR1);
	    }

	    
	    else if (VAR12 == 0) {
		FUN20(VAR1);
		break;
	    }

	    
	    else {
		FUN21(VAR1);
	    }

	    if (VAR7 == VAR1->VAR8) {
		if (VAR1->VAR17 != NULL) {
		    FUN8(VAR1, VAR18,
		                 "",
				 NULL, NULL);
		}
		break;
	    }
	}
        VAR9;
    }
    if (VAR3 != NULL) FUN5(VAR3);
}