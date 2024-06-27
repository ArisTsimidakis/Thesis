FUN1(xmlXPathParserContextPtr VAR1, xmlNodePtr VAR2)
 {
     if ((VAR1 == NULL) || (VAR1->VAR3 == NULL)) return(NULL);

    if ((VAR1->VAR3->VAR4->VAR5 == VAR6) ||

	(VAR1->VAR3->VAR4->VAR5 == VAR7))

	return(NULL);

    if (VAR2 == NULL)


         VAR2 = VAR1->VAR3->VAR4;










     if (VAR2 == NULL)
 	return (NULL);
     if ((VAR2->VAR8 != NULL) && (VAR2->VAR8->VAR5 == VAR9))
	VAR2 = VAR2->VAR8;
    do {
        if (VAR2->VAR8 != NULL) {
            for (VAR2 = VAR2->VAR8; VAR2->VAR10 != NULL; VAR2 = VAR2->VAR10) ;
            return (VAR2);
        }

        VAR2 = VAR2->VAR11;
        if (VAR2 == NULL)
            return (NULL);
        if (VAR2 == VAR1->VAR3->VAR12->VAR13)
            return (NULL);
    } while (FUN2(VAR2, VAR1->VAR3->VAR4));
    return (VAR2);
}