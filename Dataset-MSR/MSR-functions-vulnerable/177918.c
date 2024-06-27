char **FUN1(
    register VAR1 *VAR2,
    int *VAR3)	
{
	xListExtensionsReply VAR4;
	char **VAR5 = NULL;
	char *VAR6 = NULL;
	char *VAR7;
	int VAR8 = 0;
	register unsigned VAR9;
	register int VAR10;
	_X_UNUSED register VAR11 *VAR12;
	unsigned long VAR13 = 0;

	FUN2(VAR2);
	FUN3 (VAR14, VAR12);

	if (! FUN4 (VAR2, (VAR15 *) &VAR4, 0, VAR16)) {
	    FUN5(VAR2);
	    FUN6();
	    return (char **) NULL;
	}

	if (VAR4.VAR17) {
	    VAR5 = FUN7 (VAR4.VAR17 * sizeof (char *));
	    if (VAR4.VAR10 > 0 && VAR4.VAR10 < (VAR18 >> 2)) {
		VAR13 = VAR4.VAR10 << 2;
		VAR6 = FUN7 (VAR13 + 1);
                
	    }

	    if ((!VAR5) || (!VAR6)) {
		FUN8(VAR5);
		FUN8(VAR6);
		FUN9(VAR2, VAR4.VAR10);
		FUN5(VAR2);
		FUN6();
		return (char **) NULL;
	    }

	    FUN10 (VAR2, VAR6, VAR13);
	    
 	    VAR7 = VAR6 + VAR13;

	    VAR10 = *VAR6;


 	    for (VAR9 = 0; VAR9 < VAR4.VAR17; VAR9++) {
 		if (VAR6 + VAR10 < VAR7) {
 		    VAR5[VAR9] = VAR6+1;  
 		    VAR6 += VAR10 + 1; 

		    VAR10 = *VAR6;


 		    *VAR6 = ''; 
 		    VAR8++;
 		} else
		    VAR5[VAR9] = NULL;
	    }
	}

	*VAR3 = VAR8;
	FUN5(VAR2);
	FUN6();
	return (VAR5);
}