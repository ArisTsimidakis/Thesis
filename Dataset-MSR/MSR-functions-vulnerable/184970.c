FUN1(xmlParserCtxtPtr VAR1) {
    VAR2 *VAR3 = NULL;
    int VAR4 = VAR5;
    int VAR6 = 0;
    xmlParserInputState VAR7;
    const VAR2 *VAR8;
    int VAR9 = 0, VAR10;
    int VAR11;

    
    if ((VAR12 != '') || (FUN2(1) != '') ||
        (FUN2(2) != '') || (FUN2(3) != '')) return;
    VAR7 = VAR1->VAR13;
    VAR1->VAR13 = VAR14;
    VAR11 = VAR1->VAR15->VAR16;
    FUN3(4);
    VAR17;
    VAR18;

    
    VAR8 = VAR1->VAR15->VAR19;
    do {
	if (*VAR8 == 0xA) {
	    do {
		VAR1->VAR15->VAR20++; VAR1->VAR15->VAR21 = 1;
		VAR8++;
	    } while (*VAR8 == 0xA);
	}
VAR22:
        VAR10 = VAR1->VAR15->VAR21;
	while (((*VAR8 > '') && (*VAR8 <= 0x7F)) ||
	       ((*VAR8 >= 0x20) && (*VAR8 < '')) ||
	       (*VAR8 == 0x09)) {
		    VAR8++;
		    VAR10++;
	}
	VAR1->VAR15->VAR21 = VAR10;
	if (*VAR8 == 0xA) {
	    do {
		VAR1->VAR15->VAR20++; VAR1->VAR15->VAR21 = 1;
		VAR8++;
	    } while (*VAR8 == 0xA);
	    goto VAR22;
	}
	VAR9 = VAR8 - VAR1->VAR15->VAR19;
	
	if (VAR9 > 0) {
	    if ((VAR1->VAR23 != NULL) &&
		(VAR1->VAR23->VAR24 != NULL)) {
		if (VAR3 == NULL) {
		    if ((*VAR8 == '') && (VAR8[1] == ''))
		        VAR4 = VAR9 + 1;
		    else
		        VAR4 = VAR5 + VAR9;
		    VAR3 = (VAR2 *) FUN4(VAR4 * sizeof(VAR2));
		    if (VAR3 == NULL) {
		        FUN5(VAR1, NULL);
			VAR1->VAR13 = VAR7;
			return;
		    }
		    VAR6 = 0;
		} else if (VAR6 + VAR9 + 1 >= VAR4) {
		    VAR2 *VAR25;
		    VAR4  += VAR6 + VAR9 + VAR5;
		    VAR25 = (VAR2 *) FUN6(VAR3,
		                                     VAR4 * sizeof(VAR2));
		    if (VAR25 == NULL) {
		        FUN7 (VAR3);
			FUN5(VAR1, NULL);
			VAR1->VAR13 = VAR7;
			return;
		    }
		    VAR3 = VAR25;
		}
		memcpy(&VAR3[VAR6], VAR1->VAR15->VAR19, VAR9);
		VAR6 += VAR9;
		VAR3[VAR6] = 0;
	    }
	}
	VAR1->VAR15->VAR19 = VAR8;
	if (*VAR8 == 0xA) {
	    VAR8++;
	    VAR1->VAR15->VAR20++; VAR1->VAR15->VAR21 = 1;
	}
	if (*VAR8 == 0xD) {
	    VAR8++;
	    if (*VAR8 == 0xA) {
		VAR1->VAR15->VAR19 = VAR8;
		VAR8++;
		VAR1->VAR15->VAR20++; VAR1->VAR15->VAR21 = 1;
		continue; 
	    }
	    VAR8--;
 	}
 	VAR17;
 	VAR18;








 	VAR8 = VAR1->VAR15->VAR19;
 	if (*VAR8 == '') {
 	    if (VAR8[1] == '') {
	        if (VAR8[2] == '') {
		    if (VAR1->VAR15->VAR16 != VAR11) {
			FUN8(VAR1, VAR26,
			"");
		    }
		    FUN3(3);
		    if ((VAR1->VAR23 != NULL) && (VAR1->VAR23->VAR24 != NULL) &&
		        (!VAR1->VAR27)) {
			if (VAR3 != NULL)
			    VAR1->VAR23->FUN9(VAR1->VAR28, VAR3);
			else
			    VAR1->VAR23->FUN9(VAR1->VAR28, VAR29 "");
 		    }
 		    if (VAR3 != NULL)
 		        FUN7(VAR3);

		    VAR1->VAR13 = VAR7;




 		    return;
 		}
 		if (VAR3 != NULL)
		    FUN10(VAR1, VAR30,
		                      "",
				      VAR3);
		else
		    FUN10(VAR1, VAR30,
		                      "", NULL);
		VAR8++;
		VAR1->VAR15->VAR21++;
	    }
	    VAR8++;
	    VAR1->VAR15->VAR21++;
	    goto VAR22;
	}
    } while (((*VAR8 >= 0x20) && (*VAR8 <= 0x7F)) || (*VAR8 == 0x09));
    FUN11(VAR1, VAR3, VAR6, VAR4);
    VAR1->VAR13 = VAR7;
    return;
}