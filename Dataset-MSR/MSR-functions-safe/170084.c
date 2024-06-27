FUN1(xsltCompilerCtxtPtr VAR1,
			xmlDocPtr VAR2,
			xmlNsPtr VAR3,
			xmlNodePtr VAR4)
{
    xsltNsMapPtr VAR5;

    if ((VAR1 == NULL) || (VAR2 == NULL) || (VAR3 == NULL))
	return(NULL);

    VAR5 = (VAR6) FUN2(sizeof(VAR7));
    if (VAR5 == NULL) {
	FUN3(NULL, VAR1->VAR8, VAR4,
	    ""
	    "");
	return(NULL);
    }
    memset(VAR5, 0, sizeof(VAR7));
    VAR5->VAR2 = VAR2;
    VAR5->VAR3 = VAR3;
    VAR5->VAR9 = VAR3->VAR10;
    
    if (VAR1->VAR11->VAR12 != NULL)
	VAR5->VAR13 = VAR1->VAR11->VAR12;
    VAR1->VAR11->VAR12 = VAR5;

    return(VAR5);
}