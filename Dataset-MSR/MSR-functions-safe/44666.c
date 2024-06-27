static int FUN1(char *VAR1, dev_t VAR2,
			    const char *VAR3, int VAR4, bool VAR5)
{
	struct dirent VAR6, *VAR7;
	VAR8 *VAR9;
	int VAR10, VAR11=0;
	char VAR12[VAR13];
	bool VAR14 = false;

	VAR9 = FUN2(VAR1);
	if (!VAR9) {
		FUN3("", VAR15, VAR1);
		return -1;
	}

	while (!FUN4(VAR9, &VAR6, &VAR7)) {
		struct stat VAR16;
		int VAR17;

		if (!VAR7)
			break;

		if (!strcmp(VAR7->VAR18, "") ||
		    !strcmp(VAR7->VAR18, ""))
			continue;

		VAR17 = snprintf(VAR12, VAR13, "", VAR1, VAR7->VAR18);
		if (VAR17 < 0 || VAR17 >= VAR13) {
			FUN3("");
			VAR11=1;
			continue;
		}

		if (!VAR4 && VAR3 && !strcmp(VAR7->VAR18, VAR3)) {
			VAR10 = FUN5(VAR12);
			if (VAR10 < 0) {
				switch(VAR19) {
				case VAR20:
					FUN6("", VAR12);
					VAR14 = true;
					break;
				case VAR21:
					VAR10 = unlink(VAR12);
					if (VAR10)
						FUN6("", VAR15, VAR12);
					break;
				default:
					FUN7("", VAR15, VAR12);
					VAR11 = 1;
					break;
				}
			}
			continue;
		}

		VAR10 = FUN8(VAR12, &VAR16);
		if (VAR10) {
			FUN3("", VAR15, VAR12);
			VAR11 = 1;
			continue;
		}
		if (VAR5 && VAR16.VAR22 != VAR2) {
			
			if (FUN9(VAR12))
				FUN6("", VAR12);
			continue;
		}
		if (FUN10(VAR16.VAR23)) {
			if (FUN1(VAR12, VAR2, VAR3, VAR4+1, VAR5) < 0)
				VAR11=1;
		} else {
			if (unlink(VAR12) < 0) {
				FUN7("", VAR15, VAR12);
				VAR11=1;
			}
		}
	}

	if (FUN5(VAR1) < 0 && !FUN9(VAR1) && !VAR14) {
		FUN3("", VAR15, VAR1);
		VAR11=1;
	}

	VAR10 = FUN11(VAR9);
	if (VAR10) {
		FUN3("", VAR15, VAR1);
		VAR11=1;
	}

	return VAR11 ? -1 : 0;
}