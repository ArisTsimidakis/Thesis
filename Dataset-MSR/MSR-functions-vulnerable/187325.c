FUN1(xsltTransformContextPtr VAR1, const VAR2 *VAR3,
	         const VAR2 *VAR4) {
    xsltTemplatePtr VAR5;
    xsltStylesheetPtr VAR6;

    if ((VAR1 == NULL) || (VAR3 == NULL))
 	return(NULL);
     VAR6 = VAR1->VAR6;
     while (VAR6 != NULL) {

	VAR5 = VAR6->VAR7;

	while (VAR5 != NULL) {

	    if (FUN2(VAR3, VAR5->VAR3)) {

		if (((VAR4 == NULL) && (VAR5->VAR4 == NULL)) ||

		    ((VAR4 != NULL) && (VAR5->VAR4 != NULL) &&

		     (FUN2(VAR4, VAR5->VAR4)))) {

		    return(VAR5);

		}

	    }

	    VAR5 = VAR5->VAR8;

	}












 
 	VAR6 = FUN3(VAR6);
     }
    return(NULL);
}