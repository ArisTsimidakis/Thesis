void FUN1(VAR1 *VAR2, const char *VAR3)
{
	int VAR4 = strlen(VAR3);
	FUN2(1);
	if (VAR4 <= FUN3(VAR5, VAR6)) {
		char *VAR7 = VAR8[VAR9].VAR10.VAR11;
		while (VAR4--) *VAR7++ = *VAR3++;
		*VAR7 = 0;
		VAR8[VAR9].VAR6 = VAR12;
	} else {
		VAR8[VAR9].VAR6 = VAR13;
		VAR8[VAR9].VAR10.VAR14 = FUN4(VAR2, VAR3, VAR4);
	}
	++VAR9;
}