FUN1(VAR1 *VAR2, const char *VAR3)
{
	char *VAR4, *VAR5;

	if (VAR2 == NULL) {
		return NULL;
	}
	if (!FUN2(VAR2, "", VAR3)) {
		return NULL;
	}
	if (!FUN3(VAR2) || VAR2->VAR6 != 257) {
		return NULL;
	}
	
	if ((VAR4 = strchr(VAR2->VAR7, '')) == NULL) {
		VAR4 = FUN4(VAR3);
		return VAR4;
	}
	if ((VAR5 = strrchr(++VAR4, '')) == NULL) {
		return NULL;
	}
	*VAR5 = 0;
	VAR4 = FUN4(VAR4);
	*VAR5 = '';

	return VAR4;
}