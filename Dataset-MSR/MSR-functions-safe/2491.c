struct VAR1 *FUN1(VAR2 *VAR3,
						struct VAR1 *VAR4)
{
	struct VAR1 *VAR5;

	VAR5 = FUN2(VAR3, struct VAR1);
	if (VAR5 == NULL) {
		return NULL;
	}
	VAR5->VAR6 = FUN2(VAR5, struct VAR7);
	if (VAR5->VAR6 == NULL) {
		FUN3(VAR5);
		return NULL;
	}

	VAR5->VAR8 = VAR4->VAR8;
	*VAR5->VAR6 = *VAR4->VAR6;
	VAR5->VAR9 = VAR4->VAR9;
	VAR5->VAR10 = VAR4->VAR10;

	FUN4(VAR4->VAR8->VAR11, VAR5, struct VAR1 *);
	FUN5(VAR5, VAR12);

	return VAR5;
}