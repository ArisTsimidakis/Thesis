static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	int VAR5;

	while ((VAR5 = FUN2(VAR4)) != VAR6) {
		if (fputc(VAR5, VAR2) == VAR6) {
			return -1;
		}
	}
	if (FUN3(VAR4)) {
		return -1;
	}
	return 0;
}