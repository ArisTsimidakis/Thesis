int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *stream VAR6) 
{
	VAR7 **VAR8 = NULL;
	char *VAR9 = NULL;
	VAR10 *VAR11;
	char VAR12[1024];
	int VAR13;

	
	if (!(FUN2("") && FUN3(*VAR8))) {
		return VAR14;
	}

	if (VAR4 == NULL) {
		FUN4(NULL VAR15, VAR16, "");
		return VAR17;
	}

	VAR13 = FUN5(VAR2);
	switch (VAR13) {
		case VAR18:
			
			break;
		case VAR19:
			if (FUN2("") && FUN3(*VAR8)) {
				
				break;
			}
			
		default:
			FUN4(NULL VAR15, VAR16, "", VAR13, FUN6(VAR13));
			return VAR17;
	}

	

	VAR11 = FUN7(VAR4);

	
	FUN8("", VAR9);
	if (VAR9) {
		int VAR20 = 0;
		int VAR21 = FUN9(VAR11, VAR22, VAR12, sizeof(VAR12));

		if (VAR21 == -1) {
			FUN4(NULL VAR15, VAR16, "");
			return VAR17;
		} else if (VAR21 != strlen(VAR12)) {
			FUN4(NULL VAR15, VAR16, "", VAR21, VAR12);
			return VAR17;
		}

		VAR20 = FUN10(VAR9, VAR12) == 0;
		if (!VAR20 && strlen(VAR12) > 3 && VAR12[0] == '' && VAR12[1] == '') {
			

			if (strchr(VAR12+2, '')) {
				char *VAR23 = strstr(VAR9, VAR12+1);

				VAR20 = VAR23 && FUN10(VAR23, VAR12+2) && VAR23 == strchr(VAR9, '');
			}
		}

		if (!VAR20) {
			
			FUN4(NULL VAR15, VAR16, "", VAR21, VAR12, VAR9);
			return VAR17;
		}
	}

	return VAR14;
}