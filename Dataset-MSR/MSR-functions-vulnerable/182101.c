FUN1(struct VAR1 *VAR2, const char *VAR3,
    int VAR4, struct VAR5 *VAR6)
{
	struct {
		const char *VAR7;
		const char *VAR8;
	} VAR9[6], VAR10;

	const char *VAR11, *VAR12;
	int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
	int VAR19, VAR20, VAR21, VAR22, VAR23;
	size_t VAR24;
	char VAR25;

	switch (VAR4) {
	case VAR26:
		VAR4 = VAR27;
		VAR28;
	case VAR27:
	case VAR29:
		VAR13 = 5;
		break;
	case VAR30:
		VAR13 = 6;
		break;
	default:
		return (VAR31);
	}

	VAR18 = VAR32;
	VAR20 = 0;

	while (VAR3 != NULL &&  *VAR3 != '') {
		
		VAR14 = 0;
		do {
			const char *VAR7, *VAR8;
			FUN2(&VAR3, &VAR7, &VAR8, &VAR25);
			if (VAR14 < VAR13) {
				VAR9[VAR14].VAR7 = VAR7;
				VAR9[VAR14].VAR8 = VAR8;
			}
			++VAR14;
		} while (VAR25 == '');

		
		for (VAR15 = VAR14; VAR15 < VAR13; ++VAR15)
			VAR9[VAR15].VAR7 = VAR9[VAR15].VAR8 = NULL;

		if (VAR9[0].VAR7 != NULL && *(VAR9[0].VAR7) == '') {
			
			continue;
		}

		VAR15 = 0;
		VAR17 = 0;
		VAR23 = -1;
		VAR22 = 0;
		VAR10.VAR7 = VAR10.VAR8 = NULL;

		if (VAR4 != VAR30) {
			
			
			VAR11 = VAR9[0].VAR7;
			VAR24 = VAR9[0].VAR8 - VAR9[0].VAR7;
			if (*VAR11 == '' && (VAR24 == 1 || (VAR24 >= 7
			    && memcmp((VAR11 + 1), "", 6) == 0))) {
				VAR19 = VAR29;
				if (VAR24 > 7)
					VAR9[0].VAR7 += 7;
				else
					VAR15 = 1;
			} else
				VAR19 = VAR4;

			
			FUN3(VAR9[VAR15 + 1].VAR7, VAR9[VAR15 + 1].VAR8, &VAR23);
			
			if (VAR23 == -1 && VAR14 > (VAR15 + 3))
				FUN3(VAR9[VAR15 + 3].VAR7, VAR9[VAR15 + 3].VAR8,
				    &VAR23);

			VAR21 = 0;
			VAR11 = VAR9[VAR15].VAR7;
 			VAR12 = VAR9[VAR15].VAR7 + 1;
 			VAR24 = VAR9[VAR15].VAR8 - VAR9[VAR15].VAR7;
 










 			switch (*VAR11) {
 			case '':
 				if (VAR24 == 1 || (VAR24 == 4
				    && memcmp(VAR12, "", 3) == 0))
					VAR21 = VAR33;
				break;
			case '':
				if (VAR24 == 1 || (VAR24 == 5
				    && memcmp(VAR12, "", 4) == 0))
					VAR21 = VAR34;
				break;
			case '':
				if (VAR24 == 1 || (VAR24 == 5
				    && memcmp(VAR12, "", 4) == 0))
					VAR21 = VAR35;
				break;
			case '':
				if (VAR24 == 1 || (VAR24 == 4
				    && memcmp(VAR12, "", 3) == 0))
					VAR21 = VAR36;
				break;
			default:
					break;
			}

			switch (VAR21) {
			case VAR35:
			case VAR36:
				if (VAR14 == (VAR15 + 2)
				    && VAR9[VAR15 + 1].VAR7 < VAR9[VAR15 + 1].VAR8
				    && FUN4(VAR9[VAR15 + 1].VAR7,
				    VAR9[VAR15 + 1].VAR8, &VAR22)) {
					
					VAR17 = 1;
				} else if (VAR14 == (VAR15 + 3) &&
				    VAR9[VAR15 + 1].VAR7 < VAR9[VAR15 + 1].VAR8) {
					
					VAR18 = VAR37;
					continue;
				}
				break;
			case VAR33:
			case VAR34:
				if (VAR23 != -1 ||
				    VAR9[VAR15 + 1].VAR7 < VAR9[VAR15 + 1].VAR8) {
					VAR10 = VAR9[VAR15 + 1];
					if (VAR21 == VAR33)
						VAR21 = VAR38;
					else
						VAR21 = VAR39;
				}
				break;
			default:
				
				VAR18 = VAR37;
				continue;
			}

			
			if (VAR22 == 0 && !FUN4(VAR9[VAR15 + 2 - VAR17].VAR7,
			    VAR9[VAR15 + 2 - VAR17].VAR8, &VAR22)) {
				
				VAR18 = VAR37;
				continue;
			}
		} else {
			
			VAR11 = VAR9[0].VAR7;
			VAR24 = VAR9[0].VAR8 - VAR9[0].VAR7;
			VAR21 = 0;

			switch (VAR24) {
			case 4:
				if (memcmp(VAR11, "", 4) == 0)
					VAR21 = VAR38;
				break;
			case 5:
				if (memcmp(VAR11, "", 5) == 0)
					VAR21 = VAR39;
				break;
			case 6:
				if (memcmp(VAR11, "", 6) == 0)
					VAR21 = VAR33;
				else if (memcmp(VAR11, "", 6) == 0)
					VAR21 = VAR34;
				break;
			case 9:
				if (memcmp(VAR11, "", 9) == 0)
					VAR21 = VAR40;
				break;
			default:
				break;
			}

			if (VAR21 == 0) {
				
				VAR18 = VAR37;
				continue;
			} else if (VAR21 == VAR38 ||
			    VAR21 == VAR39) {
				VAR15 = 1;
				VAR10 = VAR9[1];
				FUN3(VAR10.VAR7, VAR10.VAR8, &VAR23);
			} else
				VAR15 = 0;

			if (!FUN5(VAR9[1 + VAR15].VAR7,
			    VAR9[1 + VAR15].VAR8, &VAR22)) {
				
				VAR18 = VAR37;
				continue;
			}
			if (!FUN6(VAR9[2 + VAR15].VAR7,
			    VAR9[2 + VAR15].VAR8, &VAR22)) {
				
				VAR18 = VAR37;
				continue;
			}
			VAR11 = VAR9[3 + VAR15].VAR7;
			VAR24 = VAR9[3 + VAR15].VAR8 - VAR9[3 + VAR15].VAR7;
			VAR19 = 0;
			if (VAR24 == 4) {
				if (memcmp(VAR11, "", 4) == 0)
					VAR19 = VAR41;
			} else if (VAR24 == 5) {
				if (memcmp(VAR11, "", 5) == 0)
					VAR19 = VAR42;
				else if (memcmp(VAR11, "", 5) == 0)
					VAR19 = VAR43;
				else if (memcmp(VAR11, "", 5) == 0)
					VAR19 = VAR44;
			}
			if (VAR19 == 0) {
				
				VAR18 = VAR37;
				continue;
			}
			FUN3(VAR9[4 + VAR15].VAR7, VAR9[4 + VAR15].VAR8,
			    &VAR23);
		}

		
		VAR16 = FUN7(VAR2, VAR19, VAR22,
		    VAR21, VAR23, VAR10.VAR7, VAR10.VAR8 - VAR10.VAR7, VAR6);
		if (VAR16 < VAR37)
			return (VAR16);
		if (VAR16 != VAR32)
			VAR18 = VAR37;
		VAR20 |= VAR19;
	}

	
	FUN8(VAR2, VAR20);

	return (VAR18);
}