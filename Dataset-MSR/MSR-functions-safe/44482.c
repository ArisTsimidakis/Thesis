static int FUN1(struct VAR1 *VAR2,
				  char *VAR3)
{
	int VAR4, VAR5 = 0;
	char VAR6[2];

	VAR2->VAR7 = false;

	
	if (FUN2("", (const char **)VAR2->VAR8->VAR9)) {
		char *VAR10 = FUN3(VAR2, VAR3, "");
		if (VAR10) {
			VAR4 = FUN4(VAR10, VAR6, 1);
			if (VAR4 < 1 || VAR6[0] != '') {
				VAR4 = FUN5(VAR10, "", 1, false);
				if (VAR4 < 0)
					FUN6("");
			}
			free(VAR10);
		}
	}

	
	if (FUN2("", (const char **)VAR2->VAR8->VAR9)) {
		char *VAR10 = FUN3(VAR2, VAR3, "");
		struct stat VAR11;

		if (!VAR10)
			return -1;
		
		if (FUN7(VAR10, &VAR11) != 0 && VAR12 == VAR13) {
			VAR2->VAR7 = true;
			free(VAR10);
			return 0;
		}
		VAR4 = FUN4(VAR10, VAR6, 1);
		if (VAR4 == 1 && VAR6[0] == '') {
			free(VAR10);
			return 0;
		}
		VAR4 = FUN5(VAR10, "", 1, false);
		VAR5 = VAR12;
		free(VAR10);
		VAR12 = VAR5;
		return VAR4 < 0 ? -1 : 0;
	}
	return 0;
}