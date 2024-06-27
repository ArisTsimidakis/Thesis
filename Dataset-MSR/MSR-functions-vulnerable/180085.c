int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR3 = FUN2(VAR2->VAR4);
	const struct VAR5 *VAR6;
	const struct VAR7 *VAR8;
	bool VAR9;
	struct VAR10 *VAR11;
	int VAR12;

	if (VAR2->VAR13 != VAR14)
		goto VAR15;

	
	FUN3(VAR3, VAR16);

	if (!FUN4(VAR2, sizeof(struct VAR7)))
		goto VAR15;

	VAR8 = (const struct VAR7 *)VAR2->VAR17;

	if (FUN5(VAR8->VAR18 < sizeof(struct VAR7) / 4))
		goto VAR19;
	if (!FUN4(VAR2, VAR8->VAR18 * 4))
		goto VAR15;

	

	if (FUN6(VAR2, VAR20, VAR21))
		goto VAR22;

	VAR8 = (const struct VAR7 *)VAR2->VAR17;
	VAR6 = FUN7(VAR2);
	
	memmove(&FUN8(VAR2)->VAR23.VAR24, FUN9(VAR2),
		sizeof(struct VAR25));
	FUN10();

	FUN8(VAR2)->VAR26 = FUN11(VAR8->VAR26);
	FUN8(VAR2)->VAR27 = (FUN8(VAR2)->VAR26 + VAR8->VAR28 + VAR8->VAR29 +
				    VAR2->VAR30 - VAR8->VAR18 * 4);
	FUN8(VAR2)->VAR31 = FUN11(VAR8->VAR31);
	FUN8(VAR2)->VAR32 = FUN12(VAR8);
	FUN8(VAR2)->VAR33 = 0;
	FUN8(VAR2)->VAR34 = FUN13(VAR6);
	FUN8(VAR2)->VAR35	 = 0;

VAR36:
	VAR11 = FUN14(&VAR37, VAR2, FUN15(VAR8), VAR8->VAR38,
			       VAR8->VAR39, &VAR9);
	if (!VAR11)
		goto VAR40;

VAR41:
	if (VAR11->VAR42 == VAR43)
		goto VAR44;

	if (VAR11->VAR42 == VAR45) {
		struct VAR46 *VAR47 = FUN16(VAR11);
		struct VAR10 *VAR48;

		VAR11 = VAR47->VAR49;
		if (FUN5(FUN17(VAR11, VAR2))) {
			FUN18(VAR11, VAR2);
			FUN19(VAR47);
			goto VAR15;
		}
		if (FUN5(VAR11->VAR42 != VAR50)) {
			FUN20(VAR11, VAR47);
			goto VAR36;
		}
		
		FUN21(VAR11);
		VAR9 = true;
		VAR48 = FUN22(VAR11, VAR2, VAR47, false);
		if (!VAR48) {
			FUN19(VAR47);
			goto VAR51;
		}
		if (VAR48 == VAR11) {
			FUN19(VAR47);
		} else if (FUN23(VAR11, VAR48, VAR2)) {
			FUN24(VAR48, VAR2);
			goto VAR51;
		} else {
			FUN25(VAR11);
			return 0;
		}
	}
	if (FUN5(VAR6->VAR52 < FUN26(VAR11)->VAR53)) {
		FUN27(VAR3, VAR54);
		goto VAR51;
	}

	if (!FUN28(VAR11, VAR55, VAR2))
		goto VAR51;

	if (FUN17(VAR11, VAR2))
		goto VAR51;
 
 	FUN29(VAR2);
 

	if (FUN30(VAR11, VAR2))


 		goto VAR51;




 
 	VAR2->VAR4 = NULL;
 
	if (VAR11->VAR42 == VAR50) {
		VAR12 = FUN31(VAR11, VAR2);
		goto VAR56;
	}

	FUN32(VAR11);

	FUN33(VAR11);
	FUN34(FUN35(VAR11), VAR2);
	VAR12 = 0;
	if (!FUN36(VAR11)) {
		if (!FUN37(VAR11, VAR2))
			VAR12 = FUN31(VAR11, VAR2);
	} else if (FUN38(VAR11, VAR2)) {
		goto VAR51;
	}
	FUN39(VAR11);

VAR56:
	if (VAR9)
		FUN25(VAR11);

	return VAR12;

VAR40:
	if (!FUN28(NULL, VAR55, VAR2))
		goto VAR15;

	if (FUN40(VAR2)) {
VAR22:
		FUN3(VAR3, VAR57);
VAR19:
		FUN3(VAR3, VAR58);
	} else {
		FUN24(NULL, VAR2);
	}

VAR15:
	
	FUN41(VAR2);
	return 0;

VAR51:
	FUN18(VAR11, VAR2);
	if (VAR9)
		FUN25(VAR11);
	goto VAR15;

VAR44:
	if (!FUN28(NULL, VAR55, VAR2)) {
		FUN42(FUN43(VAR11));
		goto VAR15;
	}

	if (FUN40(VAR2)) {
		FUN42(FUN43(VAR11));
		goto VAR22;
	}
	switch (FUN44(FUN43(VAR11), VAR2, VAR8)) {
	case VAR59: {
		struct VAR10 *VAR60 = FUN45(FUN2(VAR2->VAR4),
							&VAR37, VAR2,
							FUN15(VAR8),
							VAR6->VAR61, VAR8->VAR38,
							VAR6->VAR62, VAR8->VAR39,
							FUN46(VAR2));
		if (VAR60) {
			FUN47(FUN43(VAR11));
			VAR11 = VAR60;
			VAR9 = false;
			goto VAR41;
		}
		
	}
	case VAR63:
		FUN48(VAR11, VAR2);
		break;
	case VAR64:
		FUN24(VAR11, VAR2);
		FUN47(FUN43(VAR11));
		goto VAR15;
	case VAR65:;
	}
	goto VAR15;
}