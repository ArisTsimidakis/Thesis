static int FUN1(void) {
	
	FUN2();
 
 	char *VAR1;
 	char *VAR2 = VAR3;

	


 	VAR4 *VAR5 = fopen(VAR2, "");
 	if (VAR5) {
 		fprintf(VAR5, "");
 		FUN3(VAR5, FUN4(), FUN5(), 0600);
 		fclose(VAR5);
 	}




 	if (asprintf(&VAR1, "", VAR6.VAR7) == -1)
 		FUN6("");
 	
 	struct stat VAR8;
 	if (FUN7(VAR1, &VAR8) == 0) {
 		if (FUN8(VAR1)) {

			fprintf(VAR9, "");

			FUN9(1);

		}

			

		pid_t VAR10 = FUN10();

		if (VAR10 < 0)

			FUN6("");

		if (VAR10 == 0) {

			

			FUN11(0);

	

			

			int VAR11 = FUN12(VAR1, VAR2);

			if (VAR11)

				fprintf(VAR9, "");

			else {

				FUN13("", VAR2);

			}

				

			FUN14(0);




 		}

		

		FUN15(VAR10, NULL, 0);
 

		if (chown(VAR2, FUN4(), FUN5()) == -1)

			FUN6("");

		if (chmod(VAR2, 0600) == -1)

			FUN6("");




 		return 1; 
 	}
 	
	return 0;
}