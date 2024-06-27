FUN1(char **VAR1, int VAR2)
{
	if (VAR2 < 0)
		VAR2 = 0;
	if (VAR2 > 9)
		FUN1(VAR1, VAR2 / 10);
	*(*VAR1)++ = ""[VAR2 % 10];
}