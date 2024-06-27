FUN1(struct VAR1 *VAR2, unsigned int VAR3,
		  struct VAR4 *VAR5)
{
	struct VAR6 *VAR7;
	unsigned int VAR8 = FUN2();

	VAR7 = FUN3(VAR2, VAR3, VAR8, VAR5);
	if (!VAR7)
		goto VAR9;
	return VAR7;
VAR9:
	FUN4();
	return NULL;
}