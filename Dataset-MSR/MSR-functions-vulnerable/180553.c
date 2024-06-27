static void FUN1(VAR1, int VAR2) 
{
	struct VAR3 *VAR4;
	VAR5 *VAR6 = FUN2();

	struct zip_stat VAR7;
	struct VAR8 *VAR9;

	zend_long VAR10 = -1;
	zend_long VAR11 = 0;
	zend_long VAR12 = 0;

	VAR13 *VAR14;
	VAR13 *VAR15;

	int VAR16 = 0;

	if (!VAR6) {
		VAR17;
	}

	FUN3(VAR4, VAR6);

	if (VAR2 == 1) {
		if (FUN4(FUN5(), "", &VAR14, &VAR12, &VAR11) == VAR18) {
			return;
		}
		FUN6(VAR4, FUN7(VAR14), FUN8(VAR14), VAR11, VAR7);
	} else {
		if (FUN4(FUN5(), "", &VAR10, &VAR12, &VAR11) == VAR18) {
			return;
		}
		FUN9(VAR4, VAR10, 0, VAR7);
	}

	if (VAR7.VAR19 < 1) {
		FUN10();
	}

	if (VAR12 < 1) {
		VAR12 = VAR7.VAR19;
	}
	if (VAR10 >= 0) {
		VAR9 = FUN11(VAR4, VAR10, VAR11);
	} else {
		VAR9 = FUN12(VAR4, FUN7(VAR14), VAR11);
	}

	if (VAR9 == NULL) {
 		VAR17;
 	}
 

	VAR15 = FUN13(VAR12, 0);


 	VAR16 = FUN14(VAR9, FUN7(VAR15), FUN8(VAR15));
 	if (VAR16 < 1) {
 		FUN15(VAR15);
		FUN10();
	}

	FUN16(VAR9);
	FUN7(VAR15)[VAR16] = '';
	FUN8(VAR15) = VAR16;
	FUN17(VAR15);
}