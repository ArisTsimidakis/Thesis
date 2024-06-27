FUN1(VAR1 *VAR2)
{
	VAR3	*VAR4;
	VAR5	*VAR6;
	int		VAR7;

	if (VAR8 == 0) {
		VAR7 = FUN2(VAR2);
		return ((VAR7 == 0) ? VAR9 : VAR10);
	}

	if (VAR2->VAR11 != 0xffff) {
		FUN3(VAR2);
		if (VAR2->VAR12 == NULL) {
			FUN4(VAR2, VAR13,
 			    VAR14, VAR15);
 			return (VAR10);
 		}



		FUN5(VAR2, VAR2->VAR12);


 	} else {
 		VAR6 = &VAR2->VAR16->VAR17;
 		FUN6(VAR6, VAR18);
 		VAR4 = FUN7(VAR6);
 		while (VAR4) {
 			FUN8(&VAR4->VAR19);

			FUN5(VAR2, VAR4);


 			FUN9(&VAR4->VAR19);
 			VAR4 = FUN10(VAR6, VAR4);
 		}
		FUN11(VAR6);
	}

 	VAR7 = FUN2(VAR2);
 	return ((VAR7 == 0) ? VAR9 : VAR10);
 }