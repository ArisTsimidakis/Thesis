FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	int VAR5;
	unsigned int VAR6;
	struct VAR7 *VAR8;
	struct VAR9 *VAR10;
	struct VAR11 *VAR12;
	char   *VAR13;
	struct VAR14 *VAR15;
#ifdef VAR16
	int VAR17 = 0;
#endif

	VAR5 = FUN2(&VAR2->VAR18, "", VAR19);
	if (VAR5)
		return VAR5;

#ifdef VAR16
VAR20:
	
	if (VAR17) {
		if (VAR10)
			FUN3(VAR10);
		else if (VAR8)
			FUN4(VAR8);

		FUN5(VAR6);
	}
#endif
	VAR5 = 0;
	VAR10 = NULL;
	VAR8 = NULL;
	VAR12 = NULL;
	VAR13 = NULL;
	VAR15 = NULL;

	VAR6 = FUN6();

	
	VAR12 = FUN7(VAR4);
	if (FUN8(VAR12)) {
		VAR5 = FUN9(VAR12);
		FUN10(&VAR2->VAR18);
		goto VAR21;
	}

	
	VAR8 = FUN11(VAR12, VAR4);
	if (FUN8(VAR8)) {
		VAR5 = FUN9(VAR8);
		VAR8 = NULL;
		goto VAR22;
	}

	
	VAR10 = FUN12(VAR8, VAR4);
	if (FUN8(VAR10)) {
		VAR5 = FUN9(VAR10);
		VAR10 = NULL;
		goto VAR23;
	}

	
	if (FUN13(VAR10->VAR8)) {
		
		FUN14(VAR6, VAR10, VAR2, VAR4);
		if ((VAR10->VAR8->VAR12->VAR24 == VAR25) &&
		    (FUN15(VAR10->VAR26.VAR27) &
		     VAR28)) {
			VAR5 = -VAR29;
			goto VAR22;
		}
	} else
		VAR10->VAR30 = 0; 

	
	if (!VAR10->VAR31 && VAR12->VAR32->VAR33)
		VAR12->VAR32->FUN16(VAR6, VAR10);

	VAR2->VAR34 = VAR12->VAR32->FUN17(VAR10, VAR4);
	VAR2->VAR35 = VAR12->VAR32->FUN18(VAR10, VAR4);

	
	VAR2->VAR18.VAR36 = VAR2->VAR35 / VAR37;

VAR23:
#ifdef VAR16
	
	if (VAR17 == 0) {
		int VAR38 = FUN19(VAR6, VAR8, VAR4, VAR2,
						false);
		if (!VAR38) {
			VAR17++;
			goto VAR20;
		}
	}
#endif

	
	if (!VAR5 && VAR10) {
		if (!VAR12->VAR32->VAR39) {
			VAR5 = -VAR40;
			goto VAR22;
		}
		
		VAR13 = FUN20(VAR4, VAR2, VAR10);
		if (VAR13 == NULL) {
			VAR5 = -VAR41;
			goto VAR22;
		}
		VAR5 = VAR12->VAR32->FUN21(VAR6, VAR10, VAR2,
						     VAR13);
		if (VAR5 != 0 && VAR5 != -VAR42) {
			FUN22(VAR13);
			goto VAR22;
		}
		FUN22(VAR13);
	}

	
	if (VAR5 == -VAR42) {
#ifdef VAR16
		if (VAR17 > VAR43) {
			
			VAR5 = -VAR44;
			goto VAR22;
		}

		VAR5 = FUN19(VAR6, VAR8, VAR4, VAR2, true);

		if (!VAR5) {
			VAR17++;
			goto VAR20;
		}
		goto VAR22;
#else 
		VAR5 = -VAR45;
#endif
	}

	if (VAR5)
		goto VAR22;

	
	VAR15 = FUN23(sizeof *VAR15, VAR46);
	if (VAR15 == NULL) {
		VAR5 = -VAR41;
		goto VAR22;
	}

	VAR15->VAR47 = VAR8->VAR48;
	VAR15->VAR49 = VAR10;
	VAR15->VAR50 = VAR51;
	FUN24(VAR52, &VAR15->VAR53);
	FUN24(VAR54, &VAR15->VAR53);

	VAR2->VAR55 = VAR15;
	FUN25(&VAR2->VAR56);
	FUN26(&VAR2->VAR57, VAR15);
	FUN27(&VAR2->VAR56);

	FUN28(VAR58, &VAR2->VAR59,
				VAR60);

VAR22:
	
	if (VAR5) {
		
		
		if (VAR10)
			FUN3(VAR10);
		else if (VAR8)
			FUN4(VAR8);
		else
			FUN29(VAR12);
		FUN10(&VAR2->VAR18);
	}

VAR21:
	FUN5(VAR6);
	return VAR5;
}