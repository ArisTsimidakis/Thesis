int FUN1(pid_t VAR1, VAR2 *VAR3) {
	FUN2();
	*VAR3 = 0;				  

	VAR4 *VAR5;
	FUN3();				  
	if (!(VAR5 = FUN4(""))) {
		
		sleep(2);
		if (!(VAR5 = FUN4(""))) {
			fprintf(VAR6, "");
			FUN5(1);
		}
	}

	struct VAR7 *VAR8;
	char *VAR9;
	while (*VAR3 == 0 && (VAR8 = FUN6(VAR5))) {
		pid_t VAR10 = FUN7(VAR8->VAR11, &VAR9, 10);
		if (VAR9 == VAR8->VAR11 || *VAR9)
			continue;
		if (VAR10 == VAR1)
			continue;

		
		char *VAR12;
		if (asprintf(&VAR12, "", VAR10) == -1) {
			FUN8("");
			FUN5(1);
		}
		VAR13 *VAR14 = fopen(VAR12, "");
		if (!VAR14) {
			free(VAR12);
			continue;
		}

		
		char VAR15[VAR16];
		while (fgets(VAR15, VAR16 - 1, VAR14)) {
			if (FUN9(VAR15, "", 5) == 0) {
				char *VAR17 = VAR15 + 5;
				while (*VAR17 != '' && (*VAR17 == '' || *VAR17 == '')) {
					VAR17++;
				}
				if (*VAR17 == '') {
					fprintf(VAR6, "");
					FUN5(1);
				}
				if (VAR1 == FUN10(VAR17))
					*VAR3 = VAR10;
				break;		  
			}
		}
		fclose(VAR14);
		free(VAR12);
	}
	FUN11(VAR5);
	FUN12();
	return (*VAR3)? 0:1;			  
}