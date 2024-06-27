int FUN1(const char *VAR1, char **VAR2, int VAR3, VAR4 *VAR5)
{
	char *VAR6;
	gulong VAR7;

	
	if (!FUN2(*VAR1)) {
		return VAR8;
	}

	VAR9 = 0;
	VAR7 = FUN3(VAR1, &VAR6, VAR3);

	if (VAR9 || VAR6 == VAR1 || VAR7 >= (1U << 31)) {
		return VAR8;
	}

	if (VAR2) {
		*VAR2 = VAR6;
	}

	if (VAR5) {
		*VAR5 = (VAR4) VAR7;
	}

	return VAR10;
}