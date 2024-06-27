int FUN1(struct VAR1 *VAR2, struct socket *VAR3, struct VAR4 *VAR5,
		size_t VAR6, int VAR7)
{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10;
 	struct VAR11 *VAR12;
 	int VAR13, VAR14 = -VAR15;
 




 	if (VAR3->VAR16 != VAR17)
 		return -VAR18;
 
	
	if (VAR7 & ~(VAR19 | VAR20))
		return -VAR21;

	VAR10 = FUN2(VAR3);
	if (FUN3(VAR22, &VAR10->VAR7) ||
	    FUN3(VAR23, &VAR10->VAR7) ||
	    !FUN3(VAR24, &VAR10->VAR7))
		return 0;

	VAR12 = FUN4(VAR8, VAR7, VAR7 & VAR19, &VAR14);
	if (!VAR12)
		return VAR14;

	VAR13 = VAR12->VAR25;
	if (VAR13 > VAR6) {
		VAR13 = VAR6;
		VAR5->VAR26 |= VAR27;
	}

	VAR14 = FUN5(VAR12, 0, VAR5->VAR28, VAR13);
	if (VAR14)
		return VAR14;
	FUN6(VAR5, VAR8, VAR12);

	if (!(VAR7 & VAR20)) {
		FUN7("", FUN8(&VAR8->VAR29),
			 VAR12->VAR30);
		FUN9(VAR10, VAR12->VAR30);
	}

	FUN10(VAR8, VAR12);
	return VAR13;
}