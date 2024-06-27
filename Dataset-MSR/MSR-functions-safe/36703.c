FUN1(gss_OID_const VAR1,
		    unsigned int *VAR2,
		    unsigned char **VAR3,
		    int VAR4,
		    unsigned int VAR5)
{
	unsigned char *VAR6 = *VAR3;
	int VAR7;
	gss_OID_desc VAR8;
	int VAR9 = 0;
	unsigned int VAR10;

	if (VAR5-- < 1)
		return (VAR11);

	if (*VAR6++ != VAR12)
		return (VAR11);

	if ((VAR7 = FUN2(&VAR6, VAR5, &VAR10)) < 0)
		return (VAR11);

	if ((VAR7 + VAR10) != VAR5)
		return (VAR11);

	if (VAR5-- < 1)
		return (VAR11);


	if (*VAR6++ != VAR13)
		return (VAR11);

	if (VAR5-- < 1)
		return (VAR11);

	VAR8.VAR14 = *VAR6++;

	if (VAR5 < VAR8.VAR14)
		return (VAR11);
	else
		VAR5 -= VAR8.VAR14;

	VAR8.VAR15 = VAR6;
	VAR6 += VAR8.VAR14;

	if (!FUN3(&VAR8, VAR1))
		VAR9 = VAR16;

	
	if (VAR5 < 2)
		return (VAR11);
	else
		VAR5 -= 2;

	if (!VAR9) {
		*VAR3 = VAR6;
		*VAR2 = VAR5;
	}

	return (VAR9);
}