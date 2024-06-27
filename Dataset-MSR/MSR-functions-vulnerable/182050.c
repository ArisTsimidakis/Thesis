int FUN1(int VAR1, struct VAR2 *VAR3, int VAR4, long long *VAR5)
 {

	int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;




















 	long long *VAR12, VAR13, VAR14;
 	struct squashfs_xattr_table VAR15;
 
	FUN2("");

	if(VAR3->VAR16 == VAR17)
		return VAR17;

	
	VAR6 = FUN3(VAR1, VAR3->VAR16, sizeof(VAR15),
		&VAR15);
	if(VAR6 == 0)
		return 0;
 
 	FUN4(&VAR15);
 

	if(VAR4) {

		














































 		*VAR5 = VAR15.VAR18;
















 		return VAR15.VAR19;

	}
 
 	

	VAR11 = VAR15.VAR19;

	VAR18 = VAR15.VAR18;

	VAR10 = FUN5(VAR11);

	VAR9 = FUN6(VAR11);
 	VAR12 = malloc(VAR10);
 	if(VAR12 == NULL)
 		FUN7();

	VAR6 = FUN3(VAR1, VAR3->VAR16 + sizeof(VAR15),
		VAR10, VAR12);
	if(VAR6 ==0)
		goto VAR20;

	FUN8(VAR12, VAR9);

	

	VAR7 = FUN9(VAR11);


 	VAR19 = malloc(VAR7);
 	if(VAR19 == NULL)
 		FUN7();

	for(VAR8 = 0; VAR8 < VAR9; VAR8++) {
		int VAR21 = (VAR8 + 1) != VAR9 ? VAR22 :
 					VAR7 & (VAR22 - 1);
 		int VAR23 = FUN10(VAR1, VAR12[VAR8], NULL, VAR21,
 			((unsigned char *) VAR19) +

			(VAR8 * VAR22));


 		FUN2(""
 			"", VAR8, VAR12[VAR8], VAR23);
 		if(VAR23 == 0) {
			FUN11(""
				"", VAR8, VAR12[VAR8],
				VAR23);
			goto VAR24;
		}
	}

	
	VAR13 = VAR18;
	VAR14 = VAR12[0];
	for(VAR8 = 0; VAR13 < VAR14; VAR8++) {
		int VAR23;
		VAR25 = realloc(VAR25, (VAR8 + 1) * VAR22);
		if(VAR25 == NULL)
			FUN7();

		
		FUN12(VAR13, VAR8 * VAR22);

		VAR23 = FUN10(VAR1, VAR13, &VAR13, 0,
			((unsigned char *) VAR25) +
			(VAR8 * VAR22));
		FUN2("", VAR8, VAR23);
		if(VAR23 == 0) {
			FUN11("", VAR8);
			goto VAR26;
		}

		
		if(VAR13 != VAR14 && VAR23 != VAR22) {
			FUN11(""
				"", VAR8, VAR22,
				VAR23);
			goto VAR26;
		}
	}

	
	for(VAR8 = 0; VAR8 < VAR11; VAR8++)
		FUN13(&VAR19[VAR8]);

	free(VAR12);

	return VAR11;

VAR26:
	free(VAR25);
VAR24:
	free(VAR19);
VAR20:
	free(VAR12);

	return 0;
}