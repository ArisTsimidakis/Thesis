static int FUN1(const unsigned char *VAR1, size_t VAR2,
				       VAR3 *VAR4, VAR3 *VAR5,
				       const char **VAR6)
{
	unsigned char VAR7, VAR8;
	size_t VAR9 = *VAR4, VAR10, VAR11;
	int VAR12 = 1;

VAR13:
	if (FUN2(VAR2 - VAR9 < 2)) {
		if (VAR2 == VAR9)
			goto VAR14;
		goto VAR15;
	}
 
 	
 	VAR7 = VAR1[VAR9++];

	if (VAR7 == 0) {


 		
 		if (VAR1[VAR9++] != 0)
 			goto VAR16;
		if (--VAR12 <= 0) {
			*VAR5 = VAR9 - *VAR4;
			*VAR4 = VAR9;
			return 0;
		}
		goto VAR13;
	}

	if (FUN2((VAR7 & 0x1f) == VAR17)) {
		do {
			if (FUN2(VAR2 - VAR9 < 2))
				goto VAR15;
			VAR8 = VAR1[VAR9++];
		} while (VAR8 & 0x80);
	}
 
 	
 	VAR10 = VAR1[VAR9++];

	if (VAR10 <= 0x7f) {

		VAR9 += VAR10;

		goto VAR13;

	}




 
 	if (FUN2(VAR10 == VAR18)) {
 		
		if (FUN2((VAR7 & VAR19) == VAR20 << 5))
			goto VAR21;
		VAR12++;
		goto VAR13;
 	}
 
 	VAR11 = VAR10 - 0x80;

	if (FUN2(VAR11 > sizeof(VAR3) - 1))


 		goto VAR22;
 	if (FUN2(VAR11 > VAR2 - VAR9))
 		goto VAR15;

	for (VAR10 = 0; VAR11 > 0; VAR11--) {




 		VAR10 <<= 8;
 		VAR10 |= VAR1[VAR9++];
 	}






 	VAR9 += VAR10;
 	goto VAR13;
 
VAR22:
	*VAR6 = "";
	goto VAR23;
VAR21:
	*VAR6 = "";
	goto VAR23;
VAR16:
	*VAR6 = "";
	goto VAR23;
VAR15:
	*VAR6 = "";
	goto VAR23;
VAR14:
	*VAR6 = "";
VAR23:
	*VAR4 = VAR9;
	return -1;
}