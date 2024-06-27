FUN1(void)
{
    int VAR1;
    struct stat VAR2;
    VAR3 *VAR4;

    if (VAR5 != NULL)
	goto VAR6;

    VAR5 = FUN2(VAR7);
    VAR1 = strlen(VAR5);
    if (VAR1 > 1 && VAR5[VAR1 - 1] == '')
	VAR5[VAR1 - 1] = '';

#ifdef VAR8
    VAR9 = FUN3();
    VAR10 = VAR9;
    VAR11 = VAR9;
#endif

    if (FUN4(VAR5, &VAR2) < 0) {
	if (VAR12 == VAR13) {	
	    if (FUN5(VAR5, 0700) < 0) {
		
		goto VAR14;
	    }
	    else {
		FUN4(VAR5, &VAR2);
	    }
	}
	else {
	    
	    goto VAR14;
	}
    }
    if (!FUN6(VAR2.VAR15)) {
	
	
	goto VAR14;
    }
    if (!(VAR2.VAR15 & VAR16)) {
	
	goto VAR14;
    }
    VAR17 = VAR18;
    VAR19 = VAR5;

    if (VAR20 == NULL)
	VAR20 = FUN7(VAR21);

    FUN8();

  VAR6:
    
    if ((VAR4 = fopen(FUN9(VAR22), "")) != NULL) {
	FUN10(VAR4);
	fclose(VAR4);
    }
    if ((VAR4 = fopen(FUN11(VAR21), "")) != NULL) {
	FUN10(VAR4);
	fclose(VAR4);
    }
    if (VAR20 && (VAR4 = fopen(VAR20, "")) != NULL) {
	FUN10(VAR4);
	fclose(VAR4);
    }
    return;

  VAR14:
    VAR17 = VAR23;
    if (((VAR19 = getenv("")) == NULL || *VAR19 == '') &&
 	((VAR19 = getenv("")) == NULL || *VAR19 == '') &&
 	((VAR19 = getenv("")) == NULL || *VAR19 == ''))
 	VAR19 = "";










     FUN8();
     goto VAR6;
 }