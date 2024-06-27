FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	struct VAR4 *VAR5;
	struct VAR6 *VAR7;
	unsigned long VAR8;
	struct VAR9 *VAR10;
	int VAR11;
	int write = VAR3 & VAR12;
	unsigned int VAR13 = VAR14 | VAR15 |
					(write ? VAR16 : 0);

	VAR7 = VAR17;
	VAR10 = VAR7->VAR10;

	
	VAR8 = FUN2();

	
	if (FUN3(VAR2))
		FUN4(VAR2);
	FUN5(&VAR10->VAR18);

	if (FUN6(FUN7(VAR2, VAR8)))
		return;

	
	if (FUN6(FUN8(VAR8))) {
		if (!(VAR3 & (VAR19 | VAR20 | VAR21))) {
			if (FUN9(VAR8) >= 0)
				return;

			if (FUN10(VAR2, VAR8, VAR3))
				return;
		}

		
		if (FUN11(VAR3, VAR8))
			return;

		
		if (FUN12(VAR2))
			return;
		
		FUN13(VAR2, VAR3, VAR8);

		return;
	}

	
	if (FUN6(FUN12(VAR2)))
		return;
	
	if (FUN14(VAR2)) {
		FUN15();
		VAR3 |= VAR20;
	} else {
		if (VAR2->VAR13 & VAR22)
			FUN15();
	}

 	if (FUN6(VAR3 & VAR19))
 		FUN16(VAR2, VAR3, VAR8);
 

	FUN17(VAR23, 1, 0, VAR2, VAR8);


 
 	
	if (FUN6(FUN18() || !VAR10)) {
		FUN13(VAR2, VAR3, VAR8);
		return;
	}

	
	if (FUN6(!FUN19(&VAR10->VAR18))) {
		if ((VAR3 & VAR20) == 0 &&
		    !FUN20(VAR2->VAR24)) {
			FUN13(VAR2, VAR3, VAR8);
			return;
		}
VAR25:
		FUN21(&VAR10->VAR18);
	} else {
		
		FUN22();
	}

	VAR5 = FUN23(VAR10, VAR8);
	if (FUN6(!VAR5)) {
		FUN24(VAR2, VAR3, VAR8);
		return;
	}
	if (FUN25(VAR5->VAR26 <= VAR8))
		goto VAR27;
	if (FUN6(!(VAR5->VAR28 & VAR29))) {
		FUN24(VAR2, VAR3, VAR8);
		return;
	}
	if (VAR3 & VAR20) {
		
		if (FUN6(VAR8 + 65536 + 32 * sizeof(unsigned long) < VAR2->VAR30)) {
			FUN24(VAR2, VAR3, VAR8);
			return;
		}
	}
	if (FUN6(FUN26(VAR5, VAR8))) {
		FUN24(VAR2, VAR3, VAR8);
		return;
	}

	
VAR27:
	if (FUN6(FUN27(VAR3, VAR5))) {
		FUN28(VAR2, VAR3, VAR8);
		return;
	}

	
	VAR11 = FUN29(VAR10, VAR5, VAR8, VAR13);

	if (FUN6(VAR11 & (VAR31|VAR32))) {
		if (FUN30(VAR2, VAR3, VAR8, VAR11))
			return;
	}

	
 	if (VAR13 & VAR14) {
 		if (VAR11 & VAR33) {
 			VAR7->VAR34++;

			FUN17(VAR35, 1, 0,


 				      VAR2, VAR8);
 		} else {
 			VAR7->VAR36++;

			FUN17(VAR37, 1, 0,


 				      VAR2, VAR8);
 		}
 		if (VAR11 & VAR31) {
			
			VAR13 &= ~VAR14;
			goto VAR25;
		}
	}

	FUN31(VAR2, VAR8, VAR7);

	FUN32(&VAR10->VAR18);
}