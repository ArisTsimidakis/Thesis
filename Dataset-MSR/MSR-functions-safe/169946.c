FUN1(xsltStylesheetPtr VAR1, xmlNodePtr VAR2) {
#ifdef VAR3
    xsltStyleItemApplyTemplatesPtr VAR4;
#else
    xsltStylePreCompPtr VAR4;
#endif

    if ((VAR1 == NULL) || (VAR2 == NULL) || (VAR2->VAR5 != VAR6))
	return;

#ifdef VAR3
    VAR4 = (VAR7)
	FUN2(VAR1, VAR8);
#else
    VAR4 = FUN2(VAR1, VAR8);
#endif

    if (VAR4 == NULL)
	return;
    VAR2->VAR9 = VAR4;
    VAR4->VAR2 = VAR2;

    
    FUN3(VAR1, VAR2, VAR10 "",
	0, NULL, &(VAR4->VAR11), &(VAR4->VAR12));
    
    VAR4->VAR13 = FUN4(VAR1, VAR2, VAR10 "",
	VAR14);
    if (VAR4->VAR13 != NULL) {
	VAR4->VAR4 = FUN5(VAR1, VAR4->VAR13);
	if (VAR4->VAR4 == NULL) {
	    FUN6(NULL, VAR1, VAR2,
		""
		"", VAR4->VAR13);
	     VAR1->VAR15++;
	}
    }
    
}