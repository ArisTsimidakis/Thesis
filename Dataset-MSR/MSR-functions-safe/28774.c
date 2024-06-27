bool FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
		struct VAR4 *VAR5, int *VAR6, unsigned long *VAR7)
{
	struct VAR8 *VAR9;
	unsigned long VAR10 = 1;
	struct VAR2 **VAR11;
	int VAR12;
	bool VAR13 = false;

	*VAR6 = -1;

	if (VAR5->VAR14 == VAR15) {
		*VAR6 = FUN2(VAR3->VAR16, VAR5, VAR7);
		return true;
	}

	if (VAR5->VAR14)
		return false;

	FUN3();
	VAR9 = FUN4(VAR1->VAR17.VAR18);

	if (!VAR9)
		goto VAR19;

	if (VAR5->VAR20 == 0) { 
		if (VAR5->VAR21 == VAR22 ||
				VAR5->VAR23 == 0xff)
			goto VAR19;
		VAR11 = &VAR9->VAR24[VAR5->VAR23 & 0xff];
	} else {
		u32 VAR25 = VAR5->VAR23 << (32 - VAR9->VAR26);

		VAR11 = VAR9->VAR27[FUN5(VAR9, VAR25)];

		VAR10 = FUN6(VAR9, VAR25);

		if (VAR5->VAR21 == VAR22) {
			int VAR28 = -1;
			FUN7(VAR12, &VAR10, 16) {
				if (!VAR11[VAR12])
					continue;
				if (VAR28 < 0)
					VAR28 = VAR12;
				else if (FUN8(VAR11[VAR12]->VAR16, VAR11[VAR28]->VAR16) < 0)
					VAR28 = VAR12;
			}

			VAR10 = (VAR28 >= 0) ? 1 << VAR28 : 0;
		}
	}

	FUN7(VAR12, &VAR10, 16) {
		if (!VAR11[VAR12])
			continue;
		if (*VAR6 < 0)
			*VAR6 = 0;
		*VAR6 += FUN2(VAR11[VAR12]->VAR16, VAR5, VAR7);
	}

	VAR13 = true;
VAR19:
	FUN9();
	return VAR13;
}