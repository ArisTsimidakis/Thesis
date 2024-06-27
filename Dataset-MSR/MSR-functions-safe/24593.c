static int FUN1(struct VAR1 *VAR2)
{
	unsigned long VAR3;
	int VAR4;

	FUN2(VAR2->VAR5, VAR2->VAR6);
	FUN3(VAR2);
	if (VAR2->VAR7) {
		struct VAR8 *VAR9 = VAR2->VAR7;

		if (!VAR2->write) {
			VAR4 = VAR9->VAR10->FUN4(VAR2->VAR11, VAR9);
			if (VAR4)
				return VAR4;

			FUN5(!VAR2->VAR12);
			VAR2->VAR13 = VAR9;
			VAR2->VAR14 = VAR9->VAR10->FUN6(VAR2->VAR11, VAR9, 0);
			VAR2->VAR15 = VAR9->VAR15;
			VAR2->VAR9 = VAR2->VAR14 + VAR9->VAR3;
			VAR2->VAR7++;
			VAR2->VAR12--;
		} else {
			struct VAR16 *VAR16;

			if (VAR2->VAR12 == VAR2->VAR11->VAR17)
				return -VAR18;

			VAR16 = FUN7(VAR19);
			if (!VAR16)
				return -VAR20;

			VAR9->VAR16 = VAR16;
			VAR9->VAR3 = 0;
			VAR9->VAR15 = 0;

			VAR2->VAR13 = VAR9;
			VAR2->VAR14 = FUN8(VAR16);
			VAR2->VAR9 = VAR2->VAR14;
			VAR2->VAR15 = VAR21;
			VAR2->VAR7++;
			VAR2->VAR12++;
		}
	} else {
		if (!VAR2->VAR22) {
			FUN5(!VAR2->VAR12);
			VAR2->VAR22 = VAR2->VAR23[0].VAR24;
			VAR2->VAR25 = (unsigned long) VAR2->VAR23[0].VAR26;
			VAR2->VAR23++;
			VAR2->VAR12--;
		}
		VAR4 = FUN9(VAR2->VAR25, 1, VAR2->write, &VAR2->VAR27);
		if (VAR4 < 0)
			return VAR4;
		FUN5(VAR4 != 1);
		VAR3 = VAR2->VAR25 % VAR21;
		VAR2->VAR14 = FUN8(VAR2->VAR27);
		VAR2->VAR9 = VAR2->VAR14 + VAR3;
		VAR2->VAR15 = FUN10(VAR21 - VAR3, VAR2->VAR22);
		VAR2->VAR22 -= VAR2->VAR15;
		VAR2->VAR25 += VAR2->VAR15;
	}

	return FUN11(VAR2->VAR5, VAR2->VAR6);
}