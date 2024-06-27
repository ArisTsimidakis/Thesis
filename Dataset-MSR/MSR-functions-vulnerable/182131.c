static int FUN1(struct VAR1 *VAR2)
{
	int VAR3 = 0;

#ifdef	VAR4
	
	if (!VAR2->VAR5->VAR6
			&& VAR2->VAR7
			&& VAR2->VAR8 == VAR2->VAR5->VAR9) {
		struct VAR10	*VAR11 = NULL;
		struct VAR12			*VAR5 = VAR2->VAR5;
		unsigned			VAR13 = VAR2->VAR14;

 		
 		VAR3 = FUN2(VAR2->VAR15[0],
 				FUN3(VAR2->VAR7[0].VAR11.VAR16),

				VAR17, (void **) &VAR11);


 		if (VAR3 || !(VAR11->VAR18 & VAR19))
 			return 0;
 
		FUN4(&VAR2->VAR20, "",
					(VAR13 == VAR5->VAR21) ? "" : "");

		
		if (VAR13 == VAR5->VAR21) {
			VAR5->VAR22 = 1;
			VAR3 = FUN5(VAR2,
				FUN6(VAR2, 0),
				VAR23, 0,
				VAR24,
				0, NULL, 0,
				VAR25);
			if (VAR3 < 0) {
				
				FUN7(&VAR2->VAR20, "",
									VAR3);
				VAR5->VAR22 = 0;
			}
		} else if (VAR11->VAR26 == sizeof
				(struct VAR10)) {
			
			VAR3 = FUN5(VAR2,
				FUN6(VAR2, 0),
				VAR23, 0,
				VAR27,
				0, NULL, 0,
				VAR25);
			if (VAR3 < 0)
				FUN7(&VAR2->VAR20,
					"",
					VAR3);
		}
	}
#endif
	return VAR3;
}