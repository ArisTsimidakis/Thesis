static VAR1 FUN1(struct VAR2 *VAR2, const char VAR3 *VAR4,
			    size_t VAR5, VAR6 *VAR7)
{
	struct VAR8 *VAR9  = VAR2->VAR10;
	struct VAR11 *VAR12;
	unsigned long VAR13;
	ssize_t VAR14 = -VAR15;

	if (!FUN2(VAR4, VAR5))
		return -VAR16;

	FUN3(&VAR9->VAR17, VAR13);

#define FUN4 (!VAR9->VAR18)
VAR19:
	
	while (!VAR20) {
		FUN5(&VAR9->VAR17, VAR13);
		if (VAR2->VAR21 & VAR22)
			return -VAR23;

		if (FUN6(
				VAR9->VAR24, VAR20))
			return -VAR25;

		FUN3(&VAR9->VAR17, VAR13);
	}

	VAR9->VAR18 = 1;
	VAR12 = VAR9->VAR12;
	VAR5  = FUN7(unsigned, VAR5, VAR9->VAR26);

	FUN5(&VAR9->VAR17, VAR13);
	VAR14 = FUN8(VAR12->VAR27, VAR4, VAR5);

	if (VAR14 != 0) {
		FUN9(VAR9->VAR28.VAR29->VAR30,
			"");
		VAR14 = -VAR31;
		goto VAR32;
	}

	FUN3(&VAR9->VAR17, VAR13);

	
	if (!VAR9->VAR12) {
		FUN10(VAR9->VAR33, VAR12);
		
		goto VAR19;
	}

	VAR12->VAR14   = 0;
	VAR12->VAR34     = 0;
	VAR12->VAR35   = VAR5;
 	VAR12->VAR36 = VAR37;
 	VAR12->VAR38  = VAR9;
 




 	VAR14 = FUN11(VAR9->VAR33, VAR12, VAR39);
 	if (VAR14 < 0) {
 		FUN9(VAR9->VAR28.VAR29->VAR30,
 			"", VAR14);

		goto VAR40;


 	} else {
 		VAR14 = VAR5;
 	}

	FUN5(&VAR9->VAR17, VAR13);
 
 	return VAR14;
 VAR32:
 	FUN3(&VAR9->VAR17, VAR13);

VAR40:
 	VAR9->VAR18 = 0;
 	FUN5(&VAR9->VAR17, VAR13);
 
	FUN12(&VAR9->VAR24);

	return VAR14;
}