static void *FUN1(struct VAR1 *VAR2, void *VAR3, VAR4 *VAR5)
{
	struct VAR6 *VAR7;

	(*VAR5)++;
	VAR7 = FUN2(VAR2->private);
	if (VAR7)
		return FUN3(VAR7);

	return NULL;
}