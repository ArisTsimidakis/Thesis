struct VAR1* FUN1(VAR2)(struct FUN1(VAR3)* VAR4) {
	const char *VAR5;
	struct VAR1 *VAR6;
	int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
	VAR15 *VAR16;
	

	if (!VAR4 || !VAR4->VAR17 || !VAR4->VAR5) {
		return NULL;
	}
	
	
	VAR14 = (VAR4->VAR18.VAR19 + \
			VAR4->VAR18.VAR20 + \
			VAR4->VAR18.VAR21 );
	VAR14 += VAR4->VAR22;
	
	VAR13 = (VAR14 + 1) * 2 * sizeof (struct VAR1);

	if (VAR13 < 1) {
		return NULL;
	}
	if (!(VAR6 = calloc (1, VAR13))) {
		return NULL;
	}
	VAR16 = FUN2 ();
	VAR10 = 0; 
	for (VAR11 = 0; VAR11 < 2; VAR11++) {
		switch (VAR11) {
		case 0:
			VAR7 = VAR4->VAR18.VAR23;
			VAR8 = VAR7 + VAR4->VAR18.VAR19;
			break;
		case 1:
			VAR7 = VAR4->VAR18.VAR24;
			VAR8 = VAR7 + VAR4->VAR18.VAR20;
			break;
#if VAR25
		case 2:
			VAR7 = VAR4->VAR18.VAR26;
			VAR8 = VAR7 + VAR4->VAR18.VAR21;
			break;
#endif
		}
		if (VAR7 == VAR8) {
			continue;
		}
#define OLD 1
#if VAR27
		VAR7 = FUN3 (FUN4 (0, VAR7), VAR13 / sizeof (struct VAR1));
		VAR8 = FUN3 (VAR8 , VAR13 / sizeof (struct VAR1));
		VAR8 = FUN3 (VAR8, VAR4->VAR22);
#else
		VAR7 = FUN3 (FUN4 (0, VAR7), VAR13/sizeof (struct VAR1));
		VAR8 = VAR14; 
#endif
		int VAR28 = VAR13 / sizeof (struct VAR1);
		if (VAR8 > 0x500000) {
			FUN5 ("", VAR8);
			free (VAR6);
			FUN6 (VAR16);
			return NULL;
		}
		if (VAR14 >= VAR28) {
			VAR14 = VAR28 - 1;
		}
		for (VAR9 = VAR7; VAR9 < VAR8 && VAR10 < VAR14; VAR9++, VAR10++) {
			VAR6[VAR10].VAR29 = FUN7 (VAR4, VAR4->VAR17[VAR9].VAR30);
			VAR6[VAR10].VAR31 = VAR4->VAR17[VAR9].VAR30;
			VAR6[VAR10].VAR32 = 0; 
			if (VAR4->VAR17[VAR9].VAR33 & VAR34) {
				VAR6[VAR10].VAR35 = VAR36;
			} else {
				VAR6[VAR10].VAR35 = VAR37;
			}
			VAR12 = VAR4->VAR17[VAR9].VAR38;
			if (VAR12 >= 0 && VAR12 < VAR4->VAR39) {
				VAR5 = (char*)VAR4->VAR5 + VAR12;
			} else {
				VAR5 = "";
			}
			{
				int VAR9 = 0;
				int VAR40 = 0;
				VAR40 = VAR4->VAR39 - VAR12;
				if (VAR40 > 0) {
					for (VAR9 = 0; VAR9 < VAR40; VAR9++) {
						if ((VAR41)(VAR5[VAR9] & 0xff) == 0xff || !VAR5[VAR9]) {
							VAR40 = VAR9;
							break;
						}
					}
					char *VAR42 = NULL;
					if (VAR40 > 0) {
						VAR42 = FUN8 (VAR5, VAR40);
					}
					if (!VAR42) {
						VAR6[VAR10].VAR43[0] = 0;
					} else {
						FUN9 (VAR6[VAR10].VAR43, VAR42, VAR44);
						FUN10 (VAR6[VAR10].VAR43, -1);
						VAR6[VAR10].VAR43[VAR44 - 2] = 0;
					}
					free (VAR42);
				} else {
					VAR6[VAR10].VAR43[0] = 0;
				}
				VAR6[VAR10].VAR45 = 0;
			}
			if (FUN11 (VAR16, VAR6, VAR6[VAR10].VAR43, VAR6[VAR10].VAR31)) {
				VAR6[VAR10].VAR43[0] = 0;
				VAR10--;
			}
		}
	}
	VAR8 = FUN3 (VAR4->VAR22, VAR4->VAR18.VAR26 + VAR4->VAR18.VAR21);
	for (VAR9 = VAR4->VAR18.VAR26; VAR9 < VAR8; VAR9++) {
		if (VAR10 > VAR14) {
 			FUN5 ("");
 			break;
 		}

		if (FUN12(VAR4, &VAR6[VAR10], VAR9))


 			VAR6[VAR10++].VAR45 = 0;


 	}
 
 #if 1

	for (VAR9 = 0; VAR9 < VAR4->VAR22; VAR9++) {
		struct FUN1(VAR46) *VAR47 = &VAR4->VAR17[VAR9];
#if 0
		FUN5 ("",
			VAR47->VAR38, VAR47->VAR48, VAR47->VAR33, VAR47->VAR30);
#endif
		VAR12 = VAR47->VAR38;
		if (VAR12 >= 0 && VAR12 < VAR4->VAR39) {
			VAR5 = (char*)VAR4->VAR5 + VAR12;
		} else {
			VAR5 = "";
		}
		
		
		
		int VAR49 = VAR47->VAR48;
		if (VAR49 == 1 && VAR10 < VAR14) { 
			
			VAR6[VAR10].VAR31 = VAR47->VAR30; 
			VAR6[VAR10].VAR29 = FUN7 (VAR4, VAR6[VAR10].VAR31);
			VAR6[VAR10].VAR32 = 0; 
			if (VAR47->VAR33 & VAR34) {
				VAR6[VAR10].VAR35 = VAR36;
			} else {
				VAR6[VAR10].VAR35 = VAR37;
			}
			strncpy (VAR6[VAR10].VAR43, VAR5, VAR44);
			VAR6[VAR10].VAR43[VAR44 - 1] = 0;
			VAR6[VAR10].VAR45 = 0;
			if (FUN11 (VAR16, VAR6, VAR6[VAR10].VAR43, VAR6[VAR10].VAR31)) {
				VAR6[VAR10].VAR43[0] = 0;
			} else {
				VAR10++;
			}
		}
	}
#endif
	FUN6 (VAR16);
	VAR6[VAR10].VAR45 = 1;
	return VAR6;
}