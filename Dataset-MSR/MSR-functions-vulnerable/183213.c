static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, zend_bool VAR6)
 {

	char *VAR7, *VAR8, *VAR9;


 	size_t VAR10, VAR11;
 	size_t VAR12;
 
 	if (VAR5->VAR13 >= VAR5->VAR14) {
 		return 0;
 	}
 

	VAR8 = memchr(VAR5->VAR13, '', VAR5->VAR14 - VAR5->VAR13);




 	if (!VAR8) {
 		if (!VAR6) {


 			return 0;
 		} else {
 			VAR8 = VAR5->VAR14;
		}
	}

	VAR7 = memchr(VAR5->VAR13, '', VAR8 - VAR5->VAR13);
	if (VAR7) {
		*VAR7 = '';
		
		VAR10 = VAR7 - VAR5->VAR13;
		VAR11 = VAR8 - ++VAR7;
	} else {
		VAR7 = "";
		
		VAR10 = VAR8 - VAR5->VAR13;
		VAR11 = 0;
	}

	FUN2(VAR5->VAR13, VAR10);

	VAR9 = FUN3(VAR7, VAR11);
	if (VAR11) {
		VAR11 = FUN2(VAR9, VAR11);
	}

	if (VAR15.FUN4(VAR16, VAR5->VAR13, &VAR9, VAR11, &VAR12)) {
		FUN5(VAR5->VAR13, VAR9, VAR12, VAR3);
	}
 	FUN6(VAR9);
 
 	VAR5->VAR13 = VAR8 + (VAR8 != VAR5->VAR14);


 	return 1;
 }