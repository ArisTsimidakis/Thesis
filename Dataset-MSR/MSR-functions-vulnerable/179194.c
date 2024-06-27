static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			    struct VAR5 *VAR6)
{
	struct VAR3 *VAR7 = NULL;
	struct VAR3 **VAR8;
	int VAR9 = (VAR6->VAR10 &&
		       (VAR6->VAR10->VAR11 & VAR12));
 	int VAR13 = (!VAR6->VAR10 ||
 		   (VAR6->VAR10->VAR11 & VAR14));
 	int VAR15 = 0;


 
 	VAR8 = &VAR2->VAR16;
 
	for (VAR7 = VAR2->VAR16; VAR7; VAR7 = VAR7->VAR17.VAR18) {
		

		if (VAR7->VAR19 == VAR4->VAR19) {
			
			if (VAR6->VAR10 &&
			    (VAR6->VAR10->VAR11 & VAR20))
				return -VAR21;
			if (VAR9) {
				VAR15++;
				break;
			}

			if (VAR7->VAR17.VAR22 == VAR4->VAR17.VAR22 &&
			    VAR7->VAR23 == VAR4->VAR23 &&
			    FUN2(&VAR7->VAR24,
					    &VAR4->VAR24)) {
				if (VAR4->VAR25)
					VAR4->VAR25 = 0;
				if (!(VAR7->VAR26 & VAR27))
					return -VAR21;
				if (!(VAR4->VAR26 & VAR27))
					FUN3(VAR7);
				else
					FUN4(VAR7, VAR4->VAR17.VAR28);
				return -VAR21;
			}
			

			if (VAR4->VAR26 & VAR29 &&

			    !(VAR4->VAR26 & VAR27) &&

			    !(VAR7->VAR26 & VAR27))




 				VAR4->VAR25++;
 		}
 
		if (VAR7->VAR19 > VAR4->VAR19)
			break;

		VAR8 = &VAR7->VAR17.VAR18;
	}

	
	if (VAR8 == &VAR2->VAR16)
		VAR2->VAR30 = NULL;

	
	if (VAR4->VAR25) {
		unsigned int VAR25;
		struct VAR3 *VAR31, *VAR32;

 		
 		VAR31 = VAR2->VAR16;
 		while (VAR31) {

			if (VAR31->VAR19 == VAR4->VAR19) {




 				FUN5(&VAR4->VAR33,
 					      &VAR31->VAR33);
 				break;
			}
			VAR31 = VAR31->VAR17.VAR18;
		}
		
		VAR25 = 0;
		FUN6(VAR31, VAR32,
					 &VAR4->VAR33, VAR33) {
			VAR31->VAR25++;
			FUN7(VAR31->VAR25 != VAR4->VAR25);
			VAR25++;
		}
		FUN7(VAR25 != VAR4->VAR25);
	}

	
	if (!VAR9) {
		if (!VAR13)
			FUN8("");

VAR13:
		VAR4->VAR17.VAR18 = VAR7;
		*VAR8 = VAR4;
		VAR4->VAR34 = VAR2;
		FUN9(&VAR4->VAR35);
		FUN10(VAR36, VAR4, VAR6);
		VAR6->VAR37->VAR38.VAR39->VAR40++;

		if (!(VAR2->VAR41 & VAR42)) {
			VAR6->VAR37->VAR38.VAR39->VAR43++;
			VAR2->VAR41 |= VAR42;
		}

	} else {
		if (!VAR15) {
			if (VAR13)
				goto VAR13;
			FUN8("");
			return -VAR44;
		}
		*VAR8 = VAR4;
		VAR4->VAR34 = VAR2;
		VAR4->VAR17.VAR18 = VAR7->VAR17.VAR18;
		FUN9(&VAR4->VAR35);
		FUN10(VAR36, VAR4, VAR6);
		FUN11(VAR7);
		if (!(VAR2->VAR41 & VAR42)) {
			VAR6->VAR37->VAR38.VAR39->VAR43++;
			VAR2->VAR41 |= VAR42;
		}
	}

	return 0;
}