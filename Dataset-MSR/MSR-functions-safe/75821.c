FUN1(VAR1 *VAR2, const char *VAR3)
{
	unsigned VAR4;

	if (!VAR2)
		return 0;

	if (FUN2(VAR2) < 2) {
		FUN3(VAR5, "", VAR3);
		return 0;
	}

	if (!FUN4(VAR2, 1, &VAR4, 0, VAR6, false)) {
		FUN3(VAR5, "", VAR3, FUN5(VAR2, 1));
		return 0;
	}

	return VAR4;
}