static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5,
		     enum dma_data_direction VAR6, struct VAR7 *VAR8,
		     bool VAR9)
{
	struct VAR3 *VAR10 = VAR4, *VAR11 = VAR4, *VAR12 = VAR4;
	int VAR13, VAR14 = 0;
	unsigned int VAR15 = VAR10->VAR15;
	unsigned int VAR16 = VAR10->VAR15 + VAR10->VAR17;
	unsigned int VAR18 = FUN2(VAR2);

	for (VAR13 = 1; VAR13 < VAR5; VAR13++) {
		VAR10 = FUN3(VAR10);

		VAR10->VAR19 = VAR20;
		VAR10->VAR21 = 0;

		if (VAR10->VAR15 || (VAR16 & ~VAR22) || VAR16 + VAR10->VAR17 > VAR18) {
			if (FUN4(VAR2, VAR12, VAR16, &VAR11->VAR19,
			    VAR6, VAR8, VAR9) < 0)
				goto VAR23;

			VAR11->VAR19 += VAR15;
			VAR11->VAR21 = VAR16 - VAR15;

			VAR16 = VAR15 = VAR10->VAR15;
			VAR12 = VAR10;
			VAR11 = FUN3(VAR11);
			VAR14 += 1;
		}
		VAR16 += VAR10->VAR17;
	}
	if (FUN4(VAR2, VAR12, VAR16, &VAR11->VAR19, VAR6, VAR8,
		VAR9) < 0)
		goto VAR23;

	VAR11->VAR19 += VAR15;
	VAR11->VAR21 = VAR16 - VAR15;

	return VAR14+1;

VAR23:
	FUN5(VAR4, VAR10, VAR14, VAR13)
		FUN6(VAR2, FUN7(VAR10), FUN8(VAR10));
	return 0;
}