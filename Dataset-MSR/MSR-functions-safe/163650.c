FUN1(const char *VAR1, const char *VAR2, htmlSAXHandlerPtr VAR3,
                 void *VAR4) {
    htmlDocPtr VAR5;
    htmlParserCtxtPtr VAR6;
    htmlSAXHandlerPtr VAR7 = NULL;

    FUN2();

    VAR6 = FUN3(VAR1, VAR2);
    if (VAR6 == NULL) return(NULL);
    if (VAR3 != NULL) {
	VAR7 = VAR6->VAR3;
        VAR6->VAR3 = VAR3;
        VAR6->VAR4 = VAR4;
    }

    FUN4(VAR6);

    VAR5 = VAR6->VAR8;
    if (VAR3 != NULL) {
        VAR6->VAR3 = VAR7;
        VAR6->VAR4 = NULL;
    }
    FUN5(VAR6);

    return(VAR5);
}