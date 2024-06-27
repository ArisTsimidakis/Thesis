static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	VAR5 *VAR6 = FUN2(VAR2);
	short VAR7, VAR8;

	VAR4->VAR9 = (VAR10 |
			  VAR11 |
			  VAR12 |
			  VAR13 |
			  VAR14 |
			  VAR15 | VAR16);
	VAR4->VAR17 = VAR18;
	VAR4->VAR19 = VAR20;
	VAR4->VAR21 = VAR6->VAR22;
	FUN3(VAR6, VAR23, 2, &VAR8);
	FUN3(VAR6, VAR24, 2, &VAR7);
	if (VAR8 & VAR25) {
		u32 VAR26 = ((VAR7 & (VAR27 | VAR28)) ?
			     VAR29 : VAR30);
		FUN4(VAR4, VAR26);
		VAR4->VAR31 = VAR32;
		if (VAR26 == VAR29)
			VAR4->VAR33 = (VAR7 & VAR28) ?
			    VAR34 : VAR35;
		else
			VAR4->VAR33 = (VAR7 & VAR36) ?
			    VAR34 : VAR35;
	} else {
		VAR4->VAR31 = VAR37;
		FUN4(VAR4, ((VAR8 & VAR38) ?
					     VAR29 : VAR30));
		VAR4->VAR33 = (VAR8 & VAR39) ?
		    VAR34 : VAR35;
	}
	return 0;
}