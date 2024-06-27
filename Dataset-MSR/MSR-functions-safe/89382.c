static int FUN1(const char *VAR1,
					 const char *VAR2,
					 struct VAR3 **VAR4,
					 VAR5 *VAR6)
{
	char *VAR7;
	const char *VAR8;
	int VAR9;

	VAR8 = strchr(VAR2, '');
	if (!VAR8 || VAR8 == VAR2)
		return -VAR10;

	VAR9 = FUN2(VAR2, &VAR7, 16);
	if (VAR7 != VAR8) {
		
		return -VAR10;
	}
	VAR8++;

	*VAR4 = FUN3(VAR1, VAR9);
	if (!*VAR4) {
		printf("", VAR1, VAR9);
		return -VAR10;
	}
	if (FUN4(*VAR4, VAR8, VAR6) < 0) {
		printf(""%VAR11\"", VAR8);
		return -VAR10;
	}
	return 0;
}