FUN1(xmlParserCtxtPtr VAR1, int *VAR2, int VAR3) {
    xmlChar VAR4 = 0;
    VAR5 *VAR6 = NULL;
    VAR5 *VAR7 = NULL;
    int VAR8 = 0;
    int VAR9 = 0;
    int VAR10, VAR11, VAR12 = 0;
    VAR5 *VAR13 = NULL;
    xmlEntityPtr VAR14;

    if (FUN2(0) == '') {
	VAR1->VAR15 = VAR16;
	VAR4 = '';
        VAR17;
    } else if (FUN2(0) == ''') {
	VAR4 = ''';
	VAR1->VAR15 = VAR16;
        VAR17;
    } else {
	FUN3(VAR1, VAR18, NULL);
	return(NULL);
    }

    
    VAR9 = VAR19;
    VAR6 = (VAR5 *) FUN4(VAR9 * sizeof(VAR5));
    if (VAR6 == NULL) goto VAR20;

    
     VAR10 = FUN5(VAR11);

    while ((FUN2(0) != VAR4) && 

           (FUN6(VAR10)) && (VAR10 != '')) {






 	if (VAR10 == 0) break;
 	if (VAR10 == '') {
 	    VAR12 = 0;
	    if (FUN2(1) == '') {
		int VAR21 = FUN7(VAR1);

		if (VAR21 == '') {
		    if (VAR1->VAR22) {
			if (VAR8 > VAR9 - 10) {
			    FUN8(VAR6, 10);
			}
			VAR6[VAR8++] = '';
		    } else {
			
			if (VAR8 > VAR9 - 10) {
			    FUN8(VAR6, 10);
			}
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
		    }
		} else if (VAR21 != 0) {
		    if (VAR8 > VAR9 - 10) {
			FUN8(VAR6, 10);
		    }
		    VAR8 += FUN9(0, &VAR6[VAR8], VAR21);
		}
	    } else {
		VAR14 = FUN10(VAR1);
		VAR1->VAR23++;
		if (VAR14 != NULL)
		    VAR1->VAR23 += VAR14->VAR24;
		if ((VAR14 != NULL) &&
		    (VAR14->VAR25 == VAR26)) {
		    if (VAR8 > VAR9 - 10) {
			FUN8(VAR6, 10);
		    }
		    if ((VAR1->VAR22 == 0) &&
		        (VAR14->VAR27[0] == '')) {
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
			VAR6[VAR8++] = '';
		    } else {
			VAR6[VAR8++] = VAR14->VAR27[0];
		    }
		} else if ((VAR14 != NULL) && 
		           (VAR1->VAR22 != 0)) {
		    if (VAR14->VAR25 != VAR26) {
			VAR7 = FUN11(VAR1, VAR14->VAR27,
						      VAR28,
						      0, 0, 0);
			if (VAR7 != NULL) {
			    VAR13 = VAR7;
			    while (*VAR13 != 0) { 
                                if ((*VAR13 == 0xD) || (*VAR13 == 0xA) ||
                                    (*VAR13 == 0x9)) {
                                    VAR6[VAR8++] = 0x20;
                                    VAR13++;
                                } else
                                    VAR6[VAR8++] = *VAR13++;
				if (VAR8 > VAR9 - 10) {
				    FUN8(VAR6, 10);
				}
			    }
			    FUN12(VAR7);
			    VAR7 = NULL;
			}
		    } else {
			if (VAR8 > VAR9 - 10) {
			    FUN8(VAR6, 10);
			}
			if (VAR14->VAR27 != NULL)
			    VAR6[VAR8++] = VAR14->VAR27[0];
		    }
		} else if (VAR14 != NULL) {
		    int VAR29 = FUN13(VAR14->VAR30);
		    const VAR5 *VAR31 = VAR14->VAR30;

		    
		    if ((VAR14->VAR25 != VAR26) &&
			(VAR14->VAR27 != NULL)) {
			VAR7 = FUN11(VAR1, VAR14->VAR27,
						  VAR28, 0, 0, 0);
			if (VAR7 != NULL) {
			    FUN12(VAR7);
			    VAR7 = NULL;
			}
		    }

		    
		    VAR6[VAR8++] = '';
		    while (VAR8 > VAR9 - VAR29 - 10) {
			FUN8(VAR6, VAR29 + 10);
		    }
		    for (;VAR29 > 0;VAR29--)
			VAR6[VAR8++] = *VAR31++;
		    VAR6[VAR8++] = '';
		}
	    }
	} else {
	    if ((VAR10 == 0x20) || (VAR10 == 0xD) || (VAR10 == 0xA) || (VAR10 == 0x9)) {
	        if ((VAR8 != 0) || (!VAR3)) {
		    if ((!VAR3) || (!VAR12)) {
			FUN14(VAR11,VAR6,VAR8,0x20);
			while (VAR8 > VAR9 - 10) {
			    FUN8(VAR6, 10);
			}
		    }
		    VAR12 = 1;
		}
	    } else {
	        VAR12 = 0;
		FUN14(VAR11,VAR6,VAR8,VAR10);
		if (VAR8 > VAR9 - 10) {
		    FUN8(VAR6, 10);
		}
	    }
	    FUN15(VAR11);
	}
 	VAR32;
 	VAR10 = FUN5(VAR11);
     }






     if ((VAR12) && (VAR3)) {
         while ((VAR8 > 0) && (VAR6[VAR8 - 1] == 0x20)) VAR8--;
     }
    VAR6[VAR8] = 0;
    if (VAR33 == '') {
	FUN3(VAR1, VAR34, NULL);
    } else if (VAR33 != VAR4) {
	if ((VAR10 != 0) && (!FUN6(VAR10))) {
	    FUN16(VAR1, VAR35,
			   "");
	} else {
	    FUN16(VAR1, VAR36,
			   "");
        }
    } else
	VAR17;
    if (VAR2 != NULL) *VAR2 = VAR8;
    return(VAR6);
 
 VAR20:
     FUN17(VAR1, NULL);


     if (VAR6 != NULL)
         FUN12(VAR6);
     if (VAR7 != NULL)
        FUN12(VAR7);
    return(NULL);
}