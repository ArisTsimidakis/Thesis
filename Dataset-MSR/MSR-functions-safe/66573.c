static VAR1 FUN1(struct VAR2 *VAR2, struct VAR3 *VAR4,
			      int VAR5, size_t VAR6,
			      void *VAR7, bool VAR8)
{
	struct VAR9 *VAR10;
	int VAR11;
	unsigned long VAR12;
	unsigned int VAR13;

	VAR10 = VAR2->VAR10;

	FUN2(&VAR2->VAR14, VAR12);

	FUN3(VAR2);

	VAR11 = FUN4(VAR10, VAR4, VAR5, VAR7, VAR15);

	
	FUN5(VAR10);

	if (VAR11) {
		VAR6 = 0;
		goto VAR16;
	}

	if (VAR10->VAR17 == 0)
		VAR2->VAR18 = true;

	if (VAR8)
		goto VAR16;

	
	while (!FUN6(VAR10, &VAR13)
		&& !FUN7(VAR10))
		FUN8();
VAR16:
	FUN9(&VAR2->VAR14, VAR12);

	VAR2->VAR19.VAR20 += VAR6;
	
	return VAR6;
}