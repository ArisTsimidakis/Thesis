int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
	       struct VAR1 *VAR5, struct VAR3 *VAR6,
	       struct VAR1 **VAR7, unsigned int VAR8)
 {
 	int VAR9;
 	bool VAR10 = FUN2(VAR4);

	const unsigned char *VAR11;
 	struct VAR1 *VAR12 = VAR4->VAR13;
 	struct VAR1 *VAR14 = VAR6->VAR13;
 	bool VAR15 = false;
 	unsigned VAR16 = VAR5->VAR17->VAR18;


 
 	if (VAR12 == VAR14)
 		return 0;

	VAR9 = FUN3(VAR2, VAR4, VAR10);
	if (VAR9)
		return VAR9;

	if (!VAR14) {
		VAR9 = FUN4(VAR5, VAR6);
	} else {
		VAR15 = FUN2(VAR6);

		if (!(VAR8 & VAR19))
			VAR9 = FUN3(VAR5, VAR6, VAR10);
		else
			VAR9 = FUN3(VAR5, VAR6, VAR15);
	}
	if (VAR9)
		return VAR9;

	if (!VAR2->VAR20->VAR21)
		return -VAR22;

	
	if (VAR5 != VAR2) {
		if (VAR10) {
			VAR9 = FUN5(VAR12, VAR23);
			if (VAR9)
				return VAR9;
		}
		if ((VAR8 & VAR19) && VAR15) {
			VAR9 = FUN5(VAR14, VAR23);
			if (VAR9)
				return VAR9;
		}
	}

	VAR9 = FUN6(VAR2, VAR4, VAR5, VAR6,
				      VAR8);
 	if (VAR9)
 		return VAR9;
 

	VAR11 = FUN7(VAR4->VAR24.VAR25);


 	FUN8(VAR6);
 	if (!VAR10 || (VAR8 & VAR19))
 		FUN9(VAR12, VAR14);
	else if (VAR14)
		FUN10(VAR14);

	VAR9 = -VAR26;
	if (FUN11(VAR4) || FUN11(VAR6))
		goto VAR27;

	if (VAR16 && VAR5 != VAR2) {
		VAR9 = -VAR28;
		if (VAR10 && !VAR15 && VAR5->VAR29 >= VAR16)
			goto VAR27;
		if ((VAR8 & VAR19) && !VAR10 && VAR15 &&
		    VAR2->VAR29 >= VAR16)
			goto VAR27;
	}
	if (VAR10 && !(VAR8 & VAR19) && VAR14)
		FUN12(VAR6);
	if (!VAR10) {
		VAR9 = FUN13(VAR12, VAR7);
		if (VAR9)
			goto VAR27;
	}
	if (VAR14 && !VAR15) {
		VAR9 = FUN13(VAR14, VAR7);
		if (VAR9)
			goto VAR27;
	}
	VAR9 = VAR2->VAR20->FUN14(VAR2, VAR4,
				       VAR5, VAR6, VAR8);
	if (VAR9)
		goto VAR27;

	if (!(VAR8 & VAR19) && VAR14) {
		if (VAR10)
			VAR14->VAR30 |= VAR31;
		FUN15(VAR6);
		FUN16(VAR6);
	}
	if (!(VAR2->VAR17->VAR32->VAR33 & VAR34)) {
		if (!(VAR8 & VAR19))
			FUN17(VAR4, VAR6);
		else
			FUN18(VAR4, VAR6);
	}
VAR27:
	if (!VAR10 || (VAR8 & VAR19))
		FUN19(VAR12, VAR14);
	else if (VAR14)
 		FUN20(VAR14);
 	FUN21(VAR6);
 	if (!VAR9) {

		FUN22(VAR2, VAR5, VAR11, VAR10,


 			      !(VAR8 & VAR19) ? VAR14 : NULL, VAR4);
 		if (VAR8 & VAR19) {
 			FUN22(VAR5, VAR2, VAR4->VAR24.VAR25,
 				      VAR15, NULL, VAR6);
 		}
 	}

	FUN23(VAR11);


 
 	return VAR9;
 }