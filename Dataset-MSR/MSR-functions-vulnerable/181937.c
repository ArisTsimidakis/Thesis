FUN1(struct VAR1 *VAR2,
     const char **VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7)
{
	ssize_t VAR8;
	int VAR9;
	
	VAR9 = 0;
	if (*VAR5 == 0) {
		*VAR7 = 0;
		VAR8 = 0;
	} else
		VAR8 = FUN2(*VAR3, *VAR5, VAR7);
	
	while (*VAR7 == 0 && VAR8 == *VAR5 && !VAR9) {
		ssize_t VAR10 = *VAR6 - *VAR5;
		size_t VAR11 = (*VAR6+1023) & ~1023U;
		ssize_t VAR12;

		
		if (VAR11 < (VAR13)*VAR6 + 160)
			VAR11 <<= 1;

		*VAR3 = FUN3(VAR2, VAR11, VAR5);
		if (*VAR3 == NULL) {
			if (*VAR6 >= *VAR5)
				return (0);
			
			*VAR3 = FUN3(VAR2, *VAR5, VAR5);
			VAR9 = 1;
		}
		*VAR6 = *VAR5;
 		*VAR3 += VAR10;
 		*VAR5 -= VAR10;
 		VAR12 = VAR8;

		VAR8 = FUN2(*VAR3, *VAR5, VAR7);


 		if (VAR8 >= 0)
 			VAR8 += VAR12;
 	}
	return (VAR8);
}