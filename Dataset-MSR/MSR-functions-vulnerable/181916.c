static VAR1 *FUN1(int_fast32_t VAR2,
  int_fast32_t VAR3, int_fast32_t VAR4, int_fast32_t VAR5,
  int_fast32_t VAR6, int_fast32_t VAR7, uint_fast16_t VAR8, bool VAR9,
  uint_fast32_t VAR10)
{
	VAR1 *VAR11;
	size_t VAR12;

	VAR11 = 0;
	if (VAR6 < 0 || VAR7 < 0 || VAR4 <= 0 || VAR5 <= 0) {
		goto VAR13;
	}
	if (!FUN2(VAR2, VAR6, 0) ||
	  !FUN2(VAR3, VAR7, 0)) {
		goto VAR13;
	}

	if (!(VAR11 = FUN3(sizeof(VAR1)))) {
		goto VAR13;
	}

	VAR11->VAR14 = VAR15;
	VAR11->VAR16 = VAR2;
	VAR11->VAR17 = VAR3;
	VAR11->VAR18 = VAR4;
	VAR11->VAR19 = VAR5;
	VAR11->VAR20 = VAR6;
	VAR11->VAR21 = VAR7;
	VAR11->VAR22 = VAR8;
	VAR11->VAR23 = VAR9;
	VAR11->VAR24 = 0;
	VAR11->VAR25 = (VAR8 + 7) / 8;

	
	
	
	if (!FUN4(VAR11->VAR20, VAR11->VAR21, &VAR12) ||
 	  !FUN4(VAR12, VAR11->VAR25, &VAR12)) {
 		goto VAR13;
 	}

	VAR11->VAR24 = (VAR10) ? FUN5(0, VAR12) :


 	  FUN6();
 	if (!VAR11->VAR24) {
 		goto VAR13;
	}

	
	
	if (FUN7(VAR11->VAR24, VAR12 - 1, VAR26) < 0 ||
	  FUN8(VAR11->VAR24, 0) == VAR27 ||
	  FUN7(VAR11->VAR24, 0, VAR26) < 0) {
		goto VAR13;
	}

	return VAR11;

VAR13:
	if (VAR11) {
		FUN9(VAR11);
	}
	return 0;
}