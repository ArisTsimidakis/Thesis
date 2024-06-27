int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	int VAR5;
	struct VAR6 *VAR6 = VAR2->VAR7;
	struct VAR8 *VAR9 = VAR6->VAR10;
	struct VAR11 *VAR12 = &VAR6->VAR13;
	struct VAR14 *VAR14 = VAR9->VAR15;
	struct VAR16 *VAR16;
	unsigned long VAR17;
	int VAR18 = 0;
	int VAR19 = 0;

	VAR17 = (FUN2(VAR14) + VAR20 - 1) >> VAR21;
	if (VAR4->VAR22 >= VAR17)
		return VAR23;

	
	if (FUN3(VAR2))
		goto VAR24;

	
VAR25:
	VAR16 = FUN4(VAR9, VAR4->VAR22);
	
	if (FUN5(VAR2)) {
		if (!VAR16) {
			FUN6(VAR9, VAR12, VAR6,
							   VAR4->VAR22, 1);
			VAR16 = FUN4(VAR9, VAR4->VAR22);
			if (!VAR16)
				goto VAR24;
		}
		if (FUN7(VAR16)) {
			FUN8(VAR9, VAR12, VAR6, VAR16,
							   VAR4->VAR22, 1);
		}
	}

	if (!VAR16) {
		unsigned long VAR26;

		VAR12->VAR27++;

		
		if (VAR12->VAR27 > VAR28)
			goto VAR24;

		
		if (!VAR18) {
			VAR19 = VAR29;
			FUN9(VAR30);
		}
		VAR18 = 1;
		VAR26 = FUN10(VAR6->VAR13.VAR26);
		if (VAR26) {
			pgoff_t VAR31 = 0;

			if (VAR4->VAR22 > VAR26 / 2)
				VAR31 = VAR4->VAR22 - VAR26 / 2;
			FUN11(VAR9, VAR6, VAR31, VAR26);
		}
		VAR16 = FUN4(VAR9, VAR4->VAR22);
		if (!VAR16)
			goto VAR24;
	}

	if (!VAR18)
		VAR12->VAR27--;

	
	if (FUN12(!FUN13(VAR16)))
		goto VAR32;

	
	VAR17 = (FUN2(VAR14) + VAR20 - 1) >> VAR21;
	if (FUN12(VAR4->VAR22 >= VAR17)) {
		FUN14(VAR16);
		FUN15(VAR16);
		return VAR23;
	}

	
	FUN16(VAR16);
	VAR12->VAR33 = (VAR34)VAR16->VAR35 << VAR21;
	VAR4->VAR16 = VAR16;
	return VAR19 | VAR36;

VAR24:
	
	VAR5 = FUN17(VAR6, VAR4->VAR22);

	
	if (VAR5 >= 0)
		goto VAR25;

	
	if (VAR5 == -VAR37)
		return VAR38;
	return VAR23;

VAR32:
	
	if (!VAR18) {
		VAR19 = VAR29;
		FUN9(VAR30);
	}

	
	FUN18(VAR16);
	VAR5 = VAR9->VAR39->FUN19(VAR6, VAR16);
	FUN15(VAR16);

	if (!VAR5 || VAR5 == VAR40)
		goto VAR25;

	
	FUN20(VAR6, VAR12);
	return VAR23;
}