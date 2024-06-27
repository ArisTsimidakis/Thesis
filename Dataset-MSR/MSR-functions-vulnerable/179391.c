static int FUN1(struct VAR1 *VAR2, char *VAR3,
				void *VAR4, size_t VAR5)
{
	char *VAR6, *VAR7 = VAR4;
	size_t VAR8;
	int VAR9;

	if (VAR5 == 0)
		return -VAR10;
	
	if (VAR7[VAR5 - 1] != '') {
		if (VAR5 == VAR11)
			return -VAR10;
		VAR7[VAR5] = '';
	}

	
	if (VAR12 != VAR2)
		return -VAR13;

	VAR7 = VAR4;
	VAR7 = FUN2(VAR7);
	VAR6 = FUN3(&VAR7, "");
	if (!VAR7)
		return -VAR10;
	VAR7 = FUN4(VAR7);
	if (!*VAR7)
		return -VAR10;

	VAR8 = VAR5 - (VAR7 - (char *) VAR4);
	if (strcmp(VAR3, "") == 0) {
		if (strcmp(VAR6, "") == 0) {
			VAR9 = FUN5(VAR7, VAR8,
							 !VAR14);
		} else if (strcmp(VAR6, "") == 0) {
			VAR9 = FUN5(VAR7, VAR8,
							 VAR14);
		} else if (strcmp(VAR6, "") == 0) {
			VAR9 = FUN6(VAR7, !VAR15,
							     !VAR14);
		} else if (strcmp(VAR6, "") == 0) {
			VAR9 = FUN6(VAR7, !VAR15,
							     VAR14);
		} else if (strcmp(VAR6, "") == 0) {
			VAR9 = FUN7(VAR7);
		} else {
			struct common_audit_data VAR16;
			FUN8(&VAR16, VAR17);
 			VAR16.VAR18.VAR19 = VAR20;
 			VAR16.VAR18.VAR21 = VAR3;
 			VAR16.VAR18.VAR9 = -VAR10;

			return FUN9(VAR22, NULL, VAR23,




 					&VAR16, NULL);
 		}
 	} else if (strcmp(VAR3, "") == 0) {
		VAR9 = FUN6(VAR7, VAR15,
						     !VAR14);
	} else {
		
		return -VAR10;
	}
	if (!VAR9)
		VAR9 = VAR5;
	return VAR9;
}