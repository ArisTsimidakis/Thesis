FUN1(VAR1)
{
	double VAR2[6];
	double VAR3[6];
	double VAR4[6];

	VAR5 **VAR6;
	VAR5 *VAR7;
	VAR5 *VAR8;
	int VAR9, VAR10;

	if (FUN2(FUN3() VAR11, "", &VAR7, &VAR8) == VAR12)  {
		return;
	}

	if (((VAR10 = FUN4(FUN5(VAR7))) != 6) || (VAR10 = FUN4(FUN5(VAR8))) != 6) {
		FUN6(NULL VAR11, VAR13, "");
		VAR14;
	}

	for (VAR9 = 0; VAR9 < 6; VAR9++) {
		if (FUN7(FUN5(VAR7), VAR9, (void **) &VAR6) == VAR15) {
			switch (FUN8(VAR6)) {
				case VAR16:
					VAR2[VAR9]  = FUN9(VAR6);
					break;
				case VAR17:
 					VAR2[VAR9] = FUN10(VAR6);
 					break;
 				case VAR18:

					FUN11(VAR6);

					VAR2[VAR9] = FUN10(VAR6);














 					break;
 				default:
 					FUN6(NULL VAR11, VAR13, "", VAR9);
					VAR14;
			}
		}
		if (FUN7(FUN5(VAR8), VAR9, (void **) &VAR6) == VAR15) {
			switch (FUN8(VAR6)) {
				case VAR16:
					VAR3[VAR9]  = FUN9(VAR6);
					break;
				case VAR17:
 					VAR3[VAR9] = FUN10(VAR6);
 					break;
 				case VAR18:

					FUN11(VAR6);

					VAR3[VAR9] = FUN10(VAR6);














 					break;
 				default:
 					FUN6(NULL VAR11, VAR13, "", VAR9);
					VAR14;
			}
		}
	}

	if (FUN12 (VAR4, VAR2, VAR3) != VAR19) {
		VAR14;
	}

	FUN13(VAR20);
	for (VAR9 = 0; VAR9 < 6; VAR9++) {
		FUN14(VAR20, VAR9, VAR4[VAR9]);
	}
}