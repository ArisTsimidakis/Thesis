static int FUN1(unsigned long VAR1 *VAR2, unsigned long *VAR3)
{
	if ((unsigned long)VAR2 > VAR4 - sizeof(unsigned long) ||
	    ((unsigned long)VAR2 & 7))
		return -VAR5;

	FUN2();
	if (!FUN3(*VAR3, VAR2)) {
		FUN4();
		return 0;
	}
	FUN4();

	return FUN5(VAR2, VAR3, 8);
}