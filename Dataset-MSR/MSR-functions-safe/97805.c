FUN1(xmlNodeSetPtr VAR1) {
    xmlXPathObjectPtr VAR2;

    VAR2 = (VAR3) FUN2(sizeof(VAR4));
    if (VAR2 == NULL) {
        FUN3(NULL, "");
	return(NULL);
    }
    memset(VAR2, 0 , (VAR5) sizeof(VAR4));
    VAR2->VAR6 = VAR7;
    VAR2->VAR8 = VAR1;
#ifdef VAR9
    FUN4(NULL, VAR7);
#endif
    return(VAR2);
}