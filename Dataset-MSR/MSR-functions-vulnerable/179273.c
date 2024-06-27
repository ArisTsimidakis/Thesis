static void FUN1(struct VAR1 *VAR2)
{
	VAR3 *VAR4;
	unsigned int VAR5, VAR6, VAR7;
	u32 VAR8;
	int VAR9, VAR10 = 0;

	VAR4 = (VAR3 *)FUN2(VAR2, &VAR8);
	if (!VAR4)
		goto VAR11;

	VAR10 = FUN3(VAR4, 0, VAR8, VAR12);
	if (VAR10 < 0)
		goto VAR13;

	VAR6 = FUN4(&VAR4[VAR10]);
	VAR5 = VAR10 + VAR14 + VAR6;
	VAR10 += VAR14;

	if (VAR5 > VAR8)
		goto VAR13;

	VAR9 = FUN5(VAR4, VAR10, VAR6,
				      VAR15);
	if (VAR9 > 0) {
		VAR7 = FUN6(&VAR4[VAR9]);

		VAR9 += VAR16;
		if (VAR9 + VAR7 > VAR5 || VAR7 != 4 ||
		    memcmp(&VAR4[VAR9], "", 4))
			goto VAR17;

		VAR9 = FUN5(VAR4, VAR10, VAR6,
					      VAR18);
		if (VAR9 < 0)
			goto VAR17;

		VAR7 = FUN6(&VAR4[VAR9]);

		VAR9 += VAR16;
 		if (VAR9 + VAR7 > VAR5)
 			goto VAR17;
 

		memcpy(VAR2->VAR19, &VAR4[VAR9], VAR7);

		strncat(VAR2->VAR19, "", VAR8 - VAR7 - 1);










 	}
 
 VAR17:
	VAR10 = FUN5(VAR4, VAR10, VAR6,
				      VAR20);
	if (VAR10 < 0)
		goto VAR13;

	VAR7 = FUN6(&VAR4[VAR10]);

	VAR10 += VAR16;
	if (VAR7 > VAR21 ||
	    (VAR7 + VAR10) > VAR8)
		goto VAR13;

	memcpy(VAR2->VAR22, &VAR4[VAR10], VAR7);

VAR13:
	FUN7(VAR4);
	if (VAR2->VAR22[0])
		return;

VAR11:
	if (FUN8(VAR2) == VAR23) {
		if (VAR2->VAR24->VAR25 == VAR26 ||
		    VAR2->VAR24->VAR25 == VAR27)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR28)
			strcpy(VAR2->VAR22, "");
		else
			goto VAR29;
	} else if (FUN8(VAR2) == VAR30) {
		if (VAR2->VAR24->VAR25 == VAR31)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR32)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR33)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR34)
			strcpy(VAR2->VAR22, "");
		else
			goto VAR29;
	} else if (FUN8(VAR2) == VAR35) {
		if (VAR2->VAR24->VAR25 == VAR36)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR37)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR38)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR39)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR40)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR41)
			strcpy(VAR2->VAR22, "");
		else
			goto VAR29;
	} else if (FUN8(VAR2) == VAR42) {
		if (VAR2->VAR24->VAR25 == VAR43)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR44)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR45)
			strcpy(VAR2->VAR22, "");
		else if (VAR2->VAR24->VAR25 == VAR46)
			strcpy(VAR2->VAR22, "");
		else
			goto VAR29;
	} else if (FUN8(VAR2) == VAR47) {
		strcpy(VAR2->VAR22, "");
	} else {
VAR29:
		strcpy(VAR2->VAR22, "");
	}
}