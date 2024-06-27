int FUN1(void)
{
	if (VAR1.VAR2)
		return 0;

	if (!FUN2())
		return FUN3();

	return -1;
}