int FUN1(struct VAR1 *VAR2, struct socket *VAR3,
		  struct VAR4 *VAR5, size_t VAR6, int VAR7)
{
	struct VAR8 *VAR9;
	struct VAR10 *VAR11 = NULL, *VAR12 = NULL;
	struct VAR13 *VAR14 = FUN2(VAR3->VAR15);
	struct VAR16 *VAR17;
	long VAR18;
	int copy, VAR19, VAR20, VAR21, VAR22 = 0;
	u32 VAR23;

	FUN3(VAR24);

	FUN4("", VAR6, VAR7);

	if (VAR7 & (VAR25 | VAR26))
		return -VAR27;

	VAR20 = VAR5->VAR28 & VAR29 ? 4 : sizeof(unsigned long);

	VAR18 = FUN5(&VAR14->VAR15, VAR7 & VAR30);
	VAR5->VAR28 |= VAR31;

	FUN6(&VAR14->VAR15);

	for (;;) {
		
		if (FUN7(&VAR14->VAR32)) {
			if (VAR22)
				goto VAR33;
			if (VAR14->VAR15.VAR34 != VAR35) {
				FUN8(&VAR14->VAR15);
				if (VAR12)
					FUN9(VAR12);
				return -VAR36;
			}
		}

		
		VAR17 = FUN10(&VAR14->VAR15.VAR37);
		if (!VAR17) {
			
			if (VAR22 &&
			    (VAR5->VAR28 & VAR38 || VAR18 == 0))
				goto VAR33;

			
			FUN8(&VAR14->VAR15);
			FUN11(FUN12(&VAR14->VAR15), &VAR24,
						  VAR39);
			VAR19 = FUN13(&VAR14->VAR15);
			if (VAR19)
				goto VAR40;

			if (FUN14(&VAR14->VAR15.VAR37)) {
				if (FUN15(VAR41))
					goto VAR42;
				VAR18 = FUN16(VAR18);
			}
			FUN17(FUN12(&VAR14->VAR15), &VAR24);
			FUN6(&VAR14->VAR15);
			continue;
		}

	VAR43:
		VAR9 = FUN18(VAR17);
		VAR11 = VAR9->VAR11;
		FUN19(VAR11 != NULL);

		FUN20("", VAR44[VAR9->VAR45.VAR46]);

		
		FUN21(&VAR11->VAR47);
		FUN22(&VAR11->VAR47);

		if (FUN23(VAR48, &VAR11->VAR7)) {
			FUN20("");
			if (FUN24(&VAR14->VAR15.VAR37) != VAR17)
				FUN25();
			FUN26(VAR17);
			continue;
		}

		
		if (VAR12) {
			FUN20("");
			if (VAR11 != VAR12 ||
			    VAR17->VAR49 != VAR50) {
				FUN8(&VAR14->VAR15);
				FUN9(VAR12);
				_leave("", VAR22);
				return VAR22;
			}
		}

		FUN27(VAR11);
 
 		
 		if (!VAR12) {

			if (VAR5->VAR51 && VAR5->VAR52 > 0)






 				memcpy(VAR5->VAR51,

				       &VAR11->VAR53->VAR54->VAR55->VAR56,

				       sizeof(VAR11->VAR53->VAR54->VAR55->VAR56));






 			FUN28(VAR5, &VAR14->VAR15, VAR17);
 		}
 
		
		if (VAR17->VAR49 != VAR50)
			goto VAR57;

		FUN20("",
		       FUN29(VAR9->VAR45.VAR58), VAR17->VAR6, VAR9->VAR21);

		if (!VAR12) {
			
			VAR19 = FUN30(VAR5, VAR59, VAR60,
				       VAR20, &VAR11->VAR61);
			if (VAR19 < 0)
				goto VAR62;
			FUN19(FUN23(VAR63, &VAR11->VAR7));
		}

		FUN31(FUN29(VAR9->VAR45.VAR58), >=, VAR11->VAR64);
		FUN31(FUN29(VAR9->VAR45.VAR58), <=, VAR11->VAR64 + 1);
		VAR11->VAR64 = FUN29(VAR9->VAR45.VAR58);

		FUN31(FUN29(VAR9->VAR45.VAR58), >, VAR11->VAR65);

		VAR21 = VAR9->VAR21;
		copy = VAR17->VAR6 - VAR21;
		if (copy > VAR6 - VAR22)
			copy = VAR6 - VAR22;

		if (VAR17->VAR66 == VAR67) {
			VAR19 = FUN32(VAR17, VAR21,
						      VAR5->VAR68, copy);
		} else {
			VAR19 = FUN33(VAR17, VAR21,
							       VAR5->VAR68);
			if (VAR19 == -VAR69)
				goto VAR70;
		}

		if (VAR19 < 0)
			goto VAR62;

		
		FUN20("", copy, VAR22);

		VAR21 += copy;
		VAR22 += copy;

		if (!(VAR7 & VAR38))
			VAR9->VAR21 = VAR21;

		if (VAR9->VAR21 < VAR17->VAR6) {
			FUN20("");
			FUN31(VAR22, ==, VAR6);
			break;
		}

		
		if (VAR9->VAR45.VAR7 & VAR71) {
			FUN20("");
			if (VAR11->VAR53->VAR72) {
				 
				VAR19 = VAR22;
				goto VAR73;
			}

			
			if (!(VAR7 & VAR38)) {
				FUN20("");
				if (FUN24(&VAR14->VAR15.VAR37) !=
				    VAR17)
					FUN25();
				FUN26(VAR17);
			}
			VAR5->VAR28 &= ~VAR31;
			break;
		}

		
		FUN20("");
		if (!VAR12)
			VAR12 = VAR9->VAR11;
		else
			FUN9(VAR11);
		VAR11 = NULL;

		if (VAR7 & VAR38) {
			FUN20("");
			VAR17 = VAR17->VAR74;
			if (VAR17 == (struct VAR16 *) &VAR14->VAR15.VAR37)
				break;
			goto VAR43;
		}

		FUN20("");
		if (FUN24(&VAR14->VAR15.VAR37) != VAR17)
			FUN25();
		FUN26(VAR17);
	}

	
	FUN20("");
VAR33:
	FUN8(&VAR14->VAR15);
	if (VAR11)
		FUN9(VAR11);
	if (VAR12)
		FUN9(VAR12);
	_leave("", VAR22);
	return VAR22;

	
VAR57:
	FUN20("");

