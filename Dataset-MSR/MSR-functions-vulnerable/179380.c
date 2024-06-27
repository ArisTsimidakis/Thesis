int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;
	struct VAR7 *VAR8 = NULL;
	struct VAR9 *VAR10;
	struct VAR11 *VAR12 = NULL;
	struct VAR13 *VAR14;
	struct VAR15 *VAR16;
	union sctp_addr VAR17;
	union sctp_addr VAR18;
	int VAR19;
	struct VAR20 *VAR21;

	if (VAR2->VAR22!=VAR23)
		goto VAR24;

	FUN2(VAR25);

	if (FUN3(VAR2))
		goto VAR24;

	VAR16 = FUN4(VAR2);

	
	FUN5(VAR2, FUN6(VAR2));
	if (VAR2->VAR26 < sizeof(struct VAR15))
		goto VAR24;
	if (!FUN7(VAR2) && FUN8(VAR2) < 0)
		goto VAR24;

	FUN9(VAR2, sizeof(struct VAR15));

	
	if (VAR2->VAR26 < sizeof(struct VAR27))
		goto VAR24;

	VAR19 = FUN10(FUN11(VAR2)->VAR28);
	VAR21 = FUN12(VAR19);
	if (FUN13(!VAR21))
		goto VAR24;

	
	VAR21->FUN14(&VAR17, VAR2, 1);
	VAR21->FUN14(&VAR18, VAR2, 0);

	
	if (!VAR21->FUN15(&VAR17, NULL, VAR2) ||
	    !VAR21->FUN15(&VAR18, NULL, VAR2))
		goto VAR24;

	VAR6 = FUN16(VAR2, &VAR17, &VAR18, &VAR12);

	if (!VAR6)
		VAR8 = FUN17(&VAR18);

	
	VAR10 = VAR6 ? &VAR6->VAR29 : &VAR8->VAR29;
	VAR4 = VAR10->VAR4;

	
	if (VAR4->VAR30 && (VAR4->VAR30 != VAR21->FUN18(VAR2)))
	{
		if (VAR6) {
			FUN19(VAR6);
			VAR6 = NULL;
		} else {
			FUN20(VAR8);
			VAR8 = NULL;
		}
		VAR4 = FUN21();
		VAR8 = FUN22(VAR4)->VAR8;
		FUN23(VAR8);
		VAR10 = &VAR8->VAR29;
	}

	
	if (!VAR6) {
		if (FUN24(VAR2)) {
			FUN2(VAR31);
			goto VAR32;
		}
	}

	if (!FUN25(VAR4, VAR33, VAR2, VAR19))
		goto VAR32;
	FUN26(VAR2);

	if (FUN27(VAR4, VAR2))
		goto VAR32;

	
	VAR14 = FUN28(VAR2, VAR6, VAR4);
	if (!VAR14)
		goto VAR32;
	FUN29(VAR2)->VAR14 = VAR14;

	
	VAR14->VAR10 = VAR10;

	
	VAR14->VAR34 = VAR16;

	
	FUN30(VAR14, &VAR17, &VAR18);

	
	VAR14->VAR12 = VAR12;

	
 	FUN31(VAR4);
 


























 	if (FUN32(VAR4)) {
 		FUN2(VAR35);
 		FUN33(VAR4, VAR2);
	} else {
		FUN2(VAR36);
		FUN34(&VAR14->VAR10->VAR37, VAR14);
	}

	FUN35(VAR4);

	
	if (VAR6)
		FUN19(VAR6);
	else
		FUN20(VAR8);

	return 0;

VAR24:
	FUN2(VAR38);
	FUN36(VAR2);
	return 0;

VAR32:
	
	if (VAR6)
		FUN19(VAR6);
	else
		FUN20(VAR8);

	goto VAR24;
}