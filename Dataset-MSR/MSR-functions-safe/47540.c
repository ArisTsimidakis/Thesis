int FUN1(struct VAR1 *VAR2)
{
	int VAR3 = 0;
	u8 VAR4 = 0;
	VAR5 *VAR6;
	struct VAR7 *VAR8;
	VAR5 *VAR9;
	struct VAR10 *VAR11 = FUN2(VAR2);
	struct VAR12 *VAR13 = FUN3(VAR11);
	struct VAR14 *VAR15 = FUN4(VAR2);
	struct crypto_hash_walk VAR16;
	int VAR17 = FUN5(VAR2, &VAR16);

	
	if (VAR17 == 0)
		return VAR3;

	VAR4 = VAR15->VAR18.VAR4;
	VAR6 = (VAR5 *)VAR15->VAR18.VAR6;

	
	if (VAR17 > (VAR15->VAR18.VAR19.VAR20 + VAR17) &&
	    VAR21 == VAR15->VAR18.VAR19.VAR22) {
		FUN6("", VAR23);
		return -VAR24;
	}

	VAR3 = FUN7(VAR13, &VAR8);
	if (VAR3)
		return VAR3;

	
	while (0 != VAR17) {
		VAR9 = VAR16.VAR25;
		VAR3 = FUN8(VAR8, VAR13, VAR15, VAR17,
				VAR9, VAR6, &VAR4);

		if (VAR3) {
			FUN9(VAR8->VAR26, "",
				VAR23);
			goto VAR27;
		}

		VAR17 = FUN10(&VAR16, 0);
	}

	VAR15->VAR18.VAR4 = VAR4;
	FUN11(VAR8->VAR26, "",
		VAR23, VAR15->VAR18.VAR4, VAR15->VAR18.VAR28);

VAR27:
	FUN12(VAR8);

	return VAR3;
}