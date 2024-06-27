static int VAR1 FUN1(void)
{
	int VAR2;

	VAR2 = FUN2(&VAR3);
	if (VAR2 < 0)
		goto VAR4;

	VAR2 = FUN3(&VAR5);
	if (VAR2)
		goto VAR4;

	return 0;

VAR4:
	FUN4("", VAR2);
}