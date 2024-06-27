FUN1(struct VAR1 *VAR2, int VAR3, const char *VAR4, int *VAR5,
   struct VAR6 *VAR7)
{
	size_t VAR8 = 0, VAR9 = 0;
	char *VAR10 = NULL;
	ssize_t VAR11;
	struct magic_entry VAR12;

	VAR13 *VAR14 = fopen(VAR2->VAR15 = VAR4, "");
	if (VAR14 == NULL) {
		if (VAR16 != VAR17)
			FUN2(VAR2, VAR16, "",
				   VAR4);
		(*VAR5)++;
		return;
	}

	memset(&VAR12, 0, sizeof(VAR12));
	
	for (VAR2->VAR10 = 1; (VAR11 = FUN3(&VAR10, &VAR9, VAR14)) != -1;
	    VAR2->VAR10++) {
		if (VAR11 == 0) 
			continue;
		if (VAR10[VAR11 - 1] == '') {
			VAR8++;
			VAR10[VAR11 - 1] = ''; 
		}
		switch (VAR10[0]) {
		case '':	
		case '':	
			continue;
		case '':
			if (VAR10[1] == '') {
				size_t VAR18;

				for (VAR18 = 0; VAR19[VAR18].VAR20 != NULL; VAR18++) {
					if ((VAR21)(VAR11 - 2) > VAR19[VAR18].VAR11 &&
					    memcmp(VAR19[VAR18].VAR20, VAR10 + 2,
					    VAR19[VAR18].VAR11) == 0)
						break;
				}
				if (VAR19[VAR18].VAR20 == NULL) {
					FUN2(VAR2, 0,
					    "", VAR10);
					(*VAR5)++;
					continue;
				}
				if (VAR12.VAR22 == NULL) {
					FUN2(VAR2, 0,
					    "",
						VAR19[VAR18].VAR20);
					(*VAR5)++;
					continue;
				}
				if ((*VAR19[VAR18].VAR23)(VAR2, &VAR12,
				    VAR10 + VAR19[VAR18].VAR11 + 2) != 0) {
					(*VAR5)++;
					continue;
				}
				continue;
			}
			
		default:
		VAR24:
			switch (FUN4(VAR2, &VAR12, VAR10, VAR8, VAR3)) {
			case 0:
				continue;
			case 1:
				(void)FUN5(VAR2, &VAR12, VAR7);
				goto VAR24;
			default:
				(*VAR5)++;
				break;
			}
		}
	}
	if (VAR12.VAR22)
		(void)FUN5(VAR2, &VAR12, VAR7);
	free(VAR10);
	(void)fclose(VAR14);
}