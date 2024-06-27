struct VAR1 *FUN1(struct VAR2* VAR3, int VAR4, int *VAR5) {
 	ut64 VAR6, VAR7;
	ut64 VAR8;
	ut32 VAR9 = 0;
	struct VAR1 *VAR10 = NULL;
	struct VAR11* VAR12 = NULL;
	struct VAR13 *VAR14;
	VAR15 *VAR16, *VAR17;
	int VAR18, VAR19 = 0;
	VAR20* VAR21;
	char *VAR22;

	if (!VAR3) {
		return NULL;
	}
	if (VAR3->VAR23 < 1) {
		FUN2 ("", VAR3->VAR24? VAR3->VAR24: "");
		return NULL;
	}
	if (VAR3->VAR25 < 0 || VAR4 < 0 || VAR4 >= VAR3->VAR25) {
		return NULL;
	}
 	*VAR5 = VAR3->VAR25;
 	VAR10 = FUN3 (struct VAR1);
 	if (!VAR10) {

		FUN4 ("");
 		return NULL;
 	}
 	if (VAR3->VAR26.VAR27 > VAR3->VAR23) {
 	    	FUN2 ("");
 		free (VAR10);
 		return NULL;
 	}


 	if (VAR3->VAR26.VAR27 > VAR3->VAR23 || VAR3->VAR26.VAR28 > VAR3->VAR23) {
 		FUN2 ("");
 		free (VAR10);
 		return NULL;
 	}

	VAR12 = (struct VAR11*) (VAR3->VAR29->VAR30 + VAR3->VAR26.VAR27);

	VAR8 = *(VAR31 *)(VAR3->VAR29->VAR30 + VAR3->VAR26.VAR28);
















 	VAR6 = VAR12[VAR4].VAR32 - VAR8;
 	if (VAR6 > VAR3->VAR23) {
 		FUN2 ("");
 		free (VAR10);
 		return NULL;
 	}
 	VAR10->VAR33 = VAR6;

	if (VAR12[VAR4].VAR34 > VAR3->VAR23) {

	    FUN2 ("");






 		free (VAR10);
 		return NULL;
 	}

	VAR22 = (char *)(VAR3->VAR29->VAR30 + VAR12[VAR4].VAR34);


 	
 	VAR16 = VAR3->VAR29->VAR30 + VAR6;
 	VAR14 = (struct VAR13 *)VAR16;
	
	if (VAR14->VAR35 != VAR36 && VAR14->VAR35 != VAR37) {
		if (VAR14->VAR35 == 0xbebafeca) { 
			FUN2 ("");
		}
		FUN2 ("");
		free (VAR10);
		return NULL;
	}
	
	if (!(VAR21 = FUN5 ())) {
		FUN2 ("");
		free (VAR10);
		return NULL;
	}
	VAR9 = VAR14->VAR35 == VAR36? sizeof (struct VAR13) : sizeof (struct VAR38);
	FUN6 (VAR21, VAR16, VAR9);
	VAR17 = VAR16 + VAR9;
	
	for (VAR18 = 0; VAR18 < VAR14->VAR39; VAR18++) {
		struct VAR40 *VAR41 = (struct VAR40 *)VAR17;
		FUN7 (VAR21, (VAR15*)VAR41, VAR41->VAR42);
		VAR17 += VAR41->VAR42;
	}
	VAR17 = VAR16 + VAR9;
	
	for (VAR18 = VAR7 = 0; VAR18 < VAR14->VAR39; VAR18++) {
		struct VAR40 *VAR41 = (struct VAR40 *)VAR17;
		VAR17 += VAR41->VAR42;
		switch (VAR41->VAR18) {
		case VAR43:
			{
			
			struct VAR44 *VAR45 = (struct VAR44 *)VAR41;
			int VAR46 = VAR45->VAR47;
			if (VAR45->VAR48 + VAR45->VAR47 > VAR3->VAR23 || VAR45->VAR48 > VAR3->VAR23) {
				FUN2 ("");
				free (VAR10);
				FUN8 (VAR21);
				return NULL;
			}
			FUN7 (VAR21, VAR3->VAR29->VAR30+VAR45->VAR48, VAR46);
			FUN9 (VAR21, VAR21->VAR49, (VAR31)((VAR50)&VAR45->VAR48 - (VAR50)VAR16));
			
			int VAR51 = VAR45->VAR48 - VAR19;
			VAR19 = VAR21->VAR49;
			if (!strcmp (VAR45->VAR52, "")) {
				VAR7 = VAR51;
			}
			if (VAR45->VAR53 > 0) {
				struct VAR54 *VAR55 = (struct VAR54 *)((VAR15 *)VAR45 + sizeof(struct VAR44));
				int VAR56;
				for (VAR56 = 0; VAR56 < VAR45->VAR53; VAR56++) {
					if (VAR55[VAR56].VAR33 > VAR19) {
						FUN9 (VAR21, VAR55[VAR56].VAR33 - VAR51,
							(VAR31)((VAR50)&VAR55[VAR56].VAR33 - (VAR50)VAR16));
					}
				}
			}
			}
			break;
		case VAR57:
			{
			struct VAR58 *VAR59 = (struct VAR58 *)VAR41;
			FUN10 (VAR59->VAR60);
			FUN10 (VAR59->VAR61);
			}
			break;
		case VAR62:
			{
			struct VAR63 *VAR59 = (struct VAR63 *)VAR41;
			FUN10 (VAR59->VAR64);
			FUN10 (VAR59->VAR65);
			FUN10 (VAR59->VAR66);
			FUN10 (VAR59->VAR67);
			FUN10 (VAR59->VAR68);
			FUN10 (VAR59->VAR69);
			}
			break;
		case VAR70:
		case VAR71:
			{
			struct VAR72 *VAR59 = (struct VAR72 *)VAR41;
			FUN10 (VAR59->VAR73);
			FUN10 (VAR59->VAR74);
			FUN10 (VAR59->VAR75);
			FUN10 (VAR59->VAR76);
			FUN10 (VAR59->VAR77);
			}
			break;
		}
	}
	
	VAR10->VAR29 = VAR21;
	strncpy (VAR10->VAR78, VAR22, sizeof (VAR10->VAR78) - 1);
	VAR10->VAR23 = VAR19;
	return VAR10;
}