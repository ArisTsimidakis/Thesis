FUN1(VAR1, unsigned long, VAR2)
{
	struct VAR3 *VAR4, *VAR5 = NULL;
	struct VAR6 *VAR7, *VAR8 = NULL;
	struct VAR9 *VAR10 = NULL;
	struct VAR11 *VAR12 = NULL;
	int VAR13 = 0;
	int VAR14;

	
 	if (VAR2 & VAR15)

		VAR2 |= VAR16;


 	
	if (VAR2 & VAR17)
		VAR2 |= VAR16;
	
	if (VAR2 & VAR16)
		VAR2 |= VAR18;
	
	if (VAR2 & VAR18)
		VAR2 |= VAR19;
	
	if (VAR2 & VAR20)
		VAR2 |= VAR21;

	VAR14 = FUN2(VAR2);
	if (VAR14)
		goto VAR22;
	
	if (VAR2 & (VAR23|VAR24))
		VAR13 = 1;
	VAR14 = FUN3(VAR2, &VAR5);
	if (VAR14)
		goto VAR22;
	VAR14 = FUN4(VAR2, &VAR8);
	if (VAR14)
		goto VAR25;
	VAR14 = FUN5(VAR2, &VAR10);
	if (VAR14)
		goto VAR26;
	VAR14 = FUN6(VAR2, &VAR12,
					 VAR10, VAR5);
	if (VAR14)
		goto VAR27;

	if (VAR5 || VAR8 || VAR13 || VAR10 || VAR12) {
		if (VAR13) {
			
			FUN7(VAR28);
		}

		if (VAR12)
			FUN8(VAR28, VAR12);

		FUN9(VAR28);

		if (VAR5) {
			VAR4 = VAR28->VAR4;
			FUN10(&VAR4->VAR29);
			VAR28->VAR4 = VAR5;
			if (--VAR4->VAR30)
				VAR5 = NULL;
			else
				VAR5 = VAR4;
			FUN11(&VAR4->VAR29);
		}

		if (VAR8) {
			VAR7 = VAR28->VAR31;
			VAR28->VAR31 = VAR8;
			VAR8 = VAR7;
		}

		FUN12(VAR28);

		if (VAR10) {
			
			FUN13(VAR10);
			VAR10 = NULL;
		}
	}

VAR27:
	if (VAR10)
		FUN14(VAR10);
VAR26:
	if (VAR8)
		FUN15(VAR8);

VAR25:
	if (VAR5)
		FUN16(VAR5);

VAR22:
	return VAR14;
}