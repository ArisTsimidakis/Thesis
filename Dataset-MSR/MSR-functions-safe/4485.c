FUN1(VAR1)
{
	size_t VAR2;
	char * VAR3 = NULL, * VAR4 = NULL;
	VAR5 * VAR6 = NULL;
	VAR7 *VAR8 = NULL;
	const char *VAR9 = "";
	zend_long VAR10 = VAR11;

	VAR12 *VAR13 = NULL;
	VAR12 * VAR14 = NULL;
	VAR15 * VAR16 = NULL;
	VAR17 *VAR18=NULL;
	const VAR19 *VAR20;

	if (FUN2(FUN3(), "", &VAR14, &VAR3, &VAR2, &VAR13) == VAR21) {
		return;
	}
	VAR22;

	FUN4(VAR2, VAR3);
	VAR16 = FUN5(VAR14, 0, VAR3, VAR2, 1, &VAR8);

	if (VAR16 == NULL) {
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	if (VAR13 != NULL) {
		if (FUN7(VAR13) == VAR25) {
			VAR10 = FUN8(VAR13);
		} else {
			FUN6(NULL, VAR23, "");
			goto VAR24;
		}
	}
	VAR20 = FUN9(VAR10);

	if (!VAR20) {
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	if ((VAR18 = FUN10()) == NULL) {
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	if (VAR3) {
		if (!FUN11(VAR18->VAR9->VAR3, VAR3, (int)VAR2)) {
			FUN6(NULL, VAR23, "");
			goto VAR24;
		}
	}

	if (!FUN12(VAR18, VAR16)) {
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	if (!FUN13(VAR18, VAR16, VAR20)) {
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	VAR4 = FUN14(VAR18);
	if (!VAR4){
		FUN6(NULL, VAR23, "");
		goto VAR24;
	}

	VAR6 = FUN15(strlen(VAR9) + strlen(VAR4), 0);
	sprintf(FUN16(VAR6), "", VAR9, VAR4);
	FUN17(VAR6) = strlen(FUN16(VAR6));
	FUN18(VAR4);

	FUN19(VAR6);
	goto VAR24;

VAR24:

	if (VAR18 != NULL) {
		FUN20(VAR18);
	}
	if (VAR8 == NULL && VAR16 != NULL) {
		FUN21(VAR16);
	}

	if (VAR6 && FUN17(VAR6) <= 0) {
		VAR22;
	}

	if (VAR8 == NULL && VAR6 != NULL) {
		FUN22(VAR6);
	}
}