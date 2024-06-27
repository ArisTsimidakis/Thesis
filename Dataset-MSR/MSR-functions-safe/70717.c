FUN1(const char *VAR1, const char *VAR2)
{
	char VAR3, VAR4;
	while (1) {
		VAR3 = FUN2(*VAR1++);
		VAR4 = FUN2(*VAR2++);
		if (VAR3 < VAR4)
			return -1;
		else if (VAR3 > VAR4)
			return 1;
		else if (VAR3 == 0)
			return 0;
	}
}