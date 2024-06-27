FUN1(const char *VAR1, const char **VAR2)
{
	size_t VAR3 = strlen(VAR1);
	size_t VAR4 = 0;

	if(VAR3 > 4 && FUN2(VAR1, "", 4) == 0) {
		
		*VAR2 = getenv(VAR1 + 4);
		VAR4 = *VAR2 ? strlen(*VAR2) : 0;
	} else {
		
		*VAR2 = VAR1;
		VAR4 = VAR3;
	}
	return VAR4;
}