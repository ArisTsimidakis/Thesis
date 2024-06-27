FUN1(char *VAR1, int *VAR2, int *VAR3)
{
	if (*VAR1 == '')
		VAR1 = FUN2(VAR1 + 1, VAR2);
	if (*VAR1 == '')
		VAR1 = FUN2(VAR1 + 1, VAR3);
	if (*VAR1 == '')
		VAR1 ++;
	return VAR1;
}