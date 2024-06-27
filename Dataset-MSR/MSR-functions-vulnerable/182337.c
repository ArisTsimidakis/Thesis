int			VAR1) FUN1(VAR2)
{
	struct VAR3		*VAR3 = FUN2(VAR4);
	struct VAR5	*VAR6 = VAR4->VAR7;
	int			VAR8;

	
	FUN3(&VAR4->VAR9);
	if (VAR4->VAR10 != VAR11) {
		FUN4(VAR4);
		FUN5(VAR6, VAR12);
		VAR8 = -VAR13;
		goto VAR14;
	}


	
	if (VAR4->VAR15 & (VAR16|VAR17)) {
		FUN4(VAR4);
		FUN5(VAR6, VAR12);
		VAR8 = -VAR13;
		goto VAR14;
 	}
 
 	

	if (FUN2(VAR4)->VAR18 == 0 && !(VAR19 & VAR20)) {

		VAR8 = -VAR21;




 		goto VAR14;

	}
 
 	
	if (VAR4->VAR15 & VAR22) {
		FUN6(VAR4);

		if (VAR19 & VAR23) {
			VAR8 = -VAR13;
			goto VAR14;
		}

		
		VAR4->VAR15 |= VAR17;

		FUN7(&VAR4->VAR9);
		FUN8();

		VAR8 = FUN9(VAR6, VAR3);
		if (VAR8) {
			bool VAR24;
			
			FUN10();
			FUN3(&VAR4->VAR9);
			VAR24 = !!FUN11(VAR4, VAR16);
			VAR4->VAR15 &= ~(VAR16 | VAR17);
			if (VAR24)
				FUN12(&VAR4->VAR15, VAR25);
			FUN13(VAR4->VAR15 & VAR22);
			FUN14(VAR4);
			goto VAR14;
		}

		FUN3(&VAR26->VAR27);
		FUN3(&VAR4->VAR9);

		
		VAR4->VAR15 &= ~VAR28;
		VAR4->VAR15 |= VAR16;
		FUN15(VAR26, VAR4->VAR10);
		VAR3->VAR29 = VAR30;

		FUN13(!FUN16(&VAR3->VAR31));
		FUN17(&VAR3->VAR31);

		FUN7(&VAR4->VAR9);
		FUN7(&VAR26->VAR27);
	} else {
		
		if (!FUN18(VAR3)) {
			FUN4(VAR4);
			VAR8 = -VAR13;
			goto VAR14;
		}

		
		FUN7(&VAR4->VAR9);
		FUN8();
		FUN19(VAR4);
	}

	if (VAR1 != 0)
		FUN20(VAR4, VAR1);

	if (!(VAR19 & VAR23))
		FUN21(VAR4, VAR32 | VAR33);
	FUN5(VAR6, VAR34);

	return 0;

VAR14:
	FUN7(&VAR4->VAR9);
	FUN8();
	return VAR8;
}