static int VAR1 FUN1(void)
{
	int VAR2;
	unsigned long VAR3;
	unsigned int VAR4;
	int VAR5 = FUN2(&VAR6, 0);

	if (VAR5 != 0)
		goto VAR7;

	FUN3(sizeof(struct VAR8) > FUN4(struct VAR9, VAR10));

	VAR11 = FUN5(VAR12, sizeof(*VAR11), VAR13);
	if (!VAR11)
		goto VAR14;

	if (VAR15 >= (128 * 1024))
		VAR3 = VAR15 >> (21 - VAR16);
	else
		VAR3 = VAR15 >> (23 - VAR16);

	VAR4 = FUN6(VAR3) - 1 + VAR16;
	VAR3 = (1UL << VAR4) / sizeof(struct VAR17);
	VAR4 = FUN6(FUN7(VAR3, (unsigned long)VAR18)) - 1;

	for (VAR2 = 0; VAR2 < VAR12; VAR2++) {
		struct VAR19 *VAR20 = &VAR11[VAR2].VAR20;

		VAR20->VAR21 = FUN8(1 * sizeof(*VAR20->VAR21));
		if (!VAR20->VAR21) {
			while (VAR2-- > 0)
				FUN9(VAR11[VAR2].VAR20.VAR21,
						 1 * sizeof(*VAR20->VAR21));
			FUN10(VAR11);
			goto VAR14;
		}
		VAR20->VAR22 = VAR4;
		VAR20->VAR23 = 0;
		VAR20->VAR24 = 0;
		VAR20->VAR25 = VAR26;

		VAR11[VAR2].VAR27 = VAR28;
	}

	FUN11(&VAR29);

	FUN12();

	FUN13(&VAR30);
	FUN14(&VAR31);
	
	FUN15();
VAR7:
	return VAR5;
VAR14:
	FUN16("");
}