int FUN1(unsigned char *VAR1, unsigned char *VAR2,
                  unsigned char *VAR3, char *VAR4, int VAR5,

                 int *VAR6)


 {
        int VAR7 = 0, VAR8 = 0;
        int VAR9;
	unsigned char *VAR10 = VAR3;
	char *VAR11 = VAR4;

	while (1) {
		
		if ((*VAR10 & 0xc0) == 0xc0) {
			
                        if ((VAR1 + VAR10[1]) > VAR10)
                                goto VAR12;
 






                        VAR8 = FUN1(VAR1, VAR2, VAR1 + VAR10[1],

                                         VAR11, VAR5 - VAR7, VAR6);


                        if (VAR8 == 0)
                                goto VAR12;
 
		}

		VAR9 = *VAR10;
		if (VAR9 == 0)
			goto VAR13;

		
		if ((VAR10 + VAR9 >= VAR2) || (VAR7 + VAR9 >= VAR5))
			goto VAR12;

		
		VAR9++;

		memcpy(VAR11, VAR10, VAR9);

		VAR11     += VAR9;
		VAR7 += VAR9;
		VAR10   += VAR9;
	}

  VAR13:
	
	VAR10  = VAR3;
	*VAR6 = 0;
	while (VAR10 < VAR2) {
		if ((VAR10[0] & 0xc0) == 0xc0) {
			*VAR6 += 2;
			break;
		}
		else if (*VAR10 == 0) {
			*VAR6 += 1;
			break;
		}
		*VAR6 += 1;
		++VAR10;
	}
	return VAR7;

  VAR12:
	return 0;
}