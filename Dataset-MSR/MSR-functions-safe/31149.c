static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
	int VAR4 = *(VAR5 *)VAR3;
	struct VAR6 *VAR7 = VAR8[VAR4];

	if (VAR7)
		FUN2(VAR2, "", VAR7->VAR9, VAR7->VAR10.VAR11);
	return 0;
}