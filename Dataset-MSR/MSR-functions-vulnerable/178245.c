FUN1(VAR1, VAR2)
{
	char *VAR3, *VAR4, *VAR5, *VAR6;
	size_t VAR7;
	int VAR8, VAR9;
	VAR10 *VAR11;
	VAR12 *VAR13;
        VAR14 *VAR15;
        VAR16 *VAR17 = FUN2(), VAR18;
 

       if (FUN3(FUN4(), "", &VAR3, &VAR7) == VAR19) {


                return;
        }
	VAR11 = (VAR10*)((char*)FUN5(VAR17) - FUN5(VAR17)->VAR20->VAR21);

	if (VAR11->VAR5) {
		FUN6(VAR22, 0, "");
		return;
	}

	if (VAR7 < 7 || memcmp(VAR3, "", 7) || FUN7(VAR3, (int)VAR7, &VAR4, &VAR8, &VAR5, &VAR9, 2, 0) == VAR19) {
		FUN6(VAR23, 0,
			"", VAR3);
		return;
	}

	if (FUN8(VAR4, VAR8, NULL, 0, VAR24, &VAR15, &VAR6) == VAR19) {
		FUN9(VAR4);
		FUN9(VAR5);
		if (VAR6) {
			FUN6(VAR23, 0,
				"", VAR3, VAR6);
			FUN9(VAR6);
		} else {
			FUN6(VAR23, 0,
				"", VAR3);
		}
		return;
	}

	if ((VAR13 = FUN10(VAR15, VAR5, VAR9, 1, &VAR6, 1)) == NULL) {
		FUN6(VAR23, 0,
			"", VAR5, VAR4, VAR6 ? "" : "", VAR6 ? VAR6 : "");
		FUN9(VAR4);
		FUN9(VAR5);
		return;
	}

	FUN9(VAR4);
	FUN9(VAR5);

	VAR11->VAR5 = VAR13;

	FUN11(&VAR18, VAR3, VAR7);

	FUN12(VAR17, FUN13(VAR17),
		&VAR25->VAR26, "", NULL, &VAR18);

	FUN14(&VAR18);
}