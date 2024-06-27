static bool FUN1(struct VAR1 *VAR1, VAR2 *VAR3)
 {

	char *VAR4, *VAR5, *VAR6;

	char *VAR7, *VAR8, VAR9[256];


 	if (VAR10) {

		FUN2(VAR11, "");


 		return false;
 	}
 

	memset(VAR9, 0, 255);






 	VAR7 = (char *)FUN3(FUN4(VAR3, 0));
 	if (!VAR7)
 		VAR7 = VAR1->VAR4;

	VAR8 = (char *)FUN3(FUN4(VAR3, 1));
 	if (!VAR8)
 		VAR8 = VAR1->VAR5;
 

	sprintf(VAR9, "", VAR7, VAR8);




 	if (!FUN5(VAR9, &VAR4, &VAR5))
 		return false;
 
	FUN2(VAR12, "", FUN6(VAR1), VAR9);

	FUN7(VAR1);

	FUN8(&VAR1->VAR13);
	FUN9(VAR1);
	VAR6 = VAR1->VAR4;
	VAR1->VAR4 = VAR4;
	VAR1->VAR14 = VAR1->VAR4;
	free(VAR6);
	VAR6 = VAR1->VAR5;
	VAR1->VAR5 = VAR5;
	free(VAR6);
	FUN10(&VAR1->VAR13);

	if (!FUN11(VAR1)) {
		FUN12(VAR1);
		return false;
	}

	return true;
}