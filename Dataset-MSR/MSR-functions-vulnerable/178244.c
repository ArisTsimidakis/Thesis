FUN1(VAR1, VAR2)
{
	char *VAR3 = NULL;
	VAR4 *VAR5;
	php_stream_statbuf VAR6;
	VAR7 *VAR8;
	char *VAR9, *VAR10;
	size_t VAR11, VAR12;
	int VAR13, VAR14;
	int VAR15;
	VAR16 *VAR17 = NULL;
	zend_bool VAR18 = 0;
 
        FUN2();
 

       if (FUN3(FUN4(), "", &VAR9, &VAR11, &VAR17, &VAR18) == VAR19) {


                return;
        }
 
	VAR5 = FUN5(VAR20->VAR21->VAR22, "", VAR23|VAR24, NULL);

	if (!VAR5) {
		FUN6(VAR25, 0,
			"", VAR20->VAR21->VAR22);
		return;
	}

	FUN7(VAR5);

	if (VAR11 < 1) {
		FUN6(VAR25, 0,
			"");
		return;
	}

	if (VAR11 >= VAR26) {
		char *VAR27 = FUN8(VAR9, 50);
		
		FUN6(VAR25, 0, ""%VAR28...\"", VAR27);
		FUN9(VAR27);
		return;
	}

	if (FUN10(VAR9, &VAR6) < 0) {
		VAR13 = FUN11(VAR9, 0777,  VAR29, NULL);
		if (!VAR13) {
			FUN6(VAR30, 0,
				""%VAR28\"", VAR9);
			return;
		}
	} else if (!(VAR6.VAR31.VAR32 & VAR33)) {
		FUN6(VAR30, 0,
			""%VAR28\"", VAR9);
		return;
	}

	if (VAR17) {
		switch (FUN12(VAR17)) {
			case VAR34:
				goto VAR35;
			case VAR36:
				VAR10 = FUN13(VAR17);
				VAR12 = FUN14(VAR17);
				break;
			case VAR37:
				VAR15 = FUN15(FUN16(VAR17));
				if (VAR15 == 0 ) {
					VAR38;
				}
				for (VAR14 = 0; VAR14 < VAR15; VAR14++) {
					VAR16 *VAR39;
					if ((VAR39 = FUN17(FUN16(VAR17), VAR14)) != NULL) {
						switch (FUN12(VAR39)) {
							case VAR36:
								break;
							default:
								FUN6(VAR25, 0,
									"");
								return;
						}
						if (NULL == (VAR8 = FUN18(&VAR20->VAR21->VAR40, FUN19(VAR39)))) {
							FUN6(VAR41, 0,
								""%VAR28\""%VAR28\"", FUN13(VAR39), VAR20->VAR21->VAR22);
						}
						if (VAR19 == FUN20(VAR18, VAR8, VAR9, VAR11, &VAR3)) {
							FUN6(VAR41, 0,
								""%VAR28\"", VAR20->VAR21->VAR22, VAR3);
							FUN9(VAR3);
							return;
						}
					}
				}
				VAR42;
			default:
				FUN6(VAR25, 0,
					"");
				return;
		}

		if (NULL == (VAR8 = FUN21(&VAR20->VAR21->VAR40, VAR10, VAR12))) {
			FUN6(VAR41, 0,
				""%VAR28\""%VAR28\"", VAR10, VAR20->VAR21->VAR22);
			return;
		}

		if (VAR19 == FUN20(VAR18, VAR8, VAR9, VAR11, &VAR3)) {
			FUN6(VAR41, 0,
				""%VAR28\"", VAR20->VAR21->VAR22, VAR3);
			FUN9(VAR3);
			return;
		}
	} else {
		VAR43 *VAR44;
VAR35:
		VAR44 = VAR20->VAR21;
		
		if (!FUN15(&(VAR44->VAR40))) {
			VAR42;
		}

		FUN22(&VAR44->VAR40, VAR8) {
			if (VAR19 == FUN20(VAR18, VAR8, VAR9, VAR11, &VAR3)) {
				FUN6(VAR41, 0,
					""%VAR28\"", VAR44->VAR22, VAR3);
				FUN9(VAR3);
				return;
			}
		} FUN23();
	}
	VAR42;
}