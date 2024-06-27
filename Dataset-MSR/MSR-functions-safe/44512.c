static char **FUN1(const char *VAR1,
					    char **VAR2)
{
	char *VAR3, *VAR4, *VAR5 = NULL;
	char **VAR6 = NULL;
	size_t VAR7 = 0;
	size_t VAR8 = 0;
	int VAR9;
	int VAR10;

	VAR4 = alloca(strlen(VAR1)+1);
	strcpy(VAR4, VAR1);
	for (; (VAR3 = FUN2(VAR4, "", &VAR5)); VAR4 = NULL) {
		
		if (!FUN3(VAR3, "", 5) || FUN4(VAR3, (const char **)VAR2)) {
			VAR10 = FUN5((void ***)&VAR6, &VAR7, VAR8 + 1, 12);
			if (VAR10 < 0)
				goto VAR11;
			VAR6[VAR8 + 1] = NULL;
			VAR6[VAR8] = strdup(VAR3);
			if (!VAR6[VAR8])
				goto VAR11;
			VAR8++;
		}
	}

	return VAR6;

VAR11:
	VAR9 = VAR12;
	FUN6((void**)VAR6, free);
	VAR12 = VAR9;
	return NULL;
}