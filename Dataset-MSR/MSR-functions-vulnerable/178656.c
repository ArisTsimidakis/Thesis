FUN1(struct VAR1 *VAR1, VAR2 *VAR3, VAR4 *VAR5)
{
	struct VAR6 *VAR7 = VAR1->VAR7;
	u_int VAR8, VAR9;
	VAR2 *VAR10;
	u_int VAR11, VAR12 = 0, VAR13 = 0, VAR14;
	struct VAR15 *VAR16   = NULL;
	struct VAR17 *VAR18   = NULL;
	struct VAR19 *VAR20 = NULL;
	int VAR21;

	*VAR3 = VAR22;

	if (VAR7->VAR23)
		return 0;

	if (VAR7->VAR24[VAR25] != NULL) {
		VAR16  = &VAR7->VAR24[VAR25]->VAR16;
		VAR18  = &VAR7->VAR24[VAR25]->VAR18;
		VAR20 = &VAR7->VAR24[VAR25]->VAR20;
		
		if ((VAR13 = FUN2(VAR16->VAR26)) != 0)
			VAR18 = NULL;
	}
	VAR11 = VAR18 && VAR18->VAR27 ? VAR18->VAR28 : 0;
	VAR14 = VAR16 ? VAR16->VAR14 : 8;
	VAR12 = (VAR18 && VAR18->VAR27 && VAR18->VAR29) || VAR13 ? 4 : 0;

	if (VAR12 && VAR7->VAR30 == 0) {
		if (FUN3(VAR7->VAR31,
		    &VAR7->VAR30, VAR7->VAR32.VAR33,
		    FUN4(VAR7->VAR34), FUN5(VAR7->VAR34)) != 0)
			return 0;
		if (VAR7->VAR30 < 1 + 4 ||
		    VAR7->VAR30 > VAR35) {
#ifdef VAR36
			FUN6(VAR7->VAR34, VAR37);
#endif
			FUN7("", VAR7->VAR30);
			if ((VAR21 = FUN8(VAR1, "")) != 0)
				return VAR21;
			return VAR38;
		}
		FUN9(VAR7->VAR39);
	} else if (VAR7->VAR30 == 0) {
		
		if (FUN5(VAR7->VAR34) < VAR14)
			return 0;
		FUN9(VAR7->VAR39);
		if ((VAR21 = FUN10(VAR7->VAR39, VAR14,
		    &VAR10)) != 0)
			goto VAR40;
		if ((VAR21 = FUN11(VAR7->VAR31,
		    VAR7->VAR41.VAR33, VAR10, FUN4(VAR7->VAR34),
		    VAR14, 0, 0)) != 0)
			goto VAR40;
		VAR7->VAR30 = FUN12(FUN4(VAR7->VAR39));
		if (VAR7->VAR30 < 1 + 4 ||
		    VAR7->VAR30 > VAR35) {
#ifdef VAR36
			fprintf(VAR37, "");
			FUN6(VAR7->VAR34, VAR37);
			fprintf(VAR37, "");
			FUN6(VAR7->VAR39, VAR37);
#endif
			FUN7("", VAR7->VAR30);
			return FUN13(VAR1, VAR16, VAR18, 0,
			    VAR35);
		}
		if ((VAR21 = FUN14(VAR7->VAR34, VAR14)) != 0)
			goto VAR40;
	}
	FUN15(FUN16("", VAR7->VAR30+4));

	if (VAR12) {
		
		VAR9 = VAR7->VAR30;
	} else {
		
		VAR9 = 4 + VAR7->VAR30 - VAR14;
	}
	FUN15(FUN16(""
	    "", VAR14, VAR9, VAR11, VAR13, VAR12));
	if (VAR9 % VAR14 != 0) {
		FUN7("",
		    VAR9, VAR14, VAR9 % VAR14);
		return FUN13(VAR1, VAR16, VAR18, 0,
		    VAR35 - VAR14);
	}
	
	if (FUN5(VAR7->VAR34) < VAR12 + VAR9 + VAR13 + VAR11)
		return 0; 
#ifdef VAR36
	fprintf(VAR37, "");
	FUN6(VAR7->VAR34, VAR37);
#endif
	
	if (VAR18 && VAR18->VAR27 && VAR18->VAR29) {
		if ((VAR21 = FUN17(VAR18, VAR7->VAR32.VAR33,
		    FUN4(VAR7->VAR34), VAR12 + VAR9,
		    FUN4(VAR7->VAR34) + VAR12 + VAR9 + VAR13,
		    VAR11)) != 0) {
			if (VAR21 == VAR42)
				FUN7("");
			goto VAR40;
		}
	}
	if ((VAR21 = FUN10(VAR7->VAR39, VAR12 + VAR9,
	    &VAR10)) != 0)
		goto VAR40;
	if ((VAR21 = FUN11(VAR7->VAR31, VAR7->VAR32.VAR33, VAR10,
	    FUN4(VAR7->VAR34), VAR9, VAR12, VAR13)) != 0)
		goto VAR40;
	if ((VAR21 = FUN14(VAR7->VAR34, VAR12 + VAR9 + VAR13)) != 0)
		goto VAR40;
	if (VAR18 && VAR18->VAR27) {
		
		if (!VAR18->VAR29 && (VAR21 = FUN17(VAR18, VAR7->VAR32.VAR33,
		    FUN4(VAR7->VAR39),
		    FUN5(VAR7->VAR39),
		    FUN4(VAR7->VAR34), VAR11)) != 0) {
			if (VAR21 != VAR42)
				goto VAR40;
			FUN7("");
			if (VAR9 > VAR35)
				return VAR43;
			return FUN13(VAR1, VAR16, VAR18,
			    FUN5(VAR7->VAR39),
			    VAR35 - VAR9);
		}
		
		FUN15(FUN16("", VAR7->VAR32.VAR33));
		if ((VAR21 = FUN14(VAR7->VAR34, VAR18->VAR28)) != 0)
			goto VAR40;
	}
	if (VAR5 != NULL)
		*VAR5 = VAR7->VAR32.VAR33;
	if (++VAR7->VAR32.VAR33 == 0)
		FUN7("");
	if (++VAR7->VAR32.VAR44 == 0)
		if (!(VAR1->VAR45 & VAR46))
			return VAR47;
	VAR7->VAR32.VAR48 += (VAR7->VAR30 + 4) / VAR14;
	VAR7->VAR32.VAR49 += VAR7->VAR30 + 4;

	
	VAR8 = FUN4(VAR7->VAR39)[4];
	FUN15(FUN16("", VAR8));
	if (VAR8 < 4)	{
		if ((VAR21 = FUN8(VAR1,
		    "", VAR8)) != 0 ||
		    (VAR21 = FUN18(VAR1)) != 0)
			return VAR21;
		return VAR38;
	}

	
	if ((VAR21 = FUN14(VAR7->VAR39, 4 + 1)) != 0 ||
	    ((VAR21 = FUN19(VAR7->VAR39, VAR8)) != 0))
		goto VAR40;

	FUN15(FUN16("",
	    FUN5(VAR7->VAR39)));
	if (VAR20 && VAR20->VAR27) {
		FUN9(VAR7->VAR50);
		if ((VAR21 = FUN20(VAR1, VAR7->VAR39,
		    VAR7->VAR50)) != 0)
			goto VAR40;
		FUN9(VAR7->VAR39);
		if ((VAR21 = FUN21(VAR7->VAR39,
		    VAR7->VAR50)) != 0)
			goto VAR40;
		FUN15(FUN16("",
		    FUN5(VAR7->VAR39)));
	}
	
	if ((VAR21 = FUN22(VAR7->VAR39, VAR3)) != 0)
		goto VAR40;
	if (FUN23(*VAR3))
		FUN24("", *VAR3);
	if (*VAR3 < VAR51 || *VAR3 >= VAR52) {
		if ((VAR21 = FUN8(VAR1,
		    "", *VAR3)) != 0 ||
		    (VAR21 = FUN18(VAR1)) != 0)
 			return VAR21;
 		return VAR53;
 	}

	if (*VAR3 == VAR54)

		VAR21 = FUN25(VAR1, VAR25);

	else if (*VAR3 == VAR55 && !VAR7->VAR56)


 		VAR21 = FUN26(VAR1);
 	else
 		VAR21 = 0;
	else
		VAR21 = 0;
#ifdef VAR36
	fprintf(VAR37, "", *VAR3);
	FUN6(VAR7->VAR39, VAR37);
#endif
	
	VAR7->VAR30 = 0;

	
	if (FUN27(VAR1, 0)) {
		FUN24("", VAR57);
		if ((VAR21 = FUN28(VAR1)) != 0)
			return VAR21;
	}
 VAR40:
	return VAR21;
}