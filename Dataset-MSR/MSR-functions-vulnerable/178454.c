FUN1(VAR1 *VAR2, int VAR3, int VAR4, long VAR5, int *VAR6)
	{
	unsigned char VAR7[VAR8];
	unsigned long VAR9, VAR10, VAR11;
        int VAR12,VAR13;
        struct hm_header_st VAR14;
 


        
        if ((VAR11 = FUN2(VAR2,VAR5,VAR6)) || *VAR6)
                {
		return VAR11;
		}

	
	VAR12=VAR2->VAR15->FUN3(VAR2,VAR16,VAR7,
		VAR8, 0);
	if (VAR12 <= 0) 	
		{
		VAR2->VAR17=VAR18;
		*VAR6 = 0;
		return VAR12;
		}
	
	if (VAR12 != VAR8)
		{
		VAR13=VAR19;
		FUN4(VAR20,VAR21);
		goto VAR22;
		}

	
	FUN5(VAR7, &VAR14);

	
	if (VAR14.VAR23 != VAR2->VAR24->VAR25 && !(VAR2->VAR24->VAR26 && VAR14.VAR23 == 1))
		return FUN6(VAR2, &VAR14, VAR6);

	VAR9 = VAR14.VAR27;
	VAR10 = VAR14.VAR10;
	VAR11 = VAR14.VAR11;

	if (VAR11 && VAR11 < VAR9)
		return FUN7(VAR2, &VAR14, VAR6);

	if (!VAR2->VAR28 && VAR2->VAR24->VAR29.VAR10 == 0 &&
		VAR7[0] == VAR30)
		{
		
		if (VAR7[1] == 0 && VAR7[2] == 0 && VAR7[3] == 0)
			{
			if (VAR2->VAR31)
				VAR2->FUN8(0, VAR2->VAR32, VAR16, 
					VAR7, VAR8, VAR2, 
					VAR2->VAR33);
                                        VAR2->VAR33);
                        
                        VAR2->VAR34 = 0;

                       return FUN1(VAR2, VAR3, VAR4,

                               VAR5, VAR6);


                        }
                else 
                        {
			VAR13=VAR19;
			FUN4(VAR20,VAR21);
			goto VAR22;
			}
		}

	if ((VAR13=FUN9(VAR2,&VAR14,VAR5)))
		goto VAR22;

	
	VAR2->VAR35=VAR4;

	if ( VAR11 > 0)
		{
		unsigned char *VAR36=(unsigned char *)VAR2->VAR37->VAR38+VAR8;

		VAR12=VAR2->VAR15->FUN3(VAR2,VAR16,
			&VAR36[VAR10],VAR11,0);
		
		if (VAR12 <= 0)
			{
			VAR2->VAR17=VAR18;
			*VAR6 = 0;
			return VAR12;
			}
		}
	else
		VAR12 = 0;

	
	if (VAR12 != (int)VAR11)
		{
		VAR13=VAR39;
		FUN4(VAR20,VAR39);
		goto VAR22;
		}

	*VAR6 = 1;

	
	VAR2->VAR34 = VAR11;
	return VAR11;

VAR22:
	FUN10(VAR2,VAR40,VAR13);
	VAR2->VAR34 = 0;

	*VAR6=0;
	return(-1);
	}