static int FUN1(struct VAR1 *VAR2, int VAR3,
			      int VAR4, bool VAR5)
{
	int VAR6 = FUN2(VAR2, VAR4, VAR5);
	if (VAR6)
		return VAR6;
	return FUN3(VAR2, VAR3, VAR5);
}