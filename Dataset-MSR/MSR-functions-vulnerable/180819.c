static void FUN1(struct VAR1 **VAR2)


 {
 	struct VAR3 *VAR4;
 	const struct VAR5 *VAR5 = FUN2();
 	struct VAR1 *VAR6 = *VAR2, *VAR7;


 
 	FUN3("", VAR6);
 
	
	if (VAR6) {
 		
 		FUN4(VAR6);
 	} else {




 		
 		switch (VAR5->VAR8) {
		case VAR9:
		case VAR10:
			if (VAR5->VAR3) {
				VAR7 = VAR5->VAR3;
				FUN5(&VAR7->VAR11);
				VAR4 = VAR7->VAR12.VAR13[0];
				if (!FUN6(VAR14,
					      &VAR7->VAR15))
 					VAR6 =
 						FUN4(VAR4->VAR6);
 				FUN7(&VAR7->VAR11);

				if (VAR6)




 					break;


 			}
 
 		case VAR16:
			VAR6 = FUN4(VAR5->VAR17);
			if (VAR6)
				break;

		case VAR18:
			VAR6 = FUN4(VAR5->VAR19);
			if (VAR6)
				break;

		case VAR20:
			FUN8();
			VAR6 = FUN4(
				FUN9(VAR5->VAR21));
			FUN10();

			if (VAR6)
				break;

		case VAR22:
			VAR6 =
				FUN4(VAR5->VAR23->VAR21);
			break;

		case VAR24:
			VAR6 = FUN4(VAR5->VAR23->VAR25);
			break;

		case VAR26:
 		default:
 			FUN11();
 		}




































 	}
 
 	*VAR2 = VAR6;
 	FUN12("", FUN13(VAR6));

	return;


 }