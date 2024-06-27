static unsigned int FUN1(struct VAR1 *VAR1, struct socket *VAR2,
				    VAR3 *VAR4)
{
	struct VAR2 *VAR5 = VAR2->VAR5, *VAR6;
	unsigned int VAR7, VAR8;

	FUN2(VAR1, FUN3(VAR5), VAR4);
	VAR7 = 0;

	
	if (VAR5->VAR9 || !FUN4(&VAR5->VAR10))
		VAR7 |= VAR11 |
			(FUN5(VAR5, VAR12) ? VAR13 : 0);

	if (VAR5->VAR14 & VAR15)
		VAR7 |= VAR16 | VAR17 | VAR18;
	if (VAR5->VAR14 == VAR19)
		VAR7 |= VAR20;

	
	if (!FUN4(&VAR5->VAR21))
		VAR7 |= VAR17 | VAR18;

	
	if (VAR5->VAR22 == VAR23) {
		if (VAR5->VAR24 == VAR25)
			VAR7 |= VAR20;
		
		if (VAR5->VAR24 == VAR26)
			return VAR7;
	}

	
	if (!(FUN6(VAR4) & (VAR27|VAR28|VAR29)))
 		return VAR7;
 
 	VAR8 = FUN7(VAR5);

	VAR6 = FUN8(VAR5);

	if (VAR6) {

		if (FUN9(VAR6) != VAR5) {

			FUN2(VAR1, &FUN10(VAR6)->VAR30, VAR4);

			if (FUN11(VAR6))

				VAR8 = 0;

		}

		FUN12(VAR6);




















 	}
 
 	if (VAR8)
		VAR7 |= VAR29 | VAR28 | VAR27;
	else
		FUN13(VAR31, &VAR5->VAR32->VAR33);

	return VAR7;
}