	if (VAR17->VAR49 == VAR75) {
		FUN20("");
		VAR19 = FUN30(VAR5, VAR59, VAR76, 0, &VAR23);
		if (VAR19 < 0)
			goto VAR62;
		if (!(VAR7 & VAR38)) {
			if (FUN24(&VAR14->VAR15.VAR37) != VAR17)
				FUN25();
			FUN26(VAR17);
		}
		goto VAR33;
	}

	VAR19 = FUN30(VAR5, VAR59, VAR60,
		       VAR20, &VAR11->VAR61);
	if (VAR19 < 0)
		goto VAR62;
	FUN19(FUN23(VAR63, &VAR11->VAR7));

	switch (VAR17->VAR49) {
	case VAR50:
		FUN25();
	case VAR77:
		VAR19 = FUN30(VAR5, VAR59, VAR78, 0, &VAR23);
		break;
	case VAR79:
		VAR19 = FUN30(VAR5, VAR59, VAR80, 0, &VAR23);
		break;
	case VAR81:
		VAR23 = VAR11->VAR23;
		VAR19 = FUN30(VAR5, VAR59, VAR82, 4, &VAR23);
		break;
	case VAR83:
		FUN20("", VAR9->VAR84);
		VAR23 = VAR9->VAR84;
		VAR19 = FUN30(VAR5, VAR59, VAR85, 4, &VAR23);
		break;
	case VAR86:
		FUN20("", VAR9->VAR84);
		VAR23 = VAR9->VAR84;
		VAR19 = FUN30(VAR5, VAR59, VAR87, 4,
			       &VAR23);
		break;
	default:
		FUN25();
		break;
	}

	if (VAR19 < 0)
		goto VAR62;

VAR73:
	FUN20("");
	VAR5->VAR28 &= ~VAR31;
	VAR5->VAR28 |= VAR88;

	if (!(VAR7 & VAR38)) {
		FUN34("", VAR17);
		if (FUN24(&VAR14->VAR15.VAR37) != VAR17)
			FUN25();
		FUN26(VAR17);
		FUN35(VAR14, VAR11);
	}

	FUN8(&VAR14->VAR15);
	FUN9(VAR11);
	if (VAR12)
		FUN9(VAR12);
	_leave("", VAR19);
	return VAR19;

VAR62:
	FUN20("");
	FUN8(&VAR14->VAR15);
	FUN9(VAR11);
	if (VAR12)
		FUN9(VAR12);
	_leave("", VAR19);
	return VAR19;

VAR70:
	FUN20("");
	FUN8(&VAR14->VAR15);
	if (VAR12)
		FUN9(VAR12);
	FUN36(VAR17);
	FUN37(&VAR14->VAR15, VAR17, VAR7);
	FUN9(VAR11);
	return -VAR89;

VAR42:
	VAR19 = FUN38(VAR18);
VAR40:
	FUN17(FUN12(&VAR14->VAR15), &VAR24);
	if (VAR12)
		FUN9(VAR12);
	if (VAR22)
		VAR22 = VAR19;
	_leave("", VAR22, VAR19);
	return VAR22;

}