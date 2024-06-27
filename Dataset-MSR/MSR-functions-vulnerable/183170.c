FUN1(struct VAR1 *VAR2, int VAR3, struct VAR4 *VAR5,
    const struct VAR6 *VAR7, int VAR8, int VAR9, int VAR10)
{
	char *VAR11, *VAR12;

	FUN2(VAR7, VAR13);
	FUN2(VAR5, VAR14);

	
	FUN3(VAR7->VAR15);

	
	for (VAR11 = VAR7->VAR15.VAR16 ; FUN4(*VAR11); VAR11++)
		continue;

	
	VAR12 = VAR11;
	for (; !FUN5(*VAR11); VAR11++) {
		if (FUN6(*VAR11))
			return (400);
	}
	VAR5->VAR17[VAR8].VAR16 = VAR12;
	VAR5->VAR17[VAR8].VAR18 = VAR11;

	
	for (; FUN5(*VAR11); VAR11++) {
		if (FUN6(*VAR11))
			return (400);
	}

	
	VAR12 = VAR11;
	for (; !FUN4(*VAR11); VAR11++) {
		if (FUN6(*VAR11))
			return (400);
	}
	VAR5->VAR17[VAR9].VAR16 = VAR12;
	VAR5->VAR17[VAR9].VAR18 = VAR11;

	if (!FUN7(VAR5->VAR17[VAR9]))
		return (400);

	
	for (; FUN5(*VAR11); VAR11++) {
		if (FUN6(*VAR11))
			return (400);
	}
 
 	
 	VAR12 = VAR11;

	if (!FUN8(*VAR11)) {

		for (; !FUN8(*VAR11); VAR11++)




 			if (!FUN9(*VAR11) && FUN6(*VAR11))
 				return (400);
 	}
	VAR5->VAR17[VAR10].VAR16 = VAR12;
	VAR5->VAR17[VAR10].VAR18 = VAR11;

	
	VAR11 += FUN10(VAR11);

	*VAR5->VAR17[VAR8].VAR18 = '';
	FUN11(VAR2, VAR3, VAR5, VAR8);

	*VAR5->VAR17[VAR9].VAR18 = '';
	FUN11(VAR2, VAR3, VAR5, VAR9);

	if (VAR5->VAR17[VAR10].VAR18 != NULL) {
		*VAR5->VAR17[VAR10].VAR18 = '';
		FUN11(VAR2, VAR3, VAR5, VAR10);
	}

	return (FUN12(VAR2, VAR5, VAR3, VAR11, VAR7));
}