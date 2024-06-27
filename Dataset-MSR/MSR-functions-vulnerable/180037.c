FUN1(VAR1* VAR2, VAR1* VAR3)
 {

	uint16 VAR4, VAR5;

	uint16 VAR6, VAR7;




 	copyFunc VAR8;
 	uint32 VAR9, VAR10;
 	struct VAR11* VAR12;

	FUN2(VAR13, VAR9);
	FUN2(VAR14, VAR10);
	FUN2(VAR15, VAR4);
	FUN2(VAR16, VAR5);
	if (VAR17 != (VAR18)-1)
		FUN3(VAR3, VAR19, VAR17);
	else
		FUN2(VAR19, VAR17);
	FUN4(VAR2, VAR19, &VAR6);
	FUN4(VAR2, VAR20, &VAR7);
	if (VAR6 == VAR21) {
		
		FUN3(VAR2, VAR22, VAR23);
	} else if (VAR7 == VAR24) {
		
		uint16 VAR25,VAR26;

		FUN4(VAR2, VAR27,
				      &VAR25, &VAR26);
		if (VAR25!=1 || VAR26!=1) {
			fprintf(VAR28, "",
				FUN5(VAR2));
			return VAR29;
		}
	}
	if (VAR17 == VAR21) {
		if (VAR7 == VAR30 &&
		    VAR31 == VAR23)
		  FUN3(VAR3, VAR20, VAR24);
		else
		  FUN3(VAR3, VAR20, VAR7);
	}
	else if (VAR17 == VAR32
	    || VAR17 == VAR33)
		FUN3(VAR3, VAR20,
		    VAR5 == 1 ?
		    VAR34 : VAR35);
	else if (VAR6 == VAR21 &&
			 VAR5 == 3 ) {
		
		FUN3(VAR3, VAR20, VAR30);
	}
	else
		FUN6(VAR20, 1, VAR36);
	if (VAR37 != 0)
		FUN3(VAR3, VAR38, VAR37);
	else
		FUN6(VAR38, 1, VAR36);
	
	FUN4(VAR2, VAR39, &VAR40);
	switch (VAR40) {
		case VAR41:
		case VAR42:	
			FUN7(FUN5(VAR2), "");
			VAR40 = VAR43;
		
		case VAR44:	
		case VAR43:
			break;
		case VAR45:
		case VAR46:	
		default:
			FUN7(FUN5(VAR2), "");
			VAR40 = VAR47;
		
		case VAR48:	
		case VAR47:
			break;
	}
	FUN3(VAR3, VAR39, VAR40);
	
	if (VAR49 == -1)
		VAR49 = FUN8(VAR2);
	if (VAR49) {
		
		if (VAR50 == (VAR51) -1)
			FUN9(VAR2, VAR52, &VAR50);
		if (VAR53 == (VAR51) -1)
			FUN9(VAR2, VAR54, &VAR53);
		FUN10(VAR3, &VAR50, &VAR53);
		FUN3(VAR3, VAR52, VAR50);
		FUN3(VAR3, VAR54, VAR53);
	} else {
		
		if (VAR55 == (VAR51) 0) {
			if (!FUN9(VAR2, VAR56,
			    &VAR55)) {
				VAR55 =
				    FUN11(VAR3, VAR55);
			}
			if (VAR55 > VAR10 && VAR55 != (VAR51)-1)
				VAR55 = VAR10;
		}
		else if (VAR55 == (VAR51) -1)
			VAR55 = VAR10;
		FUN3(VAR3, VAR56, VAR55);
	}
	if (VAR57 != (VAR18) -1)
		FUN3(VAR3, VAR58, VAR57);
	else
		FUN2(VAR58, VAR57);
	if (VAR5 <= 4)
		FUN6(VAR59, 4, VAR36);
	FUN6(VAR60, 4, VAR36);

	switch (VAR17) {
		case VAR21:
			FUN3(VAR3, VAR61, VAR62);
			FUN3(VAR3, VAR22, VAR31);
			break;
		case VAR63:
			FUN6(VAR64, 1, VAR65);
			FUN6(VAR66, 1, VAR65);
			FUN6(VAR67, 1, VAR68);
			FUN6(VAR69, 1, VAR68);
			break;
		case VAR70:
		case VAR71:
		case VAR72:
                case VAR73:
			if (VAR74 != (VAR18)-1)
				FUN3(VAR3, VAR75, VAR74);
			else
				FUN2(VAR75, VAR74);
			if (VAR76 != -1) {
                                if (VAR17 == VAR71
                                         || VAR17 == VAR72)
                                        FUN3(VAR3, VAR77, VAR76);
				else if (VAR17 == VAR73)
					FUN3(VAR3, VAR78, VAR76);
                        }
			break;
		case VAR79:
		case VAR80:
			if (VAR17 == VAR79) {
				if (VAR81 != (VAR51) -1)
					FUN3(VAR3, VAR82,
					    VAR81);
				else
					FUN2(VAR82, VAR81);
			} else
				FUN6(VAR83, 1, VAR65);
			FUN6(VAR84, 1, VAR65);
			FUN6(VAR85, 1, VAR65);
			FUN6(VAR86, 1, VAR65);
			FUN6(VAR64, 1, VAR65);
			FUN6(VAR66, 1, VAR65);
			FUN6(VAR67, 1, VAR68);
			break;
	}
	{
		uint32 VAR87;
		void** VAR88;
		if (FUN9(VAR2, VAR89, &VAR87, &VAR88))
			FUN3(VAR3, VAR89, VAR87, VAR88);
	}
	{
		uint16 VAR90;
		const char* VAR91;
		if (FUN9(VAR2, VAR92, &VAR90)) {
			FUN3(VAR3, VAR92, VAR90);
			if (FUN9(VAR2, VAR93, &VAR91)) {
				int VAR94 = strlen(VAR91) + 1;
				const char* VAR95 = VAR91;
				while (VAR90 > 1) {
					VAR95 = strchr(VAR95, '');
                                        VAR95++;
                                        VAR94 += (strlen(VAR95) + 1);
					VAR90--;
				}
				FUN3(VAR3, VAR93, VAR94, VAR91);
			}
		}
	}
	{
		unsigned short VAR96, VAR97;

		if (VAR98 == 1) {
			if (VAR99 < 0)  {
				if (FUN9(VAR2, VAR100, &VAR96, &VAR97))
					FUN3(VAR3, VAR100, VAR96, VAR97);
			} else
				FUN3(VAR3, VAR100, VAR99++, 0);

		} else {
			if (FUN9(VAR2, VAR100, &VAR96, &VAR97)) {
				if (VAR99 < 0) 
					FUN3(VAR3, VAR100, VAR96, VAR97);
				else
					FUN3(VAR3, VAR100, VAR99++, 0);
			}
		}
	}

	for (VAR12 = VAR101; VAR12 < &VAR101[VAR102]; VAR12++)
		FUN6(VAR12->VAR103, VAR12->VAR104, VAR12->VAR105);

	VAR8 = FUN12(VAR2, VAR3, VAR4, VAR5);
	return (VAR8 ? (*VAR8)(VAR2, VAR3, VAR10, VAR9, VAR5) : VAR29);
}