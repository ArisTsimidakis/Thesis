FUN1(
	struct VAR1		*VAR1,
	sector_t		VAR2,
	struct VAR3	*VAR4,
	int			VAR5,
	bool			VAR6,
	bool			VAR7)
{
	struct VAR8	*VAR9 = FUN2(VAR1);
	struct VAR10	*VAR11 = VAR9->VAR12;
	xfs_fileoff_t		VAR13, VAR14;
	int			VAR15 = 0;
	int			VAR16 = 0;
	struct xfs_bmbt_irec	VAR17;
	int			VAR18 = 1;
	xfs_off_t		VAR19;
	ssize_t			VAR20;
	int			new = 0;
	bool			VAR21 = false;
	bool			VAR22 = false;

	FUN3(VAR5 && !VAR6);

	if (FUN4(VAR11))
		return -VAR23;

	VAR19 = (VAR24)VAR2 << VAR1->VAR25;
	FUN5(VAR4->VAR26 >= (1 << VAR1->VAR25));
	VAR20 = VAR4->VAR26;

	if (!VAR5 && VAR19 >= FUN6(VAR1))
		return 0;

	
	VAR16 = FUN7(VAR9);

	FUN5(VAR19 <= VAR11->VAR27->VAR28);
	if (VAR19 + VAR20 > VAR11->VAR27->VAR28)
		VAR20 = VAR11->VAR27->VAR28 - VAR19;
	VAR14 = FUN8(VAR11, (VAR29)VAR19 + VAR20);
	VAR13 = FUN9(VAR11, VAR19);

	if (VAR5 && VAR6 && FUN10(VAR9))
		VAR21 = FUN11(VAR9, VAR19, &VAR17,
					&VAR22);
	if (!VAR21) {
		VAR15 = FUN12(VAR9, VAR13, VAR14 - VAR13,
					&VAR17, &VAR18, VAR30);
		
		if (VAR5 && VAR6 && VAR18 &&
		    VAR17.VAR31 != VAR32 &&
		    VAR17.VAR31 != VAR33 &&
		    !FUN13(&VAR17))
			FUN14(VAR9, VAR13,
					&VAR17);
	}
	FUN5(!VAR22);
 	if (VAR15)
 		goto VAR34;
 








































 	
 	if (VAR5 &&
 	    (!VAR18 ||
	     (VAR17.VAR31 == VAR32 ||
	      VAR17.VAR31 == VAR33) ||
	     (FUN15(VAR1) && FUN13(&VAR17)))) {
		
		if (VAR16 == VAR35)
			FUN16(VAR9, VAR16);

		VAR15 = FUN17(VAR9, VAR19, VAR20,
					       &VAR17, VAR18);
		if (VAR15)
			return VAR15;
		new = 1;

		FUN18(VAR9, VAR19, VAR20,
				FUN13(&VAR17) ? VAR36
						   : VAR37, &VAR17);
	} else if (VAR18) {
		FUN19(VAR9, VAR19, VAR20,
				FUN13(&VAR17) ? VAR36
						   : VAR38, &VAR17);
		FUN20(VAR9, VAR16);
	} else {
		FUN21(VAR9, VAR19, VAR20);
		goto VAR34;
	}

	if (FUN15(VAR1) && VAR5) {
		FUN5(!FUN13(&VAR17));
		
		new = 0;
	}

	
	FUN22(VAR1, VAR2, VAR4, &VAR17, VAR19, VAR20);

	
	if (VAR17.VAR31 != VAR32 &&
	    VAR17.VAR31 != VAR33 &&
	    (VAR5 || !FUN13(&VAR17))) {
		if (VAR5 && VAR6 && !VAR21) {
			VAR15 = FUN23(VAR9, VAR13,
					&VAR17);
			if (VAR15)
				return VAR15;
		}

		FUN24(VAR1, VAR4, &VAR17, VAR19);
		if (FUN13(&VAR17))
			FUN25(VAR4);
		
		if (VAR5) {
			if (VAR7)
				FUN5(!FUN13(&VAR17));
			else
				FUN26(VAR1, VAR4, &VAR17, VAR19,
						VAR21);
		}
	}

	
	VAR4->VAR39 = FUN27(VAR1);

	
	if (VAR5 &&
	    ((!FUN28(VAR4) && !FUN29(VAR4)) ||
	     (VAR19 >= FUN6(VAR1)) ||
 	     (new || FUN13(&VAR17))))
 		FUN30(VAR4);
 

	FUN3(VAR6 && VAR17.VAR31 == VAR33);


 	return 0;
 
 VAR34:
	FUN20(VAR9, VAR16);
	return VAR15;
}