static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
			unsigned long *VAR5)
{
	struct VAR6 *VAR7;
	int VAR8, VAR9 = 0;

	if (!*VAR5) {
		FUN2("", VAR4, *VAR4);
		*VAR5 = (unsigned long)VAR4;
	} else if (!(*VAR5 & 1)) {
		FUN2("", VAR4, *VAR4);
		VAR7 = FUN3(VAR2);
		VAR7->VAR10[0] = (VAR3 *)*VAR5;
		VAR7->VAR10[1] = VAR4;
		*VAR5 = (unsigned long)VAR7 | 1;
		++VAR9;
	} else {
		FUN2("", VAR4, *VAR4);
		VAR7 = (struct VAR6 *)(*VAR5 & ~1ul);
		while (VAR7->VAR10[VAR11-1] && VAR7->VAR12) {
			VAR7 = VAR7->VAR12;
			VAR9 += VAR11;
		}
		if (VAR7->VAR10[VAR11-1]) {
			VAR7->VAR12 = FUN3(VAR2);
			VAR7 = VAR7->VAR12;
		}
		for (VAR8 = 0; VAR7->VAR10[VAR8]; ++VAR8)
			++VAR9;
		VAR7->VAR10[VAR8] = VAR4;
	}
	return VAR9;
}