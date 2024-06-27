VAR1 FUN1(VAR2* VAR3, VAR4* VAR5, int VAR6, UINT16 VAR7)
{
	BYTE VAR8[8];
	BYTE VAR9[8];

	if (VAR3->VAR10->VAR11 == VAR12)
	{
		UINT16 VAR13;
		BYTE VAR14, VAR15;
		VAR16* VAR17;

		if (FUN2(VAR5) < 12)
			return VAR18;

		FUN3(VAR5, VAR13); 
		FUN4(VAR5, VAR14); 
		FUN4(VAR5, VAR15);

		VAR17 = VAR5->VAR19;
		FUN5(VAR5, 8);	

		VAR6 -= 12;

		if (!FUN6(VAR5->VAR19, VAR6, VAR3))
		{
			printf("");
			return VAR18; 
		}

		if (!FUN7(VAR5->VAR19, VAR6 - VAR15, VAR17, VAR3))
		{
			printf("");
			return VAR18; 
		}

		
		VAR5->VAR20 -= VAR15;
		return VAR21;
	}

	if (FUN2(VAR5) < 8)
		return VAR18;
 
 	FUN8(VAR5, VAR9, sizeof(VAR9));
 	VAR6 -= sizeof(VAR9);

	FUN9(VAR5->VAR19, VAR6, VAR3);




 
 	if (VAR7 & VAR22)
 		FUN10(VAR3, VAR5->VAR19, VAR6, VAR18, VAR8);
	else
		FUN11(VAR3, VAR5->VAR19, VAR6, VAR8);

	if (memcmp(VAR9, VAR8, sizeof(VAR9)) != 0)
	{
		printf("");
		
		
	}

	return VAR21;
}