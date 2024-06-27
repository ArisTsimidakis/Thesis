int FUN1(struct VAR1 *VAR2, struct socket *VAR3, struct VAR4 *VAR5,
		size_t VAR6, int VAR7)
{
	struct VAR3 *VAR8 = VAR3->VAR8;
	struct VAR9 *VAR10;
 	struct VAR11 *VAR12;
 	int VAR13, VAR14 = -VAR15;
 

	VAR5->VAR16 = 0;


 	if (VAR3->VAR17 != VAR18)
 		return -VAR19;
 
	
	if (VAR7 & ~(VAR20 | VAR21))
		return -VAR22;

	VAR10 = FUN2(VAR3);
	if (FUN3(VAR23, &VAR10->VAR7) ||
	    FUN3(VAR24, &VAR10->VAR7) ||
	    !FUN3(VAR25, &VAR10->VAR7))
		return 0;

	VAR12 = FUN4(VAR8, VAR7, VAR7 & VAR20, &VAR14);
	if (!VAR12)
		return VAR14;

	VAR13 = VAR12->VAR26;
	if (VAR13 > VAR6) {
		VAR13 = VAR6;
		VAR5->VAR27 |= VAR28;
	}

	VAR14 = FUN5(VAR12, 0, VAR5->VAR29, VAR13);
	if (VAR14)
		return VAR14;
	FUN6(VAR5, VAR8, VAR12);

	if (!(VAR7 & VAR21)) {
		FUN7("", FUN8(&VAR8->VAR30),
			 VAR12->VAR31);
		FUN9(VAR10, VAR12->VAR31);
	}

	FUN10(VAR8, VAR12);
	return VAR13;
}