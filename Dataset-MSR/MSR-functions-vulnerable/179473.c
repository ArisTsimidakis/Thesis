static int FUN1(const char *VAR1, char *VAR2, int VAR3)
{
	const VAR4 *VAR5 = (const VAR4 *) VAR1;
	const VAR4 *VAR6;
	VAR4 *VAR7 = (VAR4 *) VAR2;
	VAR4 * const VAR8 = VAR7 + VAR3;
	VAR4 *VAR9;
	unsigned VAR10;
	size_t VAR11;
	size_t VAR12[] = {0, 3, 2, 3, 0, 0, 0, 0};
#if VAR13
	size_t VAR14[] = {0, 0, 0, -1, 0, 1, 2, 3};
#endif

	while (1) {

		
		VAR10 = *VAR5++;
		VAR11 = (VAR10 >> VAR15);
		if (VAR11 == VAR16) {
			size_t VAR17;

 			VAR17 = *VAR5++;
 			for (; VAR17 == 255; VAR11 += 255)
 				VAR17 = *VAR5++;




 			VAR11 += VAR17;
 		}
 
		
		VAR9 = VAR7 + VAR11;
		if (FUN2(VAR9 > VAR8 - VAR18)) {
			
			if (VAR9 != VAR8)
				goto VAR19;

			memcpy(VAR7, VAR5, VAR11);
			VAR5 += VAR11;
			break; 
		}
		FUN3(VAR5, VAR7, VAR9);
		VAR5 -= (VAR7 - VAR9);
		VAR7 = VAR9;

		
		FUN4(VAR6, VAR9, VAR5);
		VAR5 += 2;

		
		if (FUN2(VAR6 < (VAR4 *const) VAR2))
			goto VAR19;

		
		VAR11 = VAR10 & VAR20;
		if (VAR11 == VAR20) {
			for (; *VAR5 == 255; VAR11 += 255)
				VAR5++;
			VAR11 += *VAR5++;
		}

		
		if (FUN2((VAR7 - VAR6) < VAR21)) {
#if VAR13
			size_t VAR22 = VAR14[VAR7 - VAR6];
#else
			const int VAR22 = 0;
#endif
			VAR7[0] = VAR6[0];
			VAR7[1] = VAR6[1];
			VAR7[2] = VAR6[2];
			VAR7[3] = VAR6[3];
			VAR7 += 4;
			VAR6 += 4;
			VAR6 -= VAR12[VAR7-VAR6];
			FUN5(VAR6, VAR7);
			VAR7 += VAR21 - 4;
			VAR6 -= VAR22;
		} else {
			FUN6(VAR6, VAR7);
		}
		VAR9 = VAR7 + VAR11 - (VAR21 - 4);
		if (VAR9 > (VAR8 - VAR18)) {

			
			if (VAR9 > VAR8)
				goto VAR19;
			FUN7(VAR6, VAR7, (VAR8 - VAR18));
			while (VAR7 < VAR9)
				*VAR7++ = *VAR6++;
			VAR7 = VAR9;
			
			if (VAR7 == VAR8)
				goto VAR19;
			continue;
		}
		FUN7(VAR6, VAR7, VAR9);
		VAR7 = VAR9; 
	}
	
	return (int) (((char *)VAR5) - VAR1);

	
VAR19:
	return (int) (-(((char *)VAR5) - VAR1));
}