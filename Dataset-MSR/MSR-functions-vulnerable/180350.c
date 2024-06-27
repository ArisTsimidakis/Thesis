static void FUN1(
	const char *VAR1,
	size_t VAR2,
	char *VAR3, 
	VAR4 *VAR5,
	int VAR6,
	int VAR7,
	const VAR8 *VAR9,
	enum entity_charset VAR10)
{
	const char *VAR11,
			   *VAR12;
	char	   *VAR13;
	int VAR14 = VAR7 & VAR15;

	VAR12 = VAR1 + VAR2; 
	assert(*VAR12 == '');

	for (VAR11 = VAR1, VAR13 = VAR3; VAR11 < VAR12;) {
		unsigned VAR16, VAR17 = 0;
		const char *VAR18 = NULL; 

		

		
		if (VAR11[0] != '' || (VAR11 + 3 >= VAR12)) {
			*(VAR13++) = *(VAR11++);
			continue;
		}

		

		
		if (VAR11[1] == '') {
			VAR18 = &VAR11[2];
			if (FUN2(&VAR18, &VAR16) == VAR19)
				goto VAR20;

			
			if (!VAR6 && (VAR16 > 63U ||
					VAR21[VAR16].VAR22.VAR23.VAR24 == NULL))
 				goto VAR20;
 
 			
 			if (!FUN3(VAR16, VAR14) ||
					(VAR14 == VAR25 && VAR16 == 0x0D))
				goto VAR20;
		} else {
			const char *VAR26;
			size_t VAR27;

			VAR18 = &VAR11[1];
			VAR26 = VAR18;

			if (FUN4(&VAR18, &VAR26, &VAR27) == VAR19)
				goto VAR20;

			if (FUN5(VAR26, VAR27, VAR9, &VAR16, &VAR17) == VAR19) {
				if (VAR14 == VAR28 && VAR27 == 4 && VAR26[0] == ''
							&& VAR26[1] == '' && VAR26[2] == '' && VAR26[3] == '') {
					
					VAR16 = (unsigned) ''';
				} else {
					goto VAR20;
 				}
 			}
 		}

		


 		assert(*VAR18 == '');

		


 		if (((VAR16 == ''' && !(VAR7 & VAR29)) ||
 				(VAR16 == '' && !(VAR7 & VAR30)))
 				)
			goto VAR20;

		
		if (VAR10 != VAR31) {
			
			if (FUN6(VAR16, VAR10, &VAR16) == VAR19 || VAR17 != 0)
				goto VAR20; 
		}

		VAR13 += FUN7(VAR13, VAR10, VAR16);
		if (VAR17) {
			VAR13 += FUN7(VAR13, VAR10, VAR17);
		}

		
		VAR11 = VAR18 + 1;
		continue;

VAR20:
		for (; VAR11 < VAR18; VAR11++) {
 			*(VAR13++) = *VAR11;
 		}
 	}

	


 	*VAR13 = '';
 	*VAR5 = (VAR4)(VAR13 - VAR3);
 }