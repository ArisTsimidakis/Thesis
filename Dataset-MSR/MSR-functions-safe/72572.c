FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	struct VAR4 *VAR5, *VAR6, *VAR7;
	struct VAR8 *VAR9, *VAR10;
	struct VAR8 *VAR11, *VAR12;
	unsigned long VAR13;
	unsigned long VAR14;
	int VAR15;

	VAR14 = 0;

	FUN2(&VAR2->VAR16);
	FUN3(&VAR2->VAR17);
	
	VAR5 = &VAR2->VAR5->VAR18;

	
	if (VAR2->VAR5 == VAR2->VAR19)
		VAR5 = FUN4(VAR5->VAR20);
	VAR6 = VAR5;

	
	VAR12 = FUN5(FUN4(VAR6->VAR20),
				struct VAR8, VAR18);

	for (VAR13 = 0; VAR13 < VAR3; VAR13++) {
		VAR6 = FUN4(VAR6)->VAR20;
		VAR14 |= (unsigned long)VAR6 & VAR21;
	}

	VAR7 = FUN4(VAR6)->VAR20;

	
	VAR5->VAR20 = (struct VAR4 *)((unsigned long)VAR7 |
						VAR14);
	VAR7 = FUN4(VAR7);
	VAR7->VAR22 = VAR5;

	
	VAR2->VAR23 = VAR7;

	
	if (VAR14)
		VAR2->VAR24 = FUN5(VAR7,
						struct VAR8, VAR18);

	
	VAR2->read = 0;

	
	FUN6(&VAR2->VAR17);
	FUN7(&VAR2->VAR16);

	FUN8(VAR2, FUN9(VAR2->VAR23));

	
	VAR11 = FUN5(FUN4(VAR6), struct VAR8,
				VAR18);
	VAR10 = VAR12;

	do {
		VAR9 = VAR10;
		FUN10(VAR2, &VAR10);

		
		VAR15 = FUN11(VAR9);
		if (VAR15) {
			
			FUN12(VAR15, &VAR2->VAR25);
			FUN13(VAR26, &VAR2->VAR27);
		}

		
		FUN14(VAR9);
		VAR13--;

	} while (VAR9 != VAR11);

	FUN8(VAR2, VAR13);

	return VAR13 == 0;
}