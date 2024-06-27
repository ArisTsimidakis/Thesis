FUN1(VAR1* VAR2, VAR1* VAR3)
 {

	uint16 VAR4, VAR5 = 1;


 	uint16 VAR6, VAR7 = VAR8;
 	copyFunc VAR9;
 	uint32 VAR10, VAR11;
	struct VAR12* VAR13;

	FUN2(VAR14, VAR10);
	FUN2(VAR15, VAR11);
	FUN2(VAR16, VAR4);
	FUN2(VAR17, VAR5);
	if (VAR18 != (VAR19)-1)
		FUN3(VAR3, VAR20, VAR18);
	else
		FUN2(VAR20, VAR18);
	FUN4(VAR2, VAR20, &VAR6);
	FUN4(VAR2, VAR21, &VAR7);
	if (VAR6 == VAR22) {
		
		FUN3(VAR2, VAR23, VAR24);
	} else if (VAR7 == VAR25) {
		
		uint16 VAR26,VAR27;

		FUN4(VAR2, VAR28,
				      &VAR26, &VAR27);
		if (VAR26!=1 || VAR27!=1) {
			fprintf(VAR29, "",
				FUN5(VAR2));
			return VAR30;
		}
	}
	if (VAR18 == VAR22) {
		if (VAR7 == VAR31 &&
		    VAR32 == VAR24)
		  FUN3(VAR3, VAR21, VAR25);
		else
		  FUN3(VAR3, VAR21, VAR7);
	}
	else if (VAR18 == VAR33
	    || VAR18 == VAR34)
		FUN3(VAR3, VAR21,
		    VAR5 == 1 ?
		    VAR35 : VAR36);
	else if (VAR6 == VAR22 &&
			 VAR5 == 3 ) {
		
		FUN3(VAR3, VAR21, VAR31);
	}
	else
		FUN6(VAR21, 1, VAR37);
	if (VAR38 != 0)
		FUN3(VAR3, VAR39, VAR38);
	else
		FUN6(VAR39, 1, VAR37);
	
	FUN4(VAR2, VAR40, &VAR41);
	switch (VAR41) {
		case VAR42:
		case VAR43:	
			FUN7(FUN5(VAR2), "");
			VAR41 = VAR44;
		
		case VAR45:	
		case VAR44:
			break;
		case VAR46:
		case VAR47:	
		default:
			FUN7(FUN5(VAR2), "");
			VAR41 = VAR48;
		
		case VAR49:	
		case VAR48:
			break;
	}
	FUN3(VAR3, VAR40, VAR41);
	
	if (VAR50 == -1)
		VAR50 = FUN8(VAR2);
	if (VAR50) {
		
		if (VAR51 == (VAR52) -1)
			FUN9(VAR2, VAR53, &VAR51);
		if (VAR54 == (VAR52) -1)
			FUN9(VAR2, VAR55, &VAR54);
		FUN10(VAR3, &VAR51, &VAR54);
		FUN3(VAR3, VAR53, VAR51);
		FUN3(VAR3, VAR55, VAR54);
	} else {
		
		if (VAR56 == (VAR52) 0) {
			if (!FUN9(VAR2, VAR57,
			    &VAR56)) {
				VAR56 =
				    FUN11(VAR3, VAR56);
			}
			if (VAR56 > VAR11 && VAR56 != (VAR52)-1)
				VAR56 = VAR11;
		}
		else if (VAR56 == (VAR52) -1)
			VAR56 = VAR11;
		FUN3(VAR3, VAR57, VAR56);
	}
	if (VAR58 != (VAR19) -1)
		FUN3(VAR3, VAR59, VAR58);
	else
		FUN2(VAR59, VAR58);
	if (VAR5 <= 4)
		FUN6(VAR60, 4, VAR37);
	FUN6(VAR61, 4, VAR37);

	switch (VAR18) {
		case VAR22:
			FUN3(VAR3, VAR62, VAR63);
			FUN3(VAR3, VAR23, VAR32);
			break;
		case VAR64:
			FUN6(VAR65, 1, VAR66);
			FUN6(VAR67, 1, VAR66);
			FUN6(VAR68, 1, VAR69);
			FUN6(VAR70, 1, VAR69);
			break;
		case VAR71:
		case VAR72:
		case VAR73:
                case VAR74:
			if (VAR75 != (VAR19)-1)
				FUN3(VAR3, VAR76, VAR75);
			else
				FUN2(VAR76, VAR75);
			if (VAR77 != -1) {
                                if (VAR18 == VAR72
                                         || VAR18 == VAR73)
                                        FUN3(VAR3, VAR78, VAR77);
				else if (VAR18 == VAR74)
					FUN3(VAR3, VAR79, VAR77);
                        }
			break;
		case VAR80:
		case VAR81:
			if (VAR18 == VAR80) {
				if (VAR82 != (VAR52) -1)
					FUN3(VAR3, VAR83,
					    VAR82);
				else
					FUN2(VAR83, VAR82);
			} else
				FUN6(VAR84, 1, VAR66);
			FUN6(VAR85, 1, VAR66);
			FUN6(VAR86, 1, VAR66);
			FUN6(VAR87, 1, VAR66);
			FUN6(VAR65, 1, VAR66);
			FUN6(VAR67, 1, VAR66);
			FUN6(VAR68, 1, VAR69);
			break;
	}
	{
		uint32 VAR88;
		void** VAR89;
		if (FUN9(VAR2, VAR90, &VAR88, &VAR89))
			FUN3(VAR3, VAR90, VAR88, VAR89);
	}
	{
		uint16 VAR91;
		const char* VAR92;
		if (FUN9(VAR2, VAR93, &VAR91)) {
			FUN3(VAR3, VAR93, VAR91);
			if (FUN9(VAR2, VAR94, &VAR92)) {
				int VAR95 = strlen(VAR92) + 1;
				const char* VAR96 = VAR92;
				while (VAR91 > 1) {
					VAR96 = strchr(VAR96, '');
                                        VAR96++;
                                        VAR95 += (strlen(VAR96) + 1);
					VAR91--;
				}
				FUN3(VAR3, VAR94, VAR95, VAR92);
			}
		}
	}
	{
		unsigned short VAR97, VAR98;

		if (VAR99 == 1) {
			if (VAR100 < 0)  {
				if (FUN9(VAR2, VAR101, &VAR97, &VAR98))
					FUN3(VAR3, VAR101, VAR97, VAR98);
			} else
				FUN3(VAR3, VAR101, VAR100++, 0);

		} else {
			if (FUN9(VAR2, VAR101, &VAR97, &VAR98)) {
				if (VAR100 < 0) 
					FUN3(VAR3, VAR101, VAR97, VAR98);
				else
					FUN3(VAR3, VAR101, VAR100++, 0);
			}
		}
	}

	for (VAR13 = VAR102; VAR13 < &VAR102[VAR103]; VAR13++)
		FUN6(VAR13->VAR104, VAR13->VAR105, VAR13->VAR106);

	VAR9 = FUN12(VAR2, VAR3, VAR4, VAR5);
	return (VAR9 ? (*VAR9)(VAR2, VAR3, VAR11, VAR10, VAR5) : VAR30);
}