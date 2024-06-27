static char *FUN1(const char *VAR1) {
	FUN2 (VAR1, NULL);
	char *VAR2 = malloc (strlen (VAR1) + 1);
	if (!VAR2) {
		return NULL;
	}
	char *VAR3 = VAR2;
	while (*VAR1) {
 		switch (*VAR1) {
 		case '':
 		case '':




 		case '':
 		case '':
 			break;
		default:
			*VAR3++ = *VAR1;
			break;
		}
		VAR1++;
	}
	*VAR3 = 0;
	return VAR2;
}