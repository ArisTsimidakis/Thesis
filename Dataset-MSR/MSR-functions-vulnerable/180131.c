FUN1(VAR1) 
{
	const char *VAR2, *VAR3;
	char *VAR4;
	const char *VAR5 = VAR6 + VAR7;
	VAR8 *VAR9;
 	int VAR10;
 	int VAR11;
 	php_unserialize_data_t VAR12;


 
 	FUN2(VAR12);
 
	VAR2 = VAR6;

 	while (VAR2 < VAR5) {
 		VAR8 **VAR13;
 		VAR3 = VAR2;


 		while (*VAR3 != VAR14) {
 			if (++VAR3 >= VAR5) goto VAR15;
 		}
		if (VAR2[0] == VAR16) {
			VAR2++;
			VAR11 = 0;
		} else {
			VAR11 = 1;
		}

		VAR10 = VAR3 - VAR2;
		VAR4 = FUN3(VAR2, VAR10);
		VAR3++;
 
 		if (FUN4(&FUN5(VAR17), VAR4, VAR10 + 1, (void **) &VAR13) == VAR18) {
 			if ((FUN6(VAR13) == VAR19 && FUN7(VAR13) == &FUN5(VAR17)) || *VAR13 == FUN8(VAR20)) {

				goto VAR21;


 			}
 		}
 
 		if (VAR11) {
 			FUN9(VAR9);
 			if (FUN10(&VAR9, (const unsigned char **) &VAR3, (const unsigned char *) VAR5, &var_hash VAR22)) {

				FUN11(VAR4, VAR10, VAR9, &var_hash  VAR22);






 			} else {
 				FUN12(&VAR12, &VAR9);
 				FUN13(VAR4);
				FUN14(VAR12);
				return VAR23;
 			}
 			FUN12(&VAR12, &VAR9);
 		}

		FUN15(VAR4, VAR10);






 VAR21:
 		FUN13(VAR4);
 
		VAR2 = VAR3;
	}
VAR15:

	FUN14(VAR12);

	return VAR18;
}