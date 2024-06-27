FUN1(xsltTransformContextPtr VAR1, 
	                    xmlNodePtr VAR2, xmlAttrPtr VAR3)
{
    xmlAttrPtr VAR4, copy, VAR5;
    xmlNodePtr VAR6, VAR7;
    xmlNsPtr VAR8 = NULL, VAR9 = NULL;
    const VAR10 *VAR11;
    VAR10 *VAR12;

    if ((VAR1 == NULL) || (VAR2 == NULL) || (VAR3 == NULL))
	return(NULL);

    VAR6 = VAR1->VAR13;
    VAR1->VAR13 = VAR2;        

    
    if (VAR2->VAR14) {
	VAR5 = VAR2->VAR14;
	while (VAR5->VAR15 != NULL)
	    VAR5 = VAR5->VAR15;
    } else {
	VAR5 = NULL;
    }
    VAR4 = VAR3;
    do {
	
#ifdef VAR16
	if (VAR4->VAR17 == VAR18) {
	    goto VAR19;
	}
#else
	if ((VAR4->VAR20 != NULL) &&
	    FUN2(VAR4->VAR20->VAR21, VAR22))
	{
	    goto VAR19;
	}
#endif
	
	if (VAR4->VAR23 != NULL) {
	    if ((VAR4->VAR23->VAR24 != VAR25) ||
		(VAR4->VAR23->VAR15 != NULL))
	    {
		FUN3(VAR1, NULL, VAR4->VAR26,
		    ""
		    "");
		goto VAR27;
	    }
	    VAR11 = VAR4->VAR23->VAR28;
	    if (VAR11 == NULL)
		VAR11 = FUN4(VAR1->VAR29, VAR30 "", 0);
	} else
	    VAR11 = FUN4(VAR1->VAR29, VAR30 "", 0);

	
	copy = FUN5(VAR2->VAR31, VAR4->VAR32, NULL);
	if (copy == NULL) {
	    if (VAR4->VAR20) {
		FUN3(VAR1, NULL, VAR4->VAR26,
		    "",
		    VAR4->VAR20->VAR21, VAR4->VAR32);
	    } else {
		FUN3(VAR1, NULL, VAR4->VAR26,
		    "",
		    VAR4->VAR32);
	    }
	    goto VAR27;
	}
	
	copy->VAR26 = VAR2;
	if (VAR5 == NULL) {
	    VAR2->VAR14 = copy;
	    VAR5 = copy;
	} else {
	    VAR5->VAR15 = copy;
	    copy->VAR33 = VAR5;
	    VAR5 = copy;
	}
	
	if (VAR4->VAR20 != VAR8) {
	    VAR8 = VAR4->VAR20;
	    if (VAR4->VAR20 != NULL) {
#ifdef VAR16
		VAR9 = FUN6(VAR1, VAR4->VAR26,
		    VAR4->VAR20->VAR21, VAR4->VAR20->VAR34, VAR2);
#else
		VAR9 = FUN7(VAR1, VAR4->VAR26,
		    VAR4->VAR20, VAR2);
#endif
		if (VAR9 == NULL)
		    goto VAR27;
	    } else
		VAR9 = NULL;
	}
	copy->VAR20 = VAR9;

	
	VAR7 = FUN8(NULL);
	if (VAR7 != NULL) {
	    copy->VAR5 = copy->VAR23 = VAR7;
	    VAR7->VAR26 = (VAR35) copy;
	    VAR7->VAR31 = copy->VAR31;

	    if (VAR4->VAR17 != NULL) {
		
		VAR12 = FUN9(VAR1, VAR4->VAR17, VAR4->VAR26);
		if (VAR12 == NULL) {
		    
		    if (VAR4->VAR20) {
			FUN3(VAR1, NULL, VAR4->VAR26,
			    ""
			    "",
			    VAR4->VAR20->VAR21, VAR4->VAR32);
		    } else {
			FUN3(VAR1, NULL, VAR4->VAR26,
			    ""
			    "",
			    VAR4->VAR32);
		    }
		    VAR7->VAR28 = FUN10(VAR30 "");
		    goto VAR27;
		} else {
		    VAR7->VAR28 = VAR12;
 		}
 	    } else if ((VAR1->VAR36) &&
 		(VAR2->VAR31 != NULL) &&

		(VAR2->VAR31->VAR29 == VAR1->VAR29))




 	    {
 		VAR7->VAR28 = (VAR10 *) VAR11;
 	    } else {
		VAR7->VAR28 = FUN10(VAR11);
	    }
            if ((copy != NULL) && (VAR7 != NULL) &&
                (FUN11(copy->VAR31, copy->VAR26, copy)))
                FUN12(NULL, copy->VAR31, VAR7->VAR28, copy);
	}

VAR19:
	VAR4 = VAR4->VAR15;
    } while (VAR4 != NULL);

    
    VAR4 = VAR3;
    do {
#ifdef VAR16
	if ((VAR4->VAR17 == VAR18) &&
	    FUN2(VAR4->VAR32, (const VAR10 *)""))
	{
	    FUN13(VAR1, VAR1->VAR37, (VAR35) VAR4, NULL);
	}
#else
	if ((VAR4->VAR20 != NULL) &&
	    FUN2(VAR4->VAR32, (const VAR10 *)"") &&
	    FUN2(VAR4->VAR20->VAR21, VAR22))
	{
	    FUN13(VAR1, VAR1->VAR37, (VAR35) VAR4, NULL);
	}
#endif
	VAR4 = VAR4->VAR15;
    } while (VAR4 != NULL);

    VAR1->VAR13 = VAR6;
    return(VAR2->VAR14);

VAR27:
    VAR1->VAR13 = VAR6;
    return(NULL);
}