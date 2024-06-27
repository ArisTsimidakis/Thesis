static int FUN1(char **VAR1, char *VAR2, size_t VAR3) {
	
	if (VAR3) {
		(*VAR1) = FUN2(VAR3, 1, 1);
		memcpy(*VAR1, VAR2, VAR3);
		(*VAR1)[VAR3] = '';
		return VAR3+1;
	}
	return 0;
}