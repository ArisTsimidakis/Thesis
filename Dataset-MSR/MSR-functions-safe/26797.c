static VAR1 *FUN1(struct VAR2 *VAR3, unsigned long VAR4)
{
	VAR5 *VAR6;
	VAR7 *VAR8;
	VAR1 *VAR9;

	VAR6 = FUN2(VAR3, VAR4);
	if (FUN3(VAR6))
		return NULL;

	VAR8 = FUN4(VAR6, VAR4);
	if (FUN5(VAR8))
		return NULL;

	VAR9 = FUN6(VAR8, VAR4);
	FUN7(VAR3, VAR9);
	if (FUN8(VAR9))
		return NULL;

	return VAR9;
}