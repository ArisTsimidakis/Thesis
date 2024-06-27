static int FUN1(const char *VAR1)
 {
 	struct VAR2 *VAR3 = FUN2();

	char *VAR4 = NULL, *VAR5 = NULL, *VAR6;


 	const char *VAR7;
 	int VAR8;
 
	if (!VAR3)
		return -VAR9;

	VAR6 = FUN3(VAR3, VAR1);
	if (!VAR6)
		return -VAR10;

	VAR7 = FUN4(VAR1);
	if (!VAR7)
		return -VAR10;

	FUN5(VAR7, &VAR5, &VAR4);
	if (!VAR4) {
		VAR8 = -VAR10;
 		goto VAR11;
 	}
 

	fprintf(VAR12, "",

			VAR6, VAR5, VAR1);
















 	if (!FUN6(VAR3, VAR6, VAR5, NULL, VAR13)) {
 		VAR8 = -VAR14;
 		goto VAR11;
	}
	if (!FUN7(VAR3->VAR15, VAR6, VAR7, NULL)) {
		VAR8 = -VAR14;
		goto VAR11;
	}

	if (!FUN8(VAR6, VAR7)) {
		VAR8 = -VAR10;
		goto VAR11;
	}

	VAR8 = 0;
 
 VAR11:
 	free(VAR5);


 	return VAR8;
 }