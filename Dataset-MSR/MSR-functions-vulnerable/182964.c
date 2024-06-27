static VAR1 FUN1(VAR2 *VAR3, const char *VAR4)
{
	Bool VAR5, VAR6;
	s32 VAR7;
 	VAR8 *VAR9;
 	VAR10 *VAR11;
 	Bool VAR12 = VAR13;

	char *VAR14, VAR15[1000], VAR16[20];


 	const char *VAR17;
 	VAR18 *VAR19;
 	if (!VAR3 || !VAR4)
		return VAR13;
	
	if (!FUN2(VAR4, "", 7)) return VAR13;
	if (!FUN2(VAR4, "", 8)) return VAR13;
	if (!FUN2(VAR4, "", 6)) return VAR13;
	if (!FUN2(VAR4, "", 8)) return VAR13;
	if (!FUN2(VAR4, "", 6)) return VAR13;
	if (!FUN2(VAR4, "", 6)) return VAR13;
	if (!FUN2(VAR4, "", 5)) return VAR13;
 
 	VAR19 = (VAR18*)VAR3->VAR20;
 






 	strcpy(VAR15, VAR4);
 	VAR14 = strrchr(VAR15, '');
 	if (VAR14) VAR14[0] = 0;
	VAR14 = strrchr(VAR15, '');
	if (VAR14) VAR14[0] = 0;

 	VAR14 = strrchr(VAR15, '');
 	if (VAR14 && strlen(VAR14) > 19) VAR14 = NULL;
 

	if (VAR14 && strlen(VAR14) > 1) {


 		strcpy(VAR16, &VAR14[1]);
 		FUN3(VAR16);
 #ifndef VAR21
		if (strstr("", VAR16) ) return VAR13;
#endif

		
		if (!strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		        || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "")

		        || !strcmp(VAR16, "") || !strcmp(VAR16, "") || !strcmp(VAR16, "")
		   ) return VAR13;

		
		{
			u32 VAR7;
			for (VAR7 = 0 ; VAR22[VAR7]; VAR7+=3) {
				if (FUN4(VAR3, VAR22[VAR7], VAR22[VAR7+1], VAR22[VAR7+2], VAR14))
					return VAR23;
			}
		}
	}

	FUN5(VAR19, VAR4);

	VAR9 = NULL;
	if (FUN6(&VAR9, VAR15, NULL, VAR19->VAR24 ? &VAR19->VAR24 : NULL)<0) {
		VAR25 *VAR26 = NULL;
		
		if (VAR14 && !strcmp(VAR16, "")) VAR26 = FUN7("");

		if (FUN6(&VAR9, VAR15, VAR26, VAR19->VAR24 ? &VAR19->VAR24 : NULL)<0) {
			return VAR13;
		}
	}

	if (!VAR9) goto VAR27;
	if (FUN8(VAR9) <0) goto VAR27;

	
	VAR6 = VAR5 = VAR13;
	for(VAR7 = 0; VAR7 < (VAR28)VAR9->VAR29; VAR7++) {
		VAR30 *VAR31 = VAR9->VAR32[VAR7]->VAR33;
		switch(VAR31->VAR34) {
		case VAR35:
			if (!VAR5) VAR5 = VAR23;
			break;
		case VAR36:
			if (!VAR6) VAR6= VAR23;
			break;
		default:
			break;
		}
	}
	if (!VAR5 && !VAR6) goto VAR27;
	VAR12 = VAR23;
#if ((VAR37 == 52) && (VAR38 <= 47)) || (VAR37 < 52)
	VAR11 = FUN9(NULL, VAR4, NULL);
#else
	VAR11 = FUN10(NULL, VAR4, NULL);
#endif
	if (VAR11) FUN11(VAR3, VAR11->VAR39, VAR11->VAR40, VAR11->VAR41);
	else {
		VAR14 = strrchr(VAR15, '');
		if (VAR14) {
			strcpy(VAR16, &VAR14[1]);
			FUN3(VAR16);

			VAR17 = FUN12((VAR42 *)VAR3, "", "");
			if (!VAR17) {
				FUN11(VAR3, "", VAR16, "");
			} else if (!strstr(VAR17, VAR16)) {
				u32 VAR43;
				char *VAR44;
				VAR43 = (VAR45) (strlen(VAR17) + strlen(VAR16) + 10);
				VAR44 = (char*)FUN13(sizeof(char)*VAR43);
				sprintf(VAR44, ""%VAR46 ", VAR16);
				strcat(VAR44, &VAR17[1]);
				FUN14((VAR42 *)VAR3, "", "", VAR44);
				FUN15(VAR44);
			}
		}
	}

VAR27:
#if VAR47
	if (VAR9) FUN16(VAR9);
#else
	if (VAR9) FUN17(&VAR9);
#endif
	return VAR12;
}