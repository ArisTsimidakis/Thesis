int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR5 = VAR4->VAR5;
	loff_t VAR6;
	unsigned long VAR7;
	int VAR8;
	struct VAR9 *VAR9 = VAR2->VAR10;
	struct VAR11 *VAR11 = FUN2(VAR9);
	struct VAR12 *VAR13 = VAR11->VAR14;
	VAR15 *VAR16;
	VAR17 *VAR18;
	int VAR19 = 0;
 
 	FUN3(VAR11->VAR20);
 	FUN4(VAR2->VAR10);




 	
 	if (FUN5(VAR11->VAR20, VAR21) &&
 	    !FUN6(VAR11) &&
	    !FUN7(VAR11->VAR20)) {
		do {
			VAR8 = FUN8(VAR2, VAR4,
						   VAR22);
		} while (VAR8 == -VAR23 &&
		       FUN9(VAR11->VAR20, &VAR19));
		goto VAR24;
	}

	FUN10(VAR5);
	VAR6 = FUN11(VAR11);
	
	if (VAR5->VAR13 != VAR13 || FUN12(VAR5) > VAR6) {
		FUN13(VAR5);
		VAR8 = VAR25;
		goto VAR26;
	}

	if (VAR5->VAR27 == VAR6 >> VAR28)
		VAR7 = VAR6 & ~VAR29;
	else
		VAR7 = VAR30;
	
	if (FUN14(VAR5)) {
		if (!FUN15(NULL, FUN16(VAR5),
					    0, VAR7, NULL,
					    VAR31)) {
			
			FUN17(VAR5);
			VAR8 = VAR32;
			goto VAR26;
		}
	}
	FUN13(VAR5);
	
	if (FUN18(VAR11))
		VAR18 = VAR33;
	else
		VAR18 = VAR34;
VAR35:
	VAR16 = FUN19(VAR11, VAR36,
				    FUN20(VAR11));
	if (FUN21(VAR16)) {
		VAR8 = VAR37;
		goto VAR26;
	}
	VAR8 = FUN8(VAR2, VAR4, VAR18);
	if (!VAR8 && FUN6(VAR11)) {
		if (FUN15(VAR16, FUN16(VAR5), 0,
			  VAR30, NULL, VAR38)) {
			FUN13(VAR5);
			VAR8 = VAR37;
			FUN22(VAR16);
			goto VAR26;
		}
		FUN23(VAR11, VAR39);
	}
	FUN22(VAR16);
	if (VAR8 == -VAR23 && FUN9(VAR11->VAR20, &VAR19))
		goto VAR35;
 VAR24:
 	VAR8 = FUN24(VAR8);
 VAR26:


 	FUN25(VAR11->VAR20);
 	return VAR8;
 }