static struct VAR1 *FUN1(struct VAR2 *VAR3, int VAR4)
{
	struct VAR1 *VAR5;

	if (VAR3->VAR6)
		return VAR3->VAR6;

	VAR5 = FUN2(VAR3);
	if (FUN3(VAR5))
		return NULL;

	VAR3->VAR6 = FUN4("", VAR5);

	FUN5(!VAR3->VAR6,
		  "", VAR4);

	return VAR3->VAR6;
}