FUN1(VAR1 *VAR2, const VAR3 *VAR4, u_int VAR5, int VAR6)
{
	int VAR7, VAR8;
	u_int VAR9;
	const VAR3 *VAR10, *VAR11;
#VAR12 FUN2(VAR9, VAR4, VAR5) \
	do { \
		if (VAR5 < 1) \
			goto VAR13; \
		FUN3(*VAR4); \
		VAR9 = *VAR4++; \
		VAR5--; \
	} while (0)

	VAR10 = VAR4;

	FUN2(VAR9, VAR4, VAR5);
	if (VAR9 != VAR14)
		goto VAR13;
	FUN2(VAR9, VAR4, VAR5);
	if (VAR9 == VAR14) {		
		if (VAR6)
			FUN4((VAR2, ""));
		goto VAR15;
	}

	VAR7 = VAR9 - VAR16;
	if (VAR7 < 0 || VAR7 > VAR14 - VAR16)
		goto VAR13;

	switch (VAR9) {
	case VAR17:
	case VAR18:
	case VAR19:
	case VAR20:
	case VAR21:
		
		FUN2(VAR8, VAR4, VAR5);
		if (VAR8 >= 0 && VAR8 < VAR22) {
			if (VAR6)
				FUN4((VAR2, "", VAR23[VAR7], VAR24[VAR8]));
		} else {
			if (VAR6)
				FUN4((VAR2, "", VAR23[VAR7], VAR8));
		}
		if (VAR9 != VAR21)
			break;
		
		VAR11 = VAR4;
		while (VAR5 > (VAR25)(VAR11 + 1 - VAR4)) {
			FUN5(*VAR11, 2);
			if (VAR11[0] == VAR14 && VAR11[1] == VAR26)
 				break;
 			VAR11++;
 		}


 		if (*VAR11 != VAR14)
 			goto VAR13;
 
		switch (VAR8) {
		case VAR27:
			if (VAR11 <= VAR4)
				break;
			FUN2(VAR9, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", FUN6(VAR9, VAR28)));
			if (VAR11 <= VAR4)
				break;
			FUN2(VAR9, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", FUN6(VAR9, VAR29)));
			break;
		case VAR30:
			if (VAR11 <= VAR4)
				break;
			FUN2(VAR9, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", FUN6(VAR9, VAR31)));
			if (VAR11 <= VAR4)
				break;
			FUN2(VAR9, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", FUN6(VAR9, VAR32)));
			break;
		default:
			if (VAR11 <= VAR4)
				break;
			FUN2(VAR9, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", FUN6(VAR9, VAR33)));
			break;
		}
		while (VAR11 > VAR4) {
			FUN2(VAR8, VAR4, VAR5);
			if (VAR6)
				FUN4((VAR2, "", VAR8));
		}
		
		if (VAR6)
			FUN4((VAR2, ""));
		VAR4 += 2;
		break;
	default:
		if (VAR6)
			FUN4((VAR2, "", VAR23[VAR7]));
		goto VAR15;
	}

VAR15:
	return VAR4 - VAR10;

VAR34:
	FUN4((VAR2, "", VAR35));
VAR13:
	return -1;
#undef VAR36
}