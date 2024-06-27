int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
			   struct VAR5 *VAR6, unsigned int VAR7)
{
	struct VAR8 *VAR9 = FUN2(VAR2);
	struct VAR10 *VAR11 = FUN3(VAR4);
	const int VAR12 = VAR2->VAR13;
	int VAR14 = 0;

	
	if (VAR2->VAR13 == VAR15) {
		if (VAR6->VAR16 == VAR17) {
 			if (FUN4(VAR2)->VAR18->FUN5(VAR2,
 								    VAR4) < 0)
 				return 1;

			goto VAR19;




 		}
 		if (VAR6->VAR16 == VAR20)
 			goto VAR19;

		
		VAR11->VAR21 = VAR22;
		return 1;
	} else if (VAR2->VAR13 == VAR23) {
		VAR11->VAR21 = VAR22;
		return 1;
	}

	
	if (VAR2->VAR13 != VAR24 && FUN6(VAR2, VAR4))
		goto VAR19;

	
	if ((VAR9->VAR25 != VAR26 &&
	     VAR6->VAR16 == VAR27) ||
	    (VAR9->VAR25 == VAR26 &&
	     VAR6->VAR16 == VAR17) ||
	    (VAR2->VAR13 == VAR28 && VAR6->VAR16 == VAR29)) {
		FUN7(VAR2, VAR11->VAR30, VAR31);
		goto VAR19;
	}

	
	if (FUN8(VAR2, NULL, VAR4))
		return 1;

	
	if (VAR6->VAR16 == VAR20) {
		FUN9(VAR2, VAR4);
		return 0;
	} else if (VAR6->VAR16 == VAR32) {	
		if (FUN10(VAR2, VAR4))
			return 0;
		goto VAR19;
	} else if (VAR6->VAR16 == VAR33) {		
		if (FUN11(VAR2, VAR4))
			return 0;
		goto VAR19;
	}

	switch (VAR2->VAR13) {
	case VAR24:
		VAR14 = FUN12(VAR2, VAR4, VAR6, VAR7);
		if (VAR14 >= 0)
			return VAR14;

		FUN13(VAR4);
		return 0;

	case VAR34:
		
		FUN14(VAR2, VAR4);
		FUN15(VAR2, VAR4);
		
	case VAR28:
		VAR14 = FUN16(VAR2, VAR4,
								 VAR6, VAR7);
		break;
	}

	if (VAR6->VAR16 == VAR35 ||
	    VAR6->VAR16 == VAR36) {
		switch (VAR12) {
		case VAR34:
			VAR2->FUN17(VAR2);
			FUN18(VAR2, VAR37, VAR38);
			break;
		}
	} else if (FUN19(VAR6->VAR16 == VAR31)) {
		FUN7(VAR2, VAR11->VAR30, VAR39);
		goto VAR19;
	}

	if (!VAR14) {
VAR19:
		FUN13(VAR4);
	}
	return 0;
}