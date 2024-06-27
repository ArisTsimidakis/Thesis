static int FUN1(struct VAR1 *VAR2,
			  struct VAR3 *VAR4)
{
	unsigned long VAR5 = (unsigned long)VAR4;

	if (FUN2(VAR2, VAR5 & VAR6))
		return 1;

	return 0;
}