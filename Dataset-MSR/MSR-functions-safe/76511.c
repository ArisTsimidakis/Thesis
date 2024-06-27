static int FUN1(struct VAR1 *VAR2, u64 VAR3 *VAR4)
{
	if (FUN2(VAR5, VAR4))
		return -VAR6;
	VAR4++;
	if (FUN2(VAR7, VAR4))
		return -VAR6;
	VAR4++;
	if (FUN2(VAR8, VAR4))
		return -VAR6;

	return 0;
}