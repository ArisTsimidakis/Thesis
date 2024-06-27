int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
		  unsigned int VAR5, unsigned int VAR6,
		  const void *VAR7, const void VAR8 *VAR9)
{
	struct VAR10 *VAR10 = &VAR2->VAR11.VAR10;
	struct VAR12 *VAR13;
	int VAR14;

	if (!FUN2(VAR15))
		return -VAR16;

	
	if ((VAR5 != 0) || (VAR6 < VAR17))
		return -VAR18;

	VAR13 = &VAR10->VAR19.VAR13;

	FUN3(VAR10);

	if (FUN2(VAR20)) {
		if (VAR7)
			VAR14 = FUN4(VAR13, VAR7);
		else
 			VAR14 = FUN5(VAR13, VAR9);
 	} else {
 		VAR14 = FUN6(&VAR5, &VAR6, &VAR7, &VAR9, VAR13, 0, -1);








 	}
 
 	
	if (VAR14)
		FUN7(&VAR10->VAR19);

	
	VAR13->VAR21.VAR22 &= VAR23;
	VAR13->VAR24.VAR25 &= VAR26;
	
	memset(&VAR13->VAR24.VAR27, 0, 48);

	return VAR14;
}