PHPAPI char *FUN1(char *VAR1,   int VAR2,
							  char *VAR3, int VAR4,
							  VAR5 *VAR6, int VAR7,
							  int *VAR8, int VAR9, int *replace_count VAR10)
{
	VAR11	*VAR12;			    

	
	if ((VAR12 = FUN2(VAR1, regex_len VAR13)) == NULL) {
		return NULL;
	}

	return FUN3(VAR12, VAR3, VAR4, VAR6, 
		VAR7, VAR8, VAR9, replace_count VAR13);
}