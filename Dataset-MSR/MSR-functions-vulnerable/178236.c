FUN1(VAR1, copy)
{
	char *VAR2, *VAR3, *VAR4;
	const char *VAR5;
	size_t VAR6, VAR7;
	VAR8 *VAR9, VAR10 = {0}, *VAR11;
	int VAR12 = 0;
 
        FUN2();
 

       if (FUN3(FUN4(), "", &VAR2, &VAR6, &VAR3, &VAR7) == VAR13) {


                return;
        }
 
	if (FUN5(VAR14) && !VAR15->VAR16->VAR17) {
		FUN6(VAR18, 0,
			""%VAR19\""%VAR19\"", VAR2, VAR3);
		VAR20;
	}

	if (VAR6 >= sizeof("")-1 && !memcmp(VAR2, "", sizeof("")-1)) {
		
		FUN6(VAR18, 0,
			""%VAR19\""%VAR19\"", VAR2, VAR3, VAR15->VAR16->VAR21);
		VAR20;
	}

	if (VAR7 >= sizeof("")-1 && !memcmp(VAR3, "", sizeof("")-1)) {
		
		FUN6(VAR18, 0,
			""%VAR19\""%VAR19\"", VAR2, VAR3, VAR15->VAR16->VAR21);
		VAR20;
	}

	if (!FUN7(&VAR15->VAR16->VAR22, VAR2, (VAR23) VAR6) || NULL == (VAR9 = FUN8(&VAR15->VAR16->VAR22, VAR2, (VAR23) VAR6)) || VAR9->VAR24) {
		FUN6(VAR18, 0,
			""%VAR19\""%VAR19\"", VAR2, VAR3, VAR15->VAR16->VAR21);
		VAR20;
	}

	if (FUN7(&VAR15->VAR16->VAR22, VAR3, (VAR23) VAR7)) {
		if (NULL != (VAR11 = FUN8(&VAR15->VAR16->VAR22, VAR3, (VAR23) VAR7)) || !VAR11->VAR24) {
			FUN6(VAR18, 0,
				""%VAR19\""%VAR19\"", VAR2, VAR3, VAR15->VAR16->VAR21);
			VAR20;
		}
	}

	VAR12 = (int)VAR7;
	if (FUN9(&VAR3, &VAR12, &VAR5) > VAR25) {
		FUN6(VAR18, 0,
				""%VAR19\""%VAR19\"", VAR3, VAR5, VAR2, VAR15->VAR16->VAR21);
		VAR20;
	}
	VAR7 = VAR12;

	if (VAR15->VAR16->VAR26) {
		if (VAR13 == FUN10(&(VAR15->VAR16))) {
			FUN6(VAR27, 0, ""%VAR19\"", VAR15->VAR16->VAR21);
			return;
		}
		
		VAR9 = FUN8(&VAR15->VAR16->VAR22, VAR2, (VAR23) VAR6);
	}

	memcpy((void *) &VAR10, VAR9, sizeof(VAR8));

	if (FUN11(VAR10.VAR28) != VAR29) {
		FUN12(&VAR10.VAR28);
		VAR10.VAR30.VAR19 = NULL;
	}

	VAR10.VAR31 = FUN13(VAR3, VAR7);
	VAR10.VAR32 = VAR7;
	VAR10.VAR33 = 0;

	if (VAR9->VAR34 != VAR35) {
		if (VAR13 == FUN14(VAR9, &VAR10, &VAR4)) {
			FUN15(VAR10.VAR31);
			FUN16(VAR10.VAR36);
			FUN6(VAR27, 0, "", VAR4);
			FUN15(VAR4);
			return;
		}
	}

	FUN17(&VAR9->VAR37->VAR22, VAR3, VAR7, &VAR10, sizeof(VAR8));
	VAR15->VAR16->VAR38 = 1;
	FUN18(VAR15->VAR16, 0, 0, 0, &VAR4);

	if (VAR4) {
		FUN6(VAR27, 0, "", VAR4);
		FUN15(VAR4);
	}

	VAR39;
}