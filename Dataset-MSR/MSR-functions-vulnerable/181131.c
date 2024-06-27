FUN1(VAR1 *VAR2, const VAR3 *VAR4,
		const unsigned int VAR5, const unsigned int VAR6)
 {
 	register u_int VAR7;
 	register char *VAR8;

	register struct VAR9 *VAR10;


 
 	if (VAR6 == 0)
 		return ("");

	if (VAR5 == VAR11 && VAR6 == VAR12)
		return (FUN2(VAR2, VAR4));

	if (VAR5 == VAR13)
 		return (FUN3(VAR2, VAR4, VAR6));
 
 	VAR10 = FUN4(VAR2, VAR4, VAR6);

	if (VAR10->VAR14)

		return (VAR10->VAR14);




 

	VAR10->VAR14 = VAR8 = (char *)malloc(VAR6*3);

	if (VAR10->VAR14 == NULL)




 		(*VAR2->VAR15)(VAR2, "");
 	*VAR8++ = VAR16[*VAR4 >> 4];
 	*VAR8++ = VAR16[*VAR4++ & 0xf];
	for (VAR7 = VAR6-1; VAR7 > 0 ; --VAR7) {
		*VAR8++ = '';
		*VAR8++ = VAR16[*VAR4 >> 4];
 		*VAR8++ = VAR16[*VAR4++ & 0xf];
 	}
 	*VAR8 = '';

	return (VAR10->VAR14);


 }