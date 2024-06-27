VAR1 *FUN1(VAR2 *VAR3,
											char *VAR4,
											char *VAR5,
											int VAR6,
                                                                                        char **VAR7,
                                                                                        VAR8 *context STREAMS_DC VAR9)
 {

       int VAR10;


 
        char *VAR11;
        size_t VAR12;
	char VAR13[VAR14];

        struct VAR15 *VAR16;
        struct VAR17 *VAR18 = NULL;
        char *VAR19;

       int VAR20;


        int VAR21;
 
        VAR1 *VAR22 = NULL;
	struct VAR23 *VAR24;

	VAR19 = strchr(VAR4, '');
	if (!VAR19) {
		return NULL;
	}

	if (FUN2("", VAR4, 6) == 0) {
		VAR4 += 6;
	}

	VAR20 = strlen(VAR19);

	if (VAR20 < 1) {
		return NULL;
	}
	VAR10 = strlen(VAR4);
	if (VAR10 >= VAR14 || VAR5[0] != '') {
		return NULL;
	}

	memcpy(VAR13, VAR4, VAR10 - VAR20);
	VAR13[VAR10 - VAR20] = '';

	FUN3(VAR4, VAR10 - VAR20, NULL, 0, &VAR11, &file_basename_len VAR25);
	VAR19++;

	if (FUN4(VAR13)) {
		FUN5(VAR11);
		return NULL;
	}

	VAR16 = FUN6(VAR13, VAR26, &VAR21);
	if (VAR16) {
		VAR18 = FUN7(VAR16, VAR19, 0);
		if (VAR18) {
                        VAR24 = FUN8(sizeof(*VAR24));
 
                        VAR24->VAR16 = VAR16;

                       VAR24->VAR18 = VAR18; 


                        VAR24->VAR22 = NULL;
                        VAR24->VAR27 = 0;
                        VAR22 = FUN9(&VAR28, VAR24, NULL, VAR5);

			if (VAR7) {
				*VAR7 = FUN10(VAR4);
			}
		} else {
			FUN11(VAR16);
		}
	}

	FUN5(VAR11);

	if (!VAR22) {
		return NULL;
	} else {
		return VAR22;
	}
}