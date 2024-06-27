FUN1(VAR1 *VAR2, struct VAR3* VAR4, int *VAR5)
	{
	VAR6 *VAR7 = NULL;
	VAR8 *VAR9 = NULL;
	int VAR10 = -1, VAR11;
	unsigned char VAR12[8];
	unsigned long VAR13 = VAR4->VAR13, VAR14;

	if ((VAR4->VAR15+VAR13) > VAR4->VAR16)
		goto VAR17;

	
	if (VAR18 + VAR19 < VAR2->VAR20)
		VAR14 = VAR2->VAR20;
	else
		VAR14 = VAR18 + VAR19;

	if ((VAR4->VAR15+VAR13) > VAR14)
		goto VAR17;

	
	memset(VAR12,0,sizeof(VAR12));
	VAR12[6] = (unsigned char) (VAR4->VAR21>>8);
	VAR12[7] = (unsigned char) VAR4->VAR21;
	VAR9 = FUN2(VAR2->VAR22->VAR23, VAR12);

	if (VAR9 == NULL)
		{
		VAR7 = FUN3(VAR4->VAR16, 1);
		if ( VAR7 == NULL)
			goto VAR17;
		memcpy(&(VAR7->VAR24), VAR4, sizeof(*VAR4));
		VAR7->VAR24.VAR13 = VAR7->VAR24.VAR16;
		VAR7->VAR24.VAR15 = 0;
		}
	else
		{
		VAR7 = (VAR6*) VAR9->VAR25;
		if (VAR7->VAR24.VAR16 != VAR4->VAR16)
			{
			VAR9 = NULL;
			VAR7 = NULL;
			goto VAR17;
			}
		}


	
	if (VAR7->VAR26 == NULL)
		{
		unsigned char VAR27 [256];

		while (VAR13)
			{
			VAR10 = VAR2->VAR28->FUN4(VAR2,VAR29,
				VAR27,
				VAR13>sizeof(VAR27)?sizeof(VAR27):VAR13,0);
			if (VAR10<=0) goto VAR17;
			VAR13 -= VAR10;
			}
		return VAR30;
		}

	
	VAR10 = VAR2->VAR28->FUN4(VAR2,VAR29,
		VAR7->VAR31 + VAR4->VAR15,VAR13,0);
	if (VAR10<=0 || (unsigned long)VAR10!=VAR13)
		goto VAR17;

	FUN5(VAR7->VAR26, (long)VAR4->VAR15,
	                    (long)(VAR4->VAR15 + VAR13));

	FUN6(VAR7->VAR26, (long)VAR4->VAR16,
	                           VAR11);

	if (VAR11)
		{
		FUN7(VAR7->VAR26);
		VAR7->VAR26 = NULL;
		}

	if (VAR9 == NULL)
		{
		memset(VAR12,0,sizeof(VAR12));
		VAR12[6] = (unsigned char)(VAR4->VAR21>>8);
		VAR12[7] = (unsigned char)(VAR4->VAR21);

		VAR9 = FUN8(VAR12, VAR7);
		if (VAR9 == NULL)
			{
			VAR10 = -1;
			goto VAR17;
			}

		FUN9(VAR2->VAR22->VAR23, VAR9);
		}

	return VAR30;

VAR17:
	if (VAR7 != NULL) FUN10(VAR7);
	if (VAR9 != NULL) FUN7(VAR9);
	*VAR5 = 0;
	return VAR10;
	}