FUN1(void *VAR1, size_t VAR2) {
     xmlBufPtr VAR3;
 

    if ((VAR1 == NULL) || (VAR2 == 0))


         return(NULL);
 
     VAR3 = (VAR4) FUN2(sizeof(VAR5));
    if (VAR3 == NULL) {
	FUN3(NULL, "");
        return(NULL);
    }
    if (VAR2 < VAR6) {
        VAR3->VAR7 = VAR2;
        VAR3->VAR8 = VAR2;
    } else {
        VAR3->VAR7 = VAR6;
        VAR3->VAR8 = VAR6;
    }
    VAR3->VAR9 = VAR2;
    VAR3->VAR2 = VAR2;
    VAR3->VAR10 = VAR11;
    VAR3->VAR12 = (VAR13 *) VAR1;
    VAR3->VAR14 = 0;
    VAR3->VAR15 = NULL;
    return(VAR3);
}