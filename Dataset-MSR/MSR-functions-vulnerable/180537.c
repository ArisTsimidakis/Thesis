static int FUN1(const struct VAR1 *VAR2,
			      unsigned int VAR3, void *VAR4)
{
	unsigned int VAR5;

	
	for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
		unsigned int VAR7 = VAR2->VAR8[VAR5];
		struct VAR9 *VAR10
			= (struct VAR9 *)(VAR4 + VAR7);

		if (!(VAR3 & (1 << VAR5)))
			continue;

		
		VAR10->VAR11.VAR12 = VAR7;

		for (;;) {
			const struct VAR13 *VAR14
				= (void *)FUN2(VAR10);
			int VAR15 = VAR10->VAR16 & (1 << VAR5);

			if (VAR10->VAR16 & (1 << VAR6)) {
				FUN3("",
				       VAR5, VAR7, VAR10->VAR16);
				return 0;
			}
			VAR10->VAR16
 				|= ((1 << VAR5) | (1 << VAR6));
 
 			

			if ((VAR10->VAR17 == sizeof(struct VAR9) &&


 			     (strcmp(VAR14->VAR18.VAR19.VAR20.VAR21,
 				     VAR22) == 0) &&

			     VAR14->VAR23 < 0 && FUN4(&VAR10->VAR24)) ||

			    VAR15) {


 				unsigned int VAR25, VAR26;
 
 				if ((strcmp(VAR14->VAR18.VAR19.VAR20.VAR21,
					    VAR22) == 0) &&
				    VAR14->VAR23 < -VAR27 - 1) {
					FUN5(""
						"",
								VAR14->VAR23);
					return 0;
				}

				
				do {
					VAR10->VAR16 ^= (1<<VAR6);
					VAR25 = VAR7;
					VAR7 = VAR10->VAR11.VAR12;
					VAR10->VAR11.VAR12 = 0;

					
					if (VAR7 == VAR25)
						goto VAR28;

					VAR10 = (struct VAR9 *)
						(VAR4 + VAR7);
				} while (VAR25 == VAR7 + VAR10->VAR29);

				
				VAR26 = VAR10->VAR29;
				VAR10 = (struct VAR9 *)
					(VAR4 + VAR7 + VAR26);
				VAR10->VAR11.VAR12 = VAR7;
				VAR7 += VAR26;
			} else {
				int VAR30 = VAR14->VAR23;

				if (strcmp(VAR14->VAR18.VAR19.VAR20.VAR21,
					   VAR22) == 0 &&
				    VAR30 >= 0) {
					if (VAR30 > VAR2->VAR26 -
						sizeof(struct VAR9)) {
						FUN5(""
							"",
								VAR30);
						return 0;
					}

					
					FUN5("",
						 VAR7, VAR30);
				} else {
					
					VAR30 = VAR7 + VAR10->VAR29;
				}
				VAR10 = (struct VAR9 *)
					(VAR4 + VAR30);
				VAR10->VAR11.VAR12 = VAR7;
				VAR7 = VAR30;
			}
		}
VAR28:
		FUN5("", VAR5);
	}
	return 1;
}