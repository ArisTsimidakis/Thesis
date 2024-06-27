char *FUN1(const char *VAR1)
 {
 
 	static char *VAR2 = NULL;

	static unsigned short VAR3 = 0;


 	char VAR4[13], *VAR5 = NULL;
 	register unsigned char VAR6;
 	unsigned char VAR7;

	if (VAR1 == VAR8) {
		return(VAR8);
	}
	for (VAR6 = 0; VAR6 < 12; VAR6++) {
		VAR4[VAR6] = VAR1[VAR6];
	}
	VAR4[12] = 0;
	VAR7 = strlen(VAR4);
	if (VAR2 != NULL) {
		VAR3 += VAR7;
		VAR2 = (char *) FUN2(VAR2, VAR3 + 1);
		strcat(VAR2, VAR4);
	} else {
		VAR3 = VAR7;
		VAR2 = (char *) FUN3(VAR3 + 1);
		strcpy(VAR2, VAR4);
	}
	if (VAR7 < 12) {
		VAR5 = VAR2;
		VAR2 = NULL;
		FUN4((""%VAR9\"", VAR5));
	}
	return(VAR5);
}