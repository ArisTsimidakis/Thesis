static int FUN1(struct VAR1 *VAR2)
{
	u8 VAR3 = 0;
	VAR4 *VAR5, *VAR6, *VAR7;
	__be32 VAR8 = FUN2(1);
	struct VAR9 *VAR10 = FUN3(VAR2);
	struct VAR11 *VAR12 = FUN4(VAR10);
	u32 VAR13 = VAR12->VAR14.VAR15;
	void *VAR16 = &(VAR12->VAR14);
	unsigned long VAR17 = FUN5(VAR10);
	u8 VAR18[16+VAR19];
	VAR4* VAR20 = (VAR4 *) FUN6((VAR4 *)VAR18, VAR19);
	struct scatter_walk VAR21;
	struct scatter_walk VAR22;
	struct scatter_walk VAR23;
	unsigned int VAR24;

	
	
	
	if (FUN7(VAR2->VAR25 != 8 && VAR2->VAR25 != 12))
		return -VAR26;
	if (FUN7(VAR17 != 8 && VAR17 != 12 && VAR17 != 16))
	        return -VAR26;
	if (FUN7(VAR13 != VAR27 &&
	             VAR13 != VAR28 &&
	             VAR13 != VAR29))
	        return -VAR26;

	
	for (VAR24 = 0; VAR24 < 4; VAR24++)
		*(VAR20+VAR24) = VAR12->VAR30[VAR24];
	for (VAR24 = 0; VAR24 < 8; VAR24++)
		*(VAR20+4+VAR24) = VAR2->VAR20[VAR24];
	*((VAR31 *)(VAR20+12)) = VAR8;

	if ((FUN8(VAR2->VAR5)) && (FUN8(VAR2->VAR7))) {
		VAR3 = 1;
		FUN9(&VAR21, VAR2->VAR5);
		FUN9(&VAR22, VAR2->VAR7);
		VAR5 = FUN10(&VAR21);
		VAR7 = FUN10(&VAR22);
		VAR6 = VAR5;
		if (FUN7(VAR2->VAR5 != VAR2->VAR6)) {
			FUN9(&VAR23, VAR2->VAR6);
			VAR6 = FUN10(&VAR23);
		}

	} else {
		
		VAR5 = FUN11(VAR2->VAR32 + VAR17 + VAR2->VAR25,
			VAR33);
		if (FUN7(!VAR5))
			return -VAR34;
		VAR7 = (VAR5 + VAR2->VAR32 + VAR17);
		FUN12(VAR5, VAR2->VAR5, 0, VAR2->VAR32, 0);
		FUN12(VAR7, VAR2->VAR7, 0,
					VAR2->VAR25, 0);
		VAR6 = VAR5;
	}

	FUN13(VAR16, VAR6, VAR5, (unsigned long)VAR2->VAR32, VAR20,
		VAR12->VAR35, VAR7, (unsigned long)VAR2->VAR25, VAR6
		+ ((unsigned long)VAR2->VAR32), VAR17);

	
	if (VAR3) {
		if (FUN7(VAR2->VAR5 != VAR2->VAR6)) {
			FUN14(VAR6);
			FUN15(&VAR23, 0, 0);
		}
		FUN14(VAR5);
		FUN14(VAR7);
		FUN15(&VAR21, 0, 0);
		FUN15(&VAR22, 0, 0);
	} else {
		FUN12(VAR6, VAR2->VAR6, 0,
			VAR2->VAR32 + VAR17, 1);
		FUN16(VAR5);
	}
	return 0;
}