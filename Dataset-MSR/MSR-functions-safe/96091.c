static int FUN1(const char *VAR1, const struct VAR2 *VAR3, int VAR4, struct VAR5 *VAR6) {
	(void) VAR3;
	(void) VAR4;
	(void) VAR6;
	
	int VAR7 = remove(VAR1);
	if (VAR7)
		FUN2(VAR1);

	return VAR7;
}