FUN1(VAR1)
{
	VAR2 *VAR3, *VAR4, *VAR5, *VAR6, *VAR7 = NULL;
	VAR8 *VAR9;
	VAR10 **VAR11;
	VAR12 ** VAR13;	
	int VAR14, VAR15, VAR16, *VAR17, VAR18, VAR19;
	unsigned char VAR20[VAR21 + 1], *VAR22 = NULL, **VAR23;
	char * VAR24;
	size_t VAR25;
	char *VAR26 =NULL;
	size_t VAR27 = 0;
	const VAR28 *VAR29;
	VAR30 *VAR31;

	if (FUN2(FUN3(), "", &VAR24, &VAR25,
				&VAR5, &VAR6, &VAR3, &VAR26, &VAR27, &VAR7) == VAR32) {
		return;
	}
	VAR9 = FUN4(VAR3);
	VAR18 = VAR9 ? FUN5(VAR9) : 0;
	if (!VAR18) {
		FUN6(NULL, VAR33, "");
		VAR34;
	}

	FUN7(VAR25, VAR24);

	if (VAR26) {
		VAR29 = FUN8(VAR26);
		if (!VAR29) {
			FUN6(NULL, VAR33, "");
			VAR34;
		}
	} else {
		VAR29 = FUN9();
	}

	VAR19 = FUN10(VAR29);
	if (!VAR7 && VAR19 > 0) {
		FUN6(NULL, VAR33,
				"");
		VAR34;
	}

	VAR11 = FUN11(VAR18, sizeof(*VAR11), 0);
	VAR17 = FUN11(VAR18, sizeof(*VAR17), 0);
	VAR23 = FUN11(VAR18, sizeof(*VAR23), 0);
	memset(VAR23, 0, sizeof(*VAR23) * VAR18);
	VAR13 = FUN11(VAR18, sizeof(VAR12*), 0);
	memset(VAR13, 0, sizeof(VAR12*) * VAR18);
	memset(VAR11, 0, sizeof(*VAR11) * VAR18);

	
	VAR14 = 0;
	FUN12(VAR9, VAR4) {
		VAR11[VAR14] = FUN13(VAR4, 1, NULL, 0, 0, &VAR13[VAR14]);
		if (VAR11[VAR14] == NULL) {
			FUN6(NULL, VAR33, "", VAR14+1);
			VAR35;
			goto VAR36;
		}
		VAR23[VAR14] = FUN14(FUN15(VAR11[VAR14]) + 1);
		VAR14++;
	} FUN16();

	VAR31 = FUN17();
	if (VAR31 == NULL || !FUN18(VAR31,VAR29,NULL,NULL)) {
		FUN19(VAR31);
		VAR35;
		goto VAR36;
	}

	
        VAR22 = FUN14(VAR25 + FUN20(VAR31));
        FUN21(VAR31);
 

       if (!FUN22(VAR31, VAR29, VAR23, VAR17, &VAR20[0], VAR11, VAR18) ||


                        !FUN23(VAR31, VAR22, &VAR15, (unsigned char *)VAR24, (int)VAR25) ||
                        !FUN24(VAR31, VAR22 + VAR15, &VAR16)) {
                VAR35;
		FUN25(VAR22);
		FUN19(VAR31);
		goto VAR36;
	}

	if (VAR15 + VAR16 > 0) {
		FUN26(VAR5);
		FUN27(VAR5, FUN28((char*)VAR22, VAR15 + VAR16, 0));
		FUN25(VAR22);

		FUN26(VAR6);
		FUN29(VAR6);
		for (VAR14=0; VAR14<VAR18; VAR14++) {
			VAR23[VAR14][VAR17[VAR14]] = '';
			FUN30(VAR6, (const char*)VAR23[VAR14], VAR17[VAR14]);
			FUN25(VAR23[VAR14]);
			VAR23[VAR14] = NULL;
		}

		if (VAR7) {
			FUN26(VAR7);
			VAR20[VAR19] = '';
			FUN27(VAR7, FUN28((char*)VAR20, VAR19, 0));
		}
	} else {
		FUN25(VAR22);
	}
	FUN31(VAR15 + VAR16);
	FUN19(VAR31);

VAR36:
	for (VAR14=0; VAR14<VAR18; VAR14++) {
		if (VAR13[VAR14] == NULL && VAR11[VAR14] != NULL) {
			FUN32(VAR11[VAR14]);
		}
		if (VAR23[VAR14]) {
			FUN25(VAR23[VAR14]);
		}
	}
	FUN25(VAR23);
	FUN25(VAR17);
	FUN25(VAR11);
	FUN25(VAR13);
}