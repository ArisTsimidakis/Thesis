FUN1(VAR1, PRINT VAR2, "")
{
    char *VAR3 = NULL, *VAR4;
    VAR5 *VAR6;
    int VAR7;

    VAR8 = NULL;	
    VAR4 = FUN2();
    if (VAR4 == NULL || *VAR4 == '') {
	
	VAR3 = FUN3("", NULL, VAR9, VAR10);
	if (VAR3 == NULL || *VAR3 == '') {
	    FUN4(VAR11, VAR12);
	    return;
	}
    }
    VAR4 = FUN5(VAR3 ? VAR3 : VAR4);
    if (*VAR4 == '') {
	VAR7 = VAR13;
	VAR6 = popen(VAR4 + 1, "");
    }
    else {
	if (VAR3) {
	    VAR4 = FUN6(FUN7(VAR3))->VAR14;
	    VAR4 = FUN5(VAR4);
	}
	VAR4 = FUN8(VAR4);
	if (FUN9(VAR4) < 0) {
	    FUN4(VAR11, VAR12);
	    return;
	}
	VAR6 = fopen(VAR4, "");
	VAR7 = VAR15;
    }
    if (VAR6 == NULL) {
	
	char *VAR16 = FUN10("", FUN11(VAR4))->VAR14;
	FUN12(VAR16, VAR13);
	return;
    }
    FUN13(VAR11, VAR6, VAR13);
    if (VAR7)
	FUN14(VAR6);
    else
	fclose(VAR6);
    FUN4(VAR11, VAR12);
}