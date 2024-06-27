static int FUN1(VAR1 *VAR2, struct VAR3 *VAR3,
				    unsigned int VAR4,
				    unsigned int VAR5,
				    struct VAR6 **VAR7,
				    struct VAR8 *VAR9)
{
	struct VAR6 *VAR10 = *VAR7;
	struct VAR6 *VAR11;
	int VAR12, VAR13, VAR14 = 0;

VAR15:
	VAR13 = VAR12 = FUN2(VAR3);

	
	VAR11 = VAR10 + VAR12;
	while (VAR13 > 0 && !FUN3(VAR11)) {
		VAR13--;
		VAR11--;
	}

	
	if (FUN3(VAR11)) {
		
		VAR14 = FUN4(VAR2, VAR3, VAR4, VAR10, VAR9, VAR13);
		if (VAR14)
			goto VAR16;

		
		VAR10 = FUN5(VAR3,
				    (VAR17)FUN6(VAR9->VAR18),
				    VAR7, VAR5);
		if (FUN7(VAR10))
			VAR14 = FUN8(VAR10);
	} else {
		
		VAR14 = FUN9(VAR2, VAR3, VAR4);
		if (VAR14)
			goto VAR16;

		
		VAR10 = FUN5(VAR3,
				   (VAR17)FUN6(VAR9->VAR18),
				    VAR7, VAR5);
		if (FUN7(VAR10)) {
			VAR14 = FUN8(VAR10);
			goto VAR16;
		}

		
		VAR12 = FUN2(VAR3);
		if (VAR10[VAR12].VAR19->VAR20 == VAR10[VAR12].VAR19->VAR21) {
			
			goto VAR15;
		}
	}

VAR16:
	return VAR14;
}