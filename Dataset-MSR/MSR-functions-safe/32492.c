static void FUN1(struct VAR1 *VAR2)
{
	u8 VAR3, VAR4 = 0;
	u32 VAR5, VAR6, VAR7;
	struct VAR8 *VAR9 = FUN2(VAR2);
	struct VAR10 *VAR11 = VAR9->VAR12->VAR13[VAR14];

	FUN3(&VAR9->VAR15);

	VAR5 = VAR9->VAR5 & ~(VAR16 |
				    VAR17);

	VAR3 = VAR9->VAR18.VAR19;

	if (VAR11->VAR20) {
		VAR6 = 0;
		VAR7 = 0;

		if (VAR11->VAR21 == VAR22 || VAR11->VAR21 == VAR23)
			VAR5 |= VAR24;
		else if (VAR11->VAR21 == VAR25 ||
			 FUN4(VAR9) != VAR26)
			VAR5 |= VAR27;
		else
			VAR5 |= VAR24;

		if (VAR11->VAR28 == VAR29)
			VAR5 |= VAR17;
		else {
			VAR6 = FUN5(
				  VAR9->VAR18.VAR30);

			if (VAR11->VAR31)
				VAR7 = VAR32;
			if (VAR11->VAR33)
				VAR7 |= VAR34;
		}

		FUN6(VAR9, VAR6, VAR7);
	} else
		VAR5 |= VAR27;

	if (VAR5 != VAR9->VAR5) {
		VAR9->VAR5 = VAR5;
		FUN7(VAR35, VAR9->VAR5);
		FUN8(40);
	}

	if (FUN4(VAR9) == VAR26) {
		if (VAR11->VAR21 == VAR23)
			FUN9(VAR36,
			     VAR37 |
			     VAR38);
		else
			FUN9(VAR36, VAR38);
	}

	if (VAR11->VAR21 == VAR25 && VAR11->VAR28 == VAR29)
		FUN9(VAR39,
		     ((2 << VAR40) |
		      (6 << VAR41) |
		      (0xff << VAR42)));
	else
		FUN9(VAR39,
		     ((2 << VAR40) |
		      (6 << VAR41) |
		      (32 << VAR42)));

	if (VAR11->VAR20 != VAR9->VAR43 ||
	    VAR11->VAR21 != VAR9->VAR18.VAR44 ||
	    VAR11->VAR28 != VAR9->VAR18.VAR45 ||
	    VAR3 != VAR9->VAR18.VAR19)
		VAR4 = 1;

	VAR9->VAR43 = VAR11->VAR20;
	VAR9->VAR18.VAR44 = VAR11->VAR21;
	VAR9->VAR18.VAR45 = VAR11->VAR28;

	FUN10(&VAR9->VAR15);

	if (VAR4)
		FUN11(VAR9);
}