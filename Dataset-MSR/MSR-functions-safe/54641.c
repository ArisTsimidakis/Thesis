static struct VAR1 *FUN1(int VAR2, int VAR3)
{
	struct VAR1 *VAR4;

	VAR4 = FUN2(sizeof(*VAR4), VAR5);
	if (!VAR4)
		return NULL;

	FUN3(&VAR4->VAR6);
	FUN3(&VAR4->VAR7);
	FUN4(&VAR4->VAR8);
	FUN5(&VAR4->VAR9);
	VAR4->VAR10 = -1;

	VAR4->VAR11 = FUN6();
	VAR4->VAR12 = FUN6();
	VAR4->VAR13 = FUN7();
	if (VAR4->VAR11 == NULL || VAR4->VAR12 == NULL || VAR4->VAR13 == NULL) {
		FUN8(&VAR4->VAR11);
		FUN8(&VAR4->VAR12);
		FUN9(&VAR4->VAR13);
		FUN10(VAR4);
		return NULL;
	}

	VAR4->VAR2 = VAR2;
	VAR4->VAR3 = VAR3;
	VAR4->VAR14 = 0;

	return VAR4;
}