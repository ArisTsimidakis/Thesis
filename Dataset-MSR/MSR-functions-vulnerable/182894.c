int FUN1(struct VAR1 *VAR2,
				   unsigned long VAR3)
 {
 	struct VAR4 *VAR5 = VAR2->VAR6;
 	struct VAR1 *VAR7;

	int VAR8;


 
 	VAR3 &= VAR9;

	VAR8 = FUN2(VAR3);

	if (VAR8)

		return VAR8;




 
 	
 	VAR7 = VAR2->VAR10;
	
	if (VAR7 && !(VAR7->VAR11 & VAR12) &&
			(VAR7->VAR11 & (VAR13|VAR14|VAR15))) {
		if (VAR3 - VAR7->VAR16 < VAR17)
			return -VAR18;
	}

	
	if (FUN3(FUN4(VAR2)))
		return -VAR18;

	
	FUN5(VAR2->VAR19);

	
	if (VAR3 < VAR2->VAR20) {
		unsigned long VAR21, VAR22;

		VAR21 = VAR2->VAR16 - VAR3;
		VAR22 = (VAR2->VAR20 - VAR3) >> VAR23;

		VAR8 = -VAR18;
		if (VAR22 <= VAR2->VAR24) {
			VAR8 = FUN6(VAR2, VAR21, VAR22);
			if (!VAR8) {
				
				FUN7(&VAR5->VAR25);
				if (VAR2->VAR11 & VAR26)
					VAR5->VAR27 += VAR22;
				FUN8(VAR5, VAR2->VAR11, VAR22);
				FUN9(VAR2);
				VAR2->VAR20 = VAR3;
				VAR2->VAR24 -= VAR22;
				FUN10(VAR2);
				FUN11(VAR2);
				FUN12(&VAR5->VAR25);

				FUN13(VAR2);
			}
		}
	}
	FUN14(VAR2->VAR19);
	FUN15(VAR2, VAR2->VAR11);
	FUN16(VAR5);
	return VAR8;
}