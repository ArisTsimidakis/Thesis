FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5,
    struct VAR6 *VAR7)
{
	int VAR8;
	ssize_t VAR9;
	size_t VAR10;
	const wchar_t *VAR11;
	const wchar_t *VAR12;
	wchar_t VAR13;
	struct VAR14 *VAR15;
	int VAR16, VAR17, VAR18;
	wchar_t *VAR19, *VAR20;

	VAR18 = FUN2(VAR2, VAR5);

	
	if (VAR18 == 0)
		return (NULL);

	if (VAR18 == VAR21)
		VAR5 |= VAR22;

	VAR9 = FUN3(VAR2, VAR18, VAR5, 1, VAR7, NULL);

	if (VAR9 == 0)
		return (NULL);

	if (VAR5 & VAR23)
		VAR13 = VAR24'';
	else
		VAR13 = VAR24'';

	
	VAR19 = VAR20 = (wchar_t *)malloc(VAR9 * sizeof(wchar_t));
	if (VAR19 == NULL) {
		if (VAR25 == VAR26)
			FUN4(1, "");
		return (NULL);
	}
	VAR8 = 0;

	if ((VAR18 & VAR27) != 0) {
		FUN5(&VAR19, NULL, VAR27,
		    VAR28, VAR5, NULL,
		    VAR2->VAR29 & 0700, -1);
		*VAR19++ = VAR13;
		FUN5(&VAR19, NULL, VAR27,
		    VAR30, VAR5, NULL,
		    VAR2->VAR29 & 0070, -1);
		*VAR19++ = VAR13;
		FUN5(&VAR19, NULL, VAR27,
		    VAR31, VAR5, NULL,
		    VAR2->VAR29 & 0007, -1);
		VAR8 += 3;
	}

	for (VAR15 = VAR2->VAR32; VAR15 != NULL; VAR15 = VAR15->VAR33) {
		if ((VAR15->VAR34 & VAR18) == 0)
			continue;
		
		if ((VAR15->VAR34 == VAR27)
		    && (VAR15->VAR35 == VAR28
		    || VAR15->VAR35 == VAR30
		    || VAR15->VAR35 == VAR31))
			continue;
		if (VAR15->VAR34 == VAR36 &&
		    (VAR5 & VAR22) != 0)
			VAR12 = VAR24"";
		else
			VAR12 = NULL;
		VAR17 = FUN6(VAR7, &VAR15->VAR37, &VAR11);
		if (VAR17 == 0) {
			if (VAR8 > 0)
				*VAR19++ = VAR13;
			if (VAR5 & VAR38)
				VAR16 = VAR15->VAR16;
			else
				VAR16 = -1;
			FUN5(&VAR19, VAR12, VAR15->VAR34, VAR15->VAR35, VAR5,
			    VAR11, VAR15->VAR39, VAR16);
			VAR8++;
		} else if (VAR17 < 0 && VAR25 == VAR26) {
			free(VAR20);
			return (NULL);
		}
	}

	
	*VAR19++ = VAR24'';

	VAR10 = wcslen(VAR20);

	if ((VAR3)VAR10 > (VAR9 - 1))
		FUN4(1, "");

	if (VAR4 != NULL)
		*VAR4 = VAR10;

	return (VAR20);
}