static bool FUN1(VAR1 *VAR2, const char *VAR3)
{
	char VAR4[VAR5 + 1];
 	const char *VAR6;
 	VAR7 *VAR8 = VAR2->VAR9;
 












 	
 	if (!*VAR3 || !*VAR8->VAR3)
 		return false;

	switch (VAR10) {
	case VAR11:
		return strcmp(VAR8->VAR3, VAR3) == 0;
	case VAR12:
		VAR6 = crypt(VAR8->VAR3, (char *)VAR2->VAR13);
		return VAR6 && strcmp(VAR6, VAR3) == 0;
	case VAR14:
		if (strlen(VAR3) != VAR5)
			return false;
		if (!FUN2(VAR8->VAR3))
			FUN3(VAR8->VAR3, VAR8->VAR15, strlen(VAR8->VAR15), VAR8->VAR3);
		FUN3(VAR8->VAR3 + 3, (char *)VAR2->VAR13, 4, VAR4);
		return strcmp(VAR4, VAR3) == 0;
	}
	return false;
}