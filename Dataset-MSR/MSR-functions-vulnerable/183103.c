int FUN1(const VAR1 *VAR2, VAR3 *VAR4,
		VAR5 *VAR6, void *VAR7, VAR8 *VAR9)
	{
	EVP_MD_CTX VAR10;
	unsigned char *VAR11=NULL;
	int VAR12= -1,VAR13;

	int VAR14, VAR15;

	if (!VAR9)
		{
		FUN2(VAR16, VAR17);
 		return -1;
 		}
 












 	EVP_MD_CTX_init(&VAR10);
 
 	
	if (!FUN3(FUN4(VAR4->VAR18), &VAR14, &VAR15))
		{
		FUN2(VAR16,VAR19);
		goto VAR20;
		}
	if (VAR14 == VAR21)
		{
		if (!VAR9->VAR22 || !VAR9->VAR22->VAR23)
			{
			FUN2(VAR16,VAR19);
			goto VAR20;
			}
		VAR12 = VAR9->VAR22->FUN5(&VAR10, VAR2, VAR7, VAR4,
							VAR6, VAR9);
		
		if (VAR12 != 2)
			goto VAR20;
		VAR12 = -1;
		}
	else
		{
		const VAR24 *VAR25;
		VAR25=FUN6(VAR14);
		if (VAR25 == NULL)
			{
			FUN2(VAR16,VAR26);
			goto VAR20;
			}

		
		if (FUN7(VAR15) != VAR9->VAR22->VAR27)
			{
			FUN2(VAR16,VAR28);
			goto VAR20;
			}

		if (!FUN8(&VAR10, NULL, VAR25, NULL, VAR9))
			{
			FUN2(VAR16,VAR29);
			VAR12=0;
			goto VAR20;
			}

		}

	VAR13 = FUN9(VAR7, &VAR11, VAR2);
	
	if (VAR11 == NULL)
		{
		FUN2(VAR16,VAR30);
		goto VAR20;
		}

	VAR12 = FUN10(&VAR10,VAR11,VAR13);

	FUN11(VAR11,(unsigned int)VAR13);
	FUN12(VAR11);

	if (!VAR12)
		{
		FUN2(VAR16,VAR29);
		goto VAR20;
		}
	VAR12 = -1;

	if (FUN13(&VAR10,VAR6->VAR31,
			(VAR32)VAR6->VAR33) <= 0)
		{
		FUN2(VAR16,VAR29);
		VAR12=0;
		goto VAR20;
		}
	
	
	VAR12=1;
VAR20:
	FUN14(&VAR10);
	return(VAR12);
	}