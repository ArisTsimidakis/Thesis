static VAR1* FUN1(VAR2* VAR3, VAR4 *VAR5, int VAR6, VAR7 *VAR8, int *use_proxy VAR9)
{
	VAR1 *VAR10;
	VAR2 **VAR11, **VAR12, **VAR13;
	char *VAR14;
	char *VAR15;
	long VAR16;
	int VAR17;
	int VAR18;
	struct timeval VAR19;
	struct VAR20 *VAR21 = NULL;

	if (FUN2(FUN3(VAR3), "", sizeof(""), (void **) &VAR11) == VAR22 &&
	    FUN4(VAR11) == VAR23 &&
	    FUN2(FUN3(VAR3), "", sizeof(""), (void **) &VAR12) == VAR22 &&
	    FUN4(VAR12) == VAR24) {
		VAR14 = FUN5(VAR11);
		VAR17 = FUN6(VAR12);
		*VAR25 = 1;
	} else {
		VAR14 = VAR5->VAR14;
		VAR17 = VAR5->VAR17;
	}
	if (FUN2(FUN3(VAR3), "", sizeof(""), (void **) &VAR13) == VAR22 &&
	    FUN4(VAR13) == VAR24 && FUN6(VAR13) > 0) {
	  VAR19.VAR26 = FUN6(VAR13);
	  VAR19.VAR27 = 0;
		VAR21 = &VAR19;
	}

	VAR18 = FUN7(VAR28);
	FUN7(VAR28) &= ~(VAR29|VAR30|VAR31|VAR32);

	VAR16 = FUN8(&VAR15, 0, "", (VAR6 && !*VAR25)? "" : "", VAR14, VAR17);

	VAR10 = FUN9(VAR15, VAR16,
		VAR33,
		VAR34 | VAR35,
		NULL ,
		VAR21,
		VAR8,
		NULL, NULL);
	FUN10(VAR15);

	
	if (VAR10 && *VAR25 && VAR6) {
		smart_str VAR36 = {0};
		char *VAR37;
		int VAR38;

		FUN11(&VAR36, "");
		FUN12(&VAR36, VAR5->VAR14);
		FUN13(&VAR36, '');
		FUN14(&VAR36, VAR5->VAR17);
		FUN11(&VAR36, "");
		FUN11(&VAR36, "");
		FUN12(&VAR36, VAR5->VAR14);
		if (VAR5->VAR17 != 80) {
			FUN13(&VAR36, '');
			FUN14(&VAR36, VAR5->VAR17);
		}
		FUN11(&VAR36, "");
		FUN15(VAR3, &soap_headers VAR39);
		FUN11(&VAR36, "");
		if (FUN16(VAR10, VAR36.VAR40, VAR36.VAR41) != VAR36.VAR41) {
			FUN17(VAR10);
			VAR10 = NULL;
		}
 	 	FUN18(&VAR36);

 	 	if (VAR10) {
			if (!FUN19(VAR10, &VAR37, &http_header_size VAR39) || VAR37 == NULL) {
				FUN17(VAR10);
				VAR10 = NULL;
			}
			if (VAR37) {
				FUN10(VAR37);
			}
		}
		
		if (VAR10) {
			if (FUN20(VAR10, VAR42, NULL VAR39) < 0 ||
			    FUN21(VAR10, 1 VAR39) < 0) {
				FUN17(VAR10);
				VAR10 = NULL;
			}
		}
	}

	FUN7(VAR28) = VAR18;
	return VAR10;
}