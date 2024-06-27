static int FUN1(char *VAR1)
{
	int VAR2 = 0;

	for (;;) {
		int VAR3 = FUN2();
		if (VAR4)
			return -1;
		if (VAR3 == '')
			return VAR2;
		if (FUN3(VAR3))
			return FUN4(VAR1, VAR2, VAR3);
		if (!FUN5(VAR3) && VAR3 != '')
			return -1;
		if (VAR2 > VAR5 / 2)
			return -1;
		VAR1[VAR2++] = FUN6(VAR3);
	}
}