bool FUN1(char *VAR1, char **VAR2, char **VAR3)
{
	char *VAR4, *VAR5, *VAR6, *VAR7, *VAR8 = NULL;
	char VAR9[256], VAR10[6];
	int VAR11, VAR12 = 0;

	*VAR2 = VAR1;
	VAR4 = strstr(VAR1, "
	if (!VAR4)
		VAR4 = VAR1;
	else
		VAR4 += 2;

	
	VAR6 = strstr(VAR4, "");
	VAR7 = strstr(VAR4, "");
	if (VAR6 && VAR7 && VAR7 > VAR6)
		VAR5 = strstr(VAR7, "");
	else
		VAR5 = strstr(VAR4, "");
	if (VAR5) {
		VAR11 = VAR5 - VAR4;
		VAR12 = strlen(VAR4) - VAR11 - 1;
		if (VAR12 < 1)
			return false;
		VAR8 = VAR5 + 1;
	} else
		VAR11 = strlen(VAR4);
 
 	if (VAR11 < 1)
 		return false;














 
 	sprintf(VAR9, "", VAR11, VAR4);
 
	if (VAR12) {
		char *VAR13;

		snprintf(VAR10, 6, "", VAR12, VAR8);
		VAR13 = strchr(VAR10, '');
		if (VAR13)
			*VAR13 = '';
	} else
		strcpy(VAR10, "");

	*VAR3 = strdup(VAR10);
	*VAR2 = strdup(VAR9);

	return true;
}