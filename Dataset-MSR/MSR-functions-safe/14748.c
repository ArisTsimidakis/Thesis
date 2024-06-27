FUN1(VAR1)
{
	VAR2 *VAR3;
	char *VAR4, *VAR5 = NULL, *VAR6 = NULL;
	int VAR7, VAR8, VAR9, VAR10 = 0;
	char *VAR11;
	int VAR12 = -1;
	VAR13 *VAR14;
	VAR15 *VAR16;
	ExecStatusType VAR17;
	int VAR18 = 0;
#if !VAR19
	char VAR20[VAR21];
#endif
	char *VAR22 = (char *)NULL;
	int VAR23;
	int argc = FUN2();

	if (FUN3(argc VAR24, "",
							  &VAR3, &VAR4, &VAR7,
							  &VAR5, &VAR8, &VAR6, &VAR9) == VAR25) {
		return;
	}
	if (!VAR5) {
		VAR5 = "";
	}

	FUN4(VAR14, VAR13 *, &VAR3, VAR12, "", VAR26, VAR27);

	if (!VAR6) {
		VAR6 = FUN5("");
		VAR10 = 1;
	}

	FUN6(&VAR11, 0, "", VAR4, *VAR5, VAR6);

	while ((VAR16 = FUN7(VAR14))) {
		PQclear(VAR16);
	}
	VAR16 = PQexec(VAR14, VAR11);
	if (VAR10) {
		FUN8(VAR6);
	}
	FUN8(VAR11);

	if (VAR16) {
		VAR17 = PQresultStatus(VAR16);
	} else {
		VAR17 = (VAR28) FUN9(VAR14);
	}

	switch (VAR17) {
		case VAR29:
			if (VAR16) {
				PQclear(VAR16);
				FUN10(VAR30);
#if VAR19
				while (!VAR18)
				{
					VAR23 = FUN11(VAR14, &VAR22, 0);
					switch (VAR23) {
						case -1:
							VAR18 = 1;
							break;
						case 0:
						case -2:
							FUN12("", VAR14);
							VAR31;
							break;
						default:
							FUN13(VAR30, VAR22, 1);
							FUN14(VAR22);
							break;
					}
				}
#else
				while (!VAR18)
				{
					if ((VAR23 = FUN15(VAR14, VAR20, VAR21))) {
						FUN12("", VAR14);
						VAR31;
					}

					if (VAR20[0] == '' &&
						VAR20[1] == '' &&
						VAR20[2] == '')
					{
						VAR18 = 1;
					}
					else
					{
						if (VAR22 == (char *)NULL) {
							VAR22 = FUN16(VAR20);
						} else {
							VAR22 = (char *)FUN17(VAR22, strlen(VAR22) + sizeof(char)*(VAR21+1));
							strcat(VAR22, VAR20);
						}
							
						switch (VAR23)
						{
							case VAR32:
								VAR18 = 1;
							case 0:
								FUN13(VAR30, VAR22, 1);
								FUN8(VAR22);
								VAR22 = (char *)NULL;
								break;
							case 1:
								break;
						}
					}
				}
				if (FUN18(VAR14)) {
					FUN12("", VAR14);
					VAR31;
				}
#endif
				while ((VAR16 = FUN7(VAR14))) {
					PQclear(VAR16);
				}
			} else {
				PQclear(VAR16);
				VAR31;
			}
			break;
		default:
			PQclear(VAR16);
			FUN12("", VAR14);
			VAR31;
			break;
	}
}