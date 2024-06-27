int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
	int VAR4 = 0, VAR5;
	int VAR6 = 0;
	struct VAR7 *VAR7 = FUN2(VAR1);
	struct VAR8 *VAR9 = VAR7->VAR10;
	struct VAR11 *VAR12 = FUN3(VAR9);
	struct VAR13 *VAR14 = NULL;
	VAR15 *VAR16 = NULL;
	struct VAR17 *VAR18[VAR19] = { };
	int VAR20;
	int VAR21;
	struct ocfs2_lock_holder VAR22;

	FUN4(VAR7, VAR1,
			    (unsigned long long)FUN5(VAR7)->VAR23,
			    VAR1->VAR24.VAR25, VAR1->VAR24.VAR26,
			    VAR3->VAR27, VAR3->VAR28,
			    FUN6(&VAR29, VAR3->VAR30),
			    FUN7(&VAR29, VAR3->VAR31));

	
	if (FUN8(VAR7->VAR32))
		VAR3->VAR27 &= ~VAR33;

#define FUN9 (VAR34 | VAR35 | VAR36 | VAR33 \
			   | VAR37 | VAR38 | VAR39)
	if (!(VAR3->VAR27 & VAR40))
		return 0;

	VAR4 = FUN10(VAR1, VAR3);
	if (VAR4)
		return VAR4;

	if (FUN11(VAR7, VAR3)) {
		VAR4 = FUN12(VAR7);
		if (VAR4)
			return VAR4;
 	}
 	VAR5 = FUN13(VAR7->VAR32) && VAR3->VAR27 & VAR33;
 	if (VAR5) {














 		VAR4 = FUN14(VAR7, 1);
 		if (VAR4 < 0) {
 			FUN15(VAR4);
			goto VAR41;
		}
	}

	VAR21 = FUN16(VAR7, &VAR14, 1, &VAR22);
	if (VAR21 < 0) {
		VAR4 = VAR21;
		goto VAR42;
	} else if (VAR21) {
		
		FUN17(VAR43, "");
		FUN18();
	}
	VAR6 = 1;

	if (VAR5) {
		VAR4 = FUN19(VAR7, VAR3->VAR44);
 		if (VAR4)
 			goto VAR45;
 

		FUN20(VAR7);


 		if (FUN21(VAR7) >= VAR3->VAR44) {
 			if (FUN22(VAR7)) {
 				VAR4 = FUN23(VAR7,
								      VAR3->VAR44);
				if (VAR4)
					goto VAR45;
			}
			VAR4 = FUN24(VAR7, VAR14, VAR3->VAR44);
		} else
			VAR4 = FUN25(VAR7, VAR14, VAR3->VAR44);
		if (VAR4 < 0) {
			if (VAR4 != -VAR46)
				FUN15(VAR4);
			VAR4 = -VAR46;
			goto VAR45;
		}
	}

	if ((VAR3->VAR27 & VAR38 && !FUN26(VAR3->VAR30, VAR7->VAR47)) ||
	    (VAR3->VAR27 & VAR37 && !FUN27(VAR3->VAR31, VAR7->VAR48))) {
		
		if (VAR3->VAR27 & VAR38 && !FUN26(VAR3->VAR30, VAR7->VAR47)
		    && FUN28(VAR9,
		    VAR49)) {
			VAR18[VAR50] = FUN29(VAR9, FUN30(VAR3->VAR30));
			if (FUN31(VAR18[VAR50])) {
				VAR4 = FUN32(VAR18[VAR50]);
				goto VAR45;
			}
		}
		if (VAR3->VAR27 & VAR37 && !FUN27(VAR3->VAR31, VAR7->VAR48)
		    && FUN28(VAR9,
		    VAR51)) {
			VAR18[VAR52] = FUN29(VAR9, FUN33(VAR3->VAR31));
			if (FUN31(VAR18[VAR52])) {
				VAR4 = FUN32(VAR18[VAR52]);
				goto VAR45;
			}
		}
		VAR16 = FUN34(VAR12, VAR53 +
					   2 * FUN35(VAR9));
		if (FUN31(VAR16)) {
			VAR4 = FUN32(VAR16);
			FUN15(VAR4);
			goto VAR45;
		}
		VAR4 = FUN36(VAR7, VAR18);
		if (VAR4 < 0)
			goto VAR54;
	} else {
		VAR16 = FUN34(VAR12, VAR53);
		if (FUN31(VAR16)) {
			VAR4 = FUN32(VAR16);
			FUN15(VAR4);
			goto VAR45;
		}
	}

	FUN37(VAR7, VAR3);
	FUN38(VAR7);

	VAR4 = FUN39(VAR16, VAR7, VAR14);
	if (VAR4 < 0)
		FUN15(VAR4);

VAR54:
	FUN40(VAR12, VAR16);
VAR45:
	if (VAR4 && VAR6) {
		FUN41(VAR7, 1, &VAR22, VAR21);
		VAR6 = 0;
	}
VAR42:
	if (VAR5)
		FUN42(VAR7, 1);
VAR41:

	
	for (VAR20 = 0; VAR20 < VAR55; VAR20++)
		FUN43(VAR18[VAR20]);

	if (!VAR4 && VAR3->VAR27 & VAR39) {
		VAR4 = FUN44(VAR7, VAR14);
		if (VAR4 < 0)
			FUN15(VAR4);
	}
	if (VAR6)
		FUN41(VAR7, 1, &VAR22, VAR21);

	FUN45(VAR14);
	return VAR4;
}