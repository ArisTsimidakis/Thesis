int FUN1(
	u8 VAR1,
	u8 VAR2,
	char *VAR3,
	u32 VAR4,
	struct VAR5 *VAR6)
{
	struct VAR7 *VAR8 = VAR6->VAR8;
	char *VAR9, *VAR10 = NULL, *VAR11 = NULL;

	VAR9 = FUN2(VAR4 + 1, VAR12);
	if (!VAR9) {
		FUN3("");
		return -1;
	}

	memcpy(VAR9, VAR3, VAR4);
	VAR9[VAR4] = '';
	VAR10 = VAR9;
	VAR11 = (VAR10 + VAR4);

	while (VAR10 < VAR11) {
		char *VAR13, *VAR14;
		struct VAR15 *VAR16;

		if (FUN4(VAR10, &VAR13, &VAR14) < 0) {
			FUN5(VAR9);
			return -1;
		}

		FUN6("", VAR13, VAR14);
 
 		if (VAR1 & VAR17) {
 			if (FUN7(VAR13) > 0) {

				char *VAR18 = VAR13 + strlen(VAR13);

				*VAR18 = '';
 				FUN5(VAR9);
 				return 1;
 			}
		}

		VAR16 = FUN8(VAR13, VAR1, VAR2, VAR8);
		if (!VAR16) {
			if (FUN9(VAR13,
					VAR14, VAR8) < 0) {
				FUN5(VAR9);
				return -1;
			}
			VAR10 += strlen(VAR13) + strlen(VAR14) + 2;
			continue;
		}
		if (FUN10(VAR16, VAR14) < 0) {
			FUN5(VAR9);
			return -1;
		}

		VAR10 += strlen(VAR13) + strlen(VAR14) + 2;

		if (FUN11(VAR16)) {
			if (FUN12(VAR16, VAR14) < 0) {
				FUN5(VAR9);
				return -1;
			}
			FUN13(VAR16);
		} else {
			if (FUN14(VAR16, VAR14, VAR6) < 0) {
				FUN5(VAR9);
				return -1;
			}
			FUN15(VAR16);
		}
	}

	FUN5(VAR9);
	return 0;
}