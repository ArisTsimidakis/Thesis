void FUN1(struct VAR1 *VAR2)
{
	unsigned long VAR3;
	struct VAR4 *VAR5;

	if (VAR2 == NULL)
		return;
	if (VAR2->VAR6 < 0)
		return;

	FUN2(VAR2->VAR6 >= VAR7);
	FUN2(VAR2->VAR6 < VAR8);

	FUN3(&VAR9, VAR3);
	VAR5 = VAR10[VAR2->VAR6];
	VAR10[VAR2->VAR6] = NULL;
	FUN4(&VAR9, VAR3);

	if (VAR2->VAR11) {
		FUN5(VAR12, FUN6(VAR13, VAR2->VAR6));
		VAR2->VAR11 = NULL;
	}
	FUN7(VAR5);
}