FUN1(xmlParserCtxtPtr VAR1, const VAR2 **VAR3,
                  const VAR2 **VAR4, int *VAR5) {
    const VAR2 *VAR6;
    const VAR2 *VAR7;
    const VAR2 *VAR8;
    const VAR2 *VAR9;
    const VAR2 *VAR10;
    VAR2 *VAR11;
    const VAR2 **VAR12 = VAR1->VAR12;
    int VAR13 = VAR1->VAR13;
    int VAR14, VAR15, VAR16;
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22;
    const VAR2 *VAR23;
    unsigned long VAR24;
    int VAR25 = VAR1->VAR25;

    if (VAR26 != '') return(NULL);
    VAR27;

    
VAR28:
    VAR29;
    VAR23 = VAR1->VAR30->VAR23;
    VAR24 = VAR1->VAR30->VAR24 - VAR1->VAR30->VAR23;
    VAR21 = VAR1->VAR30->VAR31;
    VAR22 = VAR1->VAR30->VAR32;
    VAR15 = 0;
    VAR14 = 0;
    VAR16 = 0;
    VAR19 = 0;
    VAR20 = 0;
    
    VAR1->VAR25 = VAR25;

    VAR6 = FUN2(VAR1, &VAR7);
    if (VAR6 == NULL) {
	FUN3(VAR1, VAR33,
		       "");
        return(NULL);
    }
    *VAR5 = VAR1->VAR30->VAR24 - VAR1->VAR30->VAR23 - VAR24;

    
    VAR34;
     VAR35;
     if (VAR1->VAR30->VAR23 != VAR23) goto VAR36;
 

    while ((VAR26 != '') && 


 	   ((VAR26 != '') || (FUN4(1) != '')) &&

	   (FUN5(VAR26))) {


 	const VAR2 *VAR37 = VAR38;
 	unsigned int VAR39 = VAR1->VAR30->VAR40;
 	int VAR41 = -1, VAR42 = 0;

	VAR8 = FUN6(VAR1, VAR7, VAR6,
	                             &VAR9, &VAR11, &VAR41, &VAR42);
	if (VAR1->VAR30->VAR23 != VAR23) {
	    if ((VAR11 != NULL) && (VAR42 != 0))
	        FUN7(VAR11);
	    VAR11 = NULL;
	    goto VAR36;
	}
        if ((VAR8 != NULL) && (VAR11 != NULL)) {
	    if (VAR41 < 0) VAR41 = FUN8(VAR11);
            if ((VAR8 == VAR1->VAR43) && (VAR9 == NULL)) {
	        const VAR2 *VAR44 = FUN9(VAR1->VAR45, VAR11, VAR41);
		xmlURIPtr VAR46;

                if (*VAR44 != 0) {
		    VAR46 = FUN10((const char *) VAR44);
		    if (VAR46 == NULL) {
			FUN11(VAR1, VAR47,
			         "",
					   VAR44, NULL, NULL);
		    } else {
			if (VAR46->VAR48 == NULL) {
			    FUN12(VAR1, VAR49,
				      "",
				      VAR44, NULL, NULL);
			}
			FUN13(VAR46);
		    }
		    if (VAR44 == VAR1->VAR50) {
			if (VAR8 != VAR1->VAR51) {
			    FUN11(VAR1, VAR52,
			 "",
				     NULL, NULL, NULL);
			}
			goto VAR53;
		    }
		    if ((VAR41 == 29) &&
			(FUN14(VAR44,
				 VAR54 ""))) {
			FUN11(VAR1, VAR52,
			     "",
				 NULL, NULL, NULL);
			goto VAR53;
		    }
		}
		
		for (VAR18 = 1;VAR18 <= VAR19;VAR18++)
		    if (VAR1->VAR55[VAR1->VAR25 - 2 * VAR18] == NULL)
			break;
		if (VAR18 <= VAR19)
		    FUN15(VAR1, NULL, VAR8);
		else
		    if (FUN16(VAR1, NULL, VAR44) > 0) VAR19++;
VAR53:
		if (VAR42 != 0) FUN7(VAR11);
		VAR34;
		continue;
	    }
            if (VAR9 == VAR1->VAR43) {
	        const VAR2 *VAR44 = FUN9(VAR1->VAR45, VAR11, VAR41);
		xmlURIPtr VAR46;

                if (VAR8 == VAR1->VAR51) {
		    if (VAR44 != VAR1->VAR50) {
		        FUN11(VAR1, VAR52,
			         "",
			         NULL, NULL, NULL);
		    }
		    
		    goto VAR56;
		}
                if (VAR44 == VAR1->VAR50) {
		    if (VAR8 != VAR1->VAR51) {
		        FUN11(VAR1, VAR52,
			         "",
			         NULL, NULL, NULL);
		    }
		    goto VAR56;
		}
                if (VAR8 == VAR1->VAR43) {
		    FUN11(VAR1, VAR52,
			     "",
			     NULL, NULL, NULL);
		    goto VAR56;
		}
		if ((VAR41 == 29) &&
		    (FUN14(VAR44,
		                 VAR54 ""))) {
		    FUN11(VAR1, VAR52,
			     "",
			     NULL, NULL, NULL);
		    goto VAR56;
		}
		if ((VAR44 == NULL) || (VAR44[0] == 0)) {
		    FUN11(VAR1, VAR52,
		             "",
			          VAR8, NULL, NULL);
		    goto VAR56;
		} else {
		    VAR46 = FUN10((const char *) VAR44);
		    if (VAR46 == NULL) {
			FUN11(VAR1, VAR47,
			     "",
					   VAR8, VAR44, NULL);
		    } else {
			if ((VAR1->VAR57) && (VAR46->VAR48 == NULL)) {
			    FUN12(VAR1, VAR49,
				      "",
				      VAR8, VAR44, NULL);
			}
			FUN13(VAR46);
		    }
		}

		
		for (VAR18 = 1;VAR18 <= VAR19;VAR18++)
		    if (VAR1->VAR55[VAR1->VAR25 - 2 * VAR18] == VAR8)
			break;
		if (VAR18 <= VAR19)
		    FUN15(VAR1, VAR9, VAR8);
		else
		    if (FUN16(VAR1, VAR8, VAR44) > 0) VAR19++;
VAR56:
		if (VAR42 != 0) FUN7(VAR11);
		VAR34;
		if (VAR1->VAR30->VAR23 != VAR23) goto VAR36;
		continue;
	    }

	    
	    if ((VAR12 == NULL) || (VAR15 + 5 > VAR13)) {
	        if (FUN17(VAR1, VAR15 + 5) < 0) {
		    if (VAR11[VAR41] == 0)
			FUN7(VAR11);
		    goto VAR58;
		}
	        VAR13 = VAR1->VAR13;
		VAR12 = VAR1->VAR12;
	    }
	    VAR1->VAR59[VAR14++] = VAR42;
	    VAR12[VAR15++] = VAR8;
	    VAR12[VAR15++] = VAR9;
	    VAR12[VAR15++] = NULL; 
	    VAR12[VAR15++] = VAR11;
	    VAR11 += VAR41;
	    VAR12[VAR15++] = VAR11;
	    
	    if (VAR42 != 0) VAR20 = 1;
	} else {
	    if ((VAR11 != NULL) && (VAR11[VAR41] == 0))
		FUN7(VAR11);
	}

 VAR58:
 
 	VAR35




 	if (VAR1->VAR30->VAR23 != VAR23) goto VAR36;
 	if ((VAR26 == '') || (((VAR26 == '') && (FUN4(1) == ''))))
 	    break;
	if (!FUN18(VAR26)) {
	    FUN3(VAR1, VAR60,
			   "");
	    break;
	}
	VAR34;
        if ((VAR39 == VAR1->VAR30->VAR40) && (VAR37 == VAR38) &&
            (VAR8 == NULL) && (VAR11 == NULL)) {
	    FUN19(VAR1, VAR61,
	         "");
	    break;
	}
        VAR35;
	if (VAR1->VAR30->VAR23 != VAR23) goto VAR36;
    }

    
    if (VAR1->VAR62 != NULL) {
        xmlDefAttrsPtr VAR63;

	VAR63 = FUN20(VAR1->VAR62, VAR6, VAR7);
	if (VAR63 != NULL) {
	    for (VAR17 = 0;VAR17 < VAR63->VAR64;VAR17++) {
	        VAR8 = VAR63->VAR65[5 * VAR17];
		VAR9 = VAR63->VAR65[5 * VAR17 + 1];

                
		if ((VAR8 == VAR1->VAR43) && (VAR9 == NULL)) {
		    
		    for (VAR18 = 1;VAR18 <= VAR19;VAR18++)
		        if (VAR1->VAR55[VAR1->VAR25 - 2 * VAR18] == NULL)
			    break;
	            if (VAR18 <= VAR19) continue;

		    VAR10 = FUN21(VAR1, NULL);
		    if (VAR10 != VAR63->VAR65[5 * VAR17 + 2]) {
			if (FUN16(VAR1, NULL,
			           VAR63->VAR65[5 * VAR17 + 2]) > 0)
			    VAR19++;
		    }
		} else if (VAR9 == VAR1->VAR43) {
		    
		    for (VAR18 = 1;VAR18 <= VAR19;VAR18++)
		        if (VAR1->VAR55[VAR1->VAR25 - 2 * VAR18] == VAR8)
			    break;
	            if (VAR18 <= VAR19) continue;

		    VAR10 = FUN21(VAR1, VAR8);
		    if (VAR10 != VAR63->VAR65[2]) {
			if (FUN16(VAR1, VAR8,
			           VAR63->VAR65[5 * VAR17 + 2]) > 0)
			    VAR19++;
		    }
		} else {
		    
		    for (VAR18 = 0;VAR18 < VAR15;VAR18+=5) {
			if ((VAR8 == VAR12[VAR18]) && (VAR9 == VAR12[VAR18+1]))
			    break;
		    }
		    if (VAR18 < VAR15) continue;

		    if ((VAR12 == NULL) || (VAR15 + 5 > VAR13)) {
			if (FUN17(VAR1, VAR15 + 5) < 0) {
			    return(NULL);
			}
			VAR13 = VAR1->VAR13;
			VAR12 = VAR1->VAR12;
		    }
		    VAR12[VAR15++] = VAR8;
		    VAR12[VAR15++] = VAR9;
		    if (VAR9 == NULL)
			VAR12[VAR15++] = NULL;
		    else
		        VAR12[VAR15++] = FUN21(VAR1, VAR9);
		    VAR12[VAR15++] = VAR63->VAR65[5 * VAR17 + 2];
		    VAR12[VAR15++] = VAR63->VAR65[5 * VAR17 + 3];
		    if ((VAR1->VAR66 == 1) &&
		        (VAR63->VAR65[5 * VAR17 + 4] != NULL)) {
			FUN22(VAR1, VAR67, 
	  "",
	                                 VAR8, VAR6);
		    }
		    VAR16++;
		}
	    }
	}
    }

    
    for (VAR17 = 0; VAR17 < VAR15;VAR17 += 5) {
        
	if (VAR12[VAR17 + 1] != NULL) {
	    VAR10 = FUN21(VAR1, VAR12[VAR17 + 1]);
	    if (VAR10 == NULL) {
		FUN11(VAR1, VAR68,
		    "",
		    VAR12[VAR17 + 1], VAR12[VAR17], VAR6);
	    }
	    VAR12[VAR17 + 2] = VAR10;
	} else
	    VAR10 = NULL;
	
        for (VAR18 = 0; VAR18 < VAR17;VAR18 += 5) {
	    if (VAR12[VAR17] == VAR12[VAR18]) {
	        if (VAR12[VAR17+1] == VAR12[VAR18+1]) {
		    FUN15(VAR1, VAR12[VAR17+1], VAR12[VAR17]);
		    break;
		}
		if ((VAR10 != NULL) && (VAR12[VAR18 + 2] == VAR10)) {
		    FUN11(VAR1, VAR69,
			     "",
			     VAR12[VAR17], VAR10, NULL);
		    break;
		}
	    }
	}
    }

    VAR10 = FUN21(VAR1, VAR7);
    if ((VAR7 != NULL) && (VAR10 == NULL)) {
	FUN11(VAR1, VAR68,
	         "",
		 VAR7, VAR6, NULL);
    }
    *VAR3 = VAR7;
    *VAR4 = VAR10;

    
    if ((VAR1->VAR70 != NULL) && (VAR1->VAR70->VAR71 != NULL) &&
	(!VAR1->VAR72)) {
	if (VAR19 > 0)
	    VAR1->VAR70->FUN23(VAR1->VAR73, VAR6, VAR7,
			  VAR10, VAR19, &VAR1->VAR55[VAR1->VAR25 - 2 * VAR19],
			  VAR15 / 5, VAR16, VAR12);
	else
	    VAR1->VAR70->FUN23(VAR1->VAR73, VAR6, VAR7,
	                  VAR10, 0, NULL, VAR15 / 5, VAR16, VAR12);
    }

    
    if (VAR20 != 0) {
	for (VAR17 = 3,VAR18 = 0; VAR18 < VAR14;VAR17 += 5,VAR18++)
	    if ((VAR1->VAR59[VAR18] != 0) && (VAR12[VAR17] != NULL))
	        FUN7((VAR2 *) VAR12[VAR17]);
    }

    return(VAR6);

VAR36:
    
    if (VAR20 != 0) {
	for (VAR17 = 3,VAR18 = 0; VAR18 < VAR14;VAR17 += 5,VAR18++)
	    if ((VAR1->VAR59[VAR18] != 0) && (VAR12[VAR17] != NULL))
	        FUN7((VAR2 *) VAR12[VAR17]);
    }
    VAR1->VAR30->VAR24 = VAR1->VAR30->VAR23 + VAR24;
    VAR1->VAR30->VAR31 = VAR21;
    VAR1->VAR30->VAR32 = VAR22;
    if (VAR1->VAR74 == 1) {
	goto VAR28;
    }
    return(NULL);
}