struct VAR1 *FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR1 *VAR5 = NULL;

	VAR4 = FUN2(VAR2, VAR6);
	if (VAR4 == NULL)
		VAR4 = FUN2(VAR2, VAR7);
	if (VAR4 != NULL)
		VAR5 = FUN3(VAR4);

	return VAR5;
}