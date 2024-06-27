static bool FUN1(struct VAR1 *VAR2,
				  struct VAR3 *VAR4,
				  struct VAR5 *VAR6,
				  struct VAR7 *VAR8,
				  int VAR9)
{
	bool VAR10 = false;
	bool VAR11 = false;
	struct VAR3 *VAR12 = NULL;

	if (FUN2(VAR13, &VAR8->VAR14)) {
		VAR6->VAR15 |= VAR16;
		VAR11 = true;
	} else if (FUN2(VAR17, &VAR8->VAR14)) {
		
	} else {
		FUN3(&VAR2->VAR18->VAR19);
		
		VAR8 = FUN4(VAR2->VAR18, VAR9);

		if (!VAR8) {
			
		} else if (FUN2(VAR13, &VAR8->VAR14)) {
			VAR6->VAR15 |= VAR16;
			VAR11 = true;
		} else {
			VAR10 = true;
			VAR6->VAR20.VAR21 = &VAR2->VAR22->VAR21;
			VAR6->VAR15 |= VAR23;
			VAR6->VAR15 &= ~VAR24;
			FUN5(&VAR8->VAR25, VAR4);
			if (FUN6(&VAR8->VAR25) > VAR26)
				VAR12 = FUN7(&VAR8->VAR25);
		}
		FUN8(&VAR2->VAR18->VAR19);

		if (VAR12)
			FUN9(&VAR2->VAR27->VAR28, VAR12);
	}

	
	if (VAR11 && VAR8->VAR29)
		VAR8->VAR30 = VAR31;

	return VAR10;
}