static int FUN1(void) {
	
	FUN2();
 
 	char *VAR1;
 	char *VAR2 = VAR3;

	


 	VAR4 *VAR5 = fopen(VAR2, "");
 	if (VAR5) {
 		fprintf(VAR5, "");
		FUN3(VAR5, FUN4(), FUN5(), 0644);
		fclose(VAR5);
	}
	
	if (asprintf(&VAR1, "", VAR6.VAR7) == -1)
		FUN6("");
	
	struct stat VAR8;
	if (FUN7(VAR1, &VAR8) == 0) {
		if (FUN8(VAR1)) {
			
			
			char* VAR9 = FUN9(VAR1, NULL);
			if (!VAR9) {
				fprintf(VAR10, "", VAR1);
				FUN10(1);
			}
			if (FUN11(VAR9, VAR6.VAR7, strlen(VAR6.VAR7)) != 0) {
				fprintf(VAR10, "");
				FUN10(1);
			}
			free(VAR9);
		}

		FUN12(VAR1, VAR2, FUN4(), FUN5(), 0644);
		FUN13("", VAR2);
		return 1; 
	}
	
	return 0;
}