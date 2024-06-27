int FUN1(VAR1 *VAR2, FUN2(VAR3) *VAR4,
		 VAR5 *VAR6, VAR7 *VAR8, VAR7 *VAR9, unsigned int VAR10)
	{
	VAR11 *VAR12;
	FUN2(VAR11) *VAR13;
	FUN2(VAR3) *VAR14 = NULL;
 	FUN2(VAR15) *VAR16 = NULL;
 	VAR3 *VAR17;
 	int VAR18, VAR19 = 0, VAR20 = 0;

	VAR7 *VAR21 = NULL, *VAR22 = NULL;


 
 	if (!VAR8 && !FUN3(VAR2))
 		return 0;

	

	VAR13 = FUN4(VAR2);

	if (FUN5(VAR13) <= 0)
		{
		FUN6(VAR23, VAR24);
		goto VAR25;
		}

	for (VAR18 = 0; VAR18 < FUN5(VAR13); VAR18++)
		{
		VAR12 = FUN7(VAR13, VAR18);
		FUN8(VAR12, NULL, &VAR17, NULL, NULL);
		if (VAR17)
			VAR19++;
		}

	if (VAR19 != FUN5(VAR13))
		VAR19 += FUN9(VAR2, VAR4, VAR10);

	if (VAR19 != FUN5(VAR13))
		{
		FUN6(VAR23, VAR26);
		goto VAR25;
		}

	

	if (!(VAR10 & VAR27))
		{
		VAR14 = FUN10(VAR2);
		if (!(VAR10 & VAR28))
			VAR16 = FUN11(VAR2);
		for (VAR18 = 0; VAR18 < FUN5(VAR13); VAR18++)
			{
			VAR12 = FUN7(VAR13, VAR18);
			if (!FUN12(VAR12, VAR6,
							VAR14, VAR16, VAR10))
				goto VAR25;
			}
		}

	

	if (!(VAR10 & VAR29))
		{
		for (VAR18 = 0; VAR18 < FUN5(VAR13); VAR18++)
			{
			VAR12 = FUN7(VAR13, VAR18);
			if (FUN13(VAR12) < 0)
				continue;
			if (FUN14(VAR12) <= 0)
				goto VAR25;
			}
		}

	

	if (VAR8 && (FUN15(VAR8) == VAR30))
		{
		char *VAR31;
		long VAR32;
		VAR32 = FUN16(VAR8, &VAR31);
		VAR22 = FUN17(VAR31, VAR32);
		if (VAR22 == NULL)
			{
			FUN6(VAR23,VAR33);
			return 0;
			}
 		}
 	else
 		VAR22 = VAR8;

		












































 

	VAR21=FUN18(VAR2, VAR22);

	if (!VAR21)

		goto VAR25;




























 

	if (!FUN19(VAR9, VAR21, VAR10))

		goto VAR25;




 


 	if (!(VAR10 & VAR34))
 		{
 		for (VAR18 = 0; VAR18 < FUN5(VAR13); VAR18++)
			{
			VAR12 = FUN7(VAR13, VAR18);
			if (FUN20(VAR12, VAR21) <= 0)
				{
				FUN6(VAR23,
					VAR35);
				goto VAR25;
				}
			}
		}

 	VAR20 = 1;
 
 	VAR25:

	

	if (VAR8 && (VAR22 == VAR8))

		FUN21(VAR21, VAR8);












 	else

		FUN22(VAR21);




















 
 	if (VAR14)
 		FUN23(VAR14, VAR36);
	if (VAR16)
		FUN24(VAR16, VAR37);

	return VAR20;
	}