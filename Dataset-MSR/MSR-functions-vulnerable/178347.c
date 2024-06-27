static int FUN1(VAR1 *VAR2, unsigned char **VAR3, unsigned char *VAR4, int VAR5, int *VAR6)
	{
	unsigned short VAR7;
	unsigned short VAR8;
	unsigned short VAR9;
	unsigned char *VAR10 = *VAR3;
	int VAR11 = 0;
	int VAR12 = 0;

#ifndef VAR13
	VAR2->VAR14->VAR15 = 0;
#endif

	if (VAR2->VAR14->VAR16)
		{
		FUN2(VAR2->VAR14->VAR16);
		VAR2->VAR14->VAR16 = NULL;
		}

#ifndef VAR17
	VAR2->VAR18 &= ~(VAR19 |
	                       VAR20);
#endif

#ifdef VAR21
	VAR2->VAR14->VAR22 &= ~VAR23;
#endif

	if (VAR10 >= (VAR4+VAR5-2))
		goto VAR24;

	FUN3(VAR10,VAR7);
	if (VAR10+VAR7 != VAR4+VAR5)
		{
		*VAR6 = VAR25;
		return 0;
		}

	while(VAR10 <= (VAR4+VAR5-4))
		{
		FUN3(VAR10,VAR8);
		FUN3(VAR10,VAR9);

		if (VAR10+VAR9 > (VAR4+VAR5))
	   		goto VAR24;

		if (VAR2->VAR26)
			VAR2->FUN4(VAR2, 1, VAR8, VAR10, VAR9,
						VAR2->VAR27);

		if (VAR8 == VAR28)
			{
			if (VAR2->VAR29 == NULL || VAR9 > 0)
				{
				*VAR6 = VAR30;
				return 0;
				}
			VAR11 = 1;   
			}

#ifndef VAR31
		else if (VAR8 == VAR32)
			{
			unsigned char *VAR33 = VAR10;
			int VAR34 = *(VAR33++);

			if (VAR34 != VAR9 - 1)
				{
                                *VAR6 = VAR35;
                                return 0;
                                }

                       VAR2->VAR36->VAR37 = 0;

                       if (VAR2->VAR36->VAR38 != NULL) FUN2(VAR2->VAR36->VAR38);

                       if ((VAR2->VAR36->VAR38 = FUN5(VAR34)) == NULL)


                                {

                               *VAR6 = VAR39;

                               return 0;


















                                }

                       VAR2->VAR36->VAR37 = VAR34;

                       memcpy(VAR2->VAR36->VAR38, VAR33, VAR34);
 #if 0
                        fprintf(VAR40,"");
                        VAR33 = VAR2->VAR36->VAR38;
#endif
			}
#endif 

		else if (VAR8 == VAR41)
			{
			if (VAR2->VAR42 &&
			    !VAR2->FUN6(VAR2, VAR10, VAR9, VAR2->VAR43))
				{
				*VAR6 = VAR39;
				return 0;
				}
			if (!FUN7(VAR2) || (VAR9 > 0))
				{
				*VAR6 = VAR44;
				return 0;
				}
			VAR2->VAR45 = 1;
			}
#ifdef VAR46
		else if (VAR8 == VAR46)
			{
			unsigned char *VAR33 = VAR10;

			if (VAR9 < 2)
				{
				*VAR6 = VAR25;
				return 0;
				}
			FUN3(VAR33, VAR2->VAR14->VAR47);
			if (VAR2->VAR14->VAR47 != VAR9 - 2)
				{
				*VAR6 = VAR25;
				return 0;
				}
			
			if (VAR2->VAR14->VAR48 != NULL) 
				FUN2(VAR2->VAR14->VAR48);
			if (VAR2->VAR14->VAR47 == 0)
				VAR2->VAR14->VAR48 = FUN5(1); 
			else
				VAR2->VAR14->VAR48 = FUN8(VAR33, VAR2->VAR14->VAR47);

			if (VAR2->VAR14->VAR48 == NULL)
				{
				*VAR6 = VAR39;
				return 0;
				}
			}
#endif
		else if (VAR8 == VAR49)
			{
			 
			if ((VAR2->VAR50 == -1) || (VAR9 > 0))
				{
				*VAR6 = VAR44;
				return 0;
				}
			
			VAR2->VAR51 = 1;
			}
#ifndef VAR13
		else if (VAR8 == VAR52 &&
			 VAR2->VAR14->VAR53.VAR54 == 0)
			{
			unsigned char *VAR55;
			unsigned char VAR56;

			
			if (VAR2->VAR57->VAR58 == NULL)
				{
				*VAR6 = VAR44;
				return 0;
				}
			
			if (!FUN9(VAR10, VAR9))
				{
				*VAR6 = VAR35;
				return 0;
				}
			if (VAR2->VAR57->FUN10(VAR2, &VAR55, &VAR56, VAR10, VAR9, VAR2->VAR57->VAR59) != VAR60)
				{
				*VAR6 = VAR39;
				return 0;
				}
			VAR2->VAR61 = FUN5(VAR56);
			if (!VAR2->VAR61)
				{
				*VAR6 = VAR39;
				return 0;
				}
			memcpy(VAR2->VAR61, VAR55, VAR56);
			VAR2->VAR62 = VAR56;
			VAR2->VAR14->VAR15 = 1;
			}
#endif

		else if (VAR8 == VAR63)
			{
			unsigned VAR64;

			
			if (VAR2->VAR65 == NULL)
				{
				*VAR6 = VAR44;
				return 0;
				}
			if (VAR9 < 4)
				{
				*VAR6 = VAR35;
				return 0;
				}
			
			VAR64 = VAR10[0];
			VAR64 <<= 8;
			VAR64 |= VAR10[1];
			if (VAR64 != (unsigned) VAR9 - 2)
				{
				*VAR6 = VAR35;
				return 0;
				}
			VAR64 = VAR10[2];
			if (VAR64 != (unsigned) VAR9 - 3)
				{
				*VAR6 = VAR35;
				return 0;
				}
			if (VAR2->VAR14->VAR16)
				FUN2(VAR2->VAR14->VAR16);
			VAR2->VAR14->VAR16 = FUN5(VAR64);
			if (!VAR2->VAR14->VAR16)
				{
				*VAR6 = VAR39;
				return 0;
				}
			memcpy(VAR2->VAR14->VAR16, VAR10 + 3, VAR64);
			VAR2->VAR14->VAR66 = VAR64;
			}

		else if (VAR8 == VAR67)
			{
			if(!FUN11(VAR2, VAR10, VAR9, VAR6))
				return 0;
			VAR12 = 1;
			}
#ifndef VAR17
		else if (VAR8 == VAR68)
			{
			switch(VAR10[0])
				{
				case 0x01:	
							VAR2->VAR18 |= VAR19;
							break;
				case 0x02:	
							VAR2->VAR18 |= VAR19;
							VAR2->VAR18 |= VAR20;
							break;
				default:	*VAR6 = VAR69;
							return 0;
				}
			}
#endif
		else if (VAR8 == VAR70)
                        {
                        if(FUN12(VAR2, VAR10, VAR9,
							      VAR6))
                                return 0;
                        }
		
		else if (VAR2->VAR57->VAR71)
			{
			size_t VAR72;
			VAR73* VAR74;

			for (VAR72 = 0; VAR72 < VAR2->VAR57->VAR71; VAR72++)
				{
				VAR74 = &VAR2->VAR57->VAR75[VAR72];
				if (VAR74->VAR76 == VAR8)
					{
					if (VAR74->VAR77 && !VAR74->FUN13(VAR2, VAR8, VAR10, VAR9, VAR6, VAR74->VAR78))
						return 0;
					break;
					}
				}			
			}
#ifdef VAR21
		else if (VAR8 == VAR21)
			{
			
			if (VAR2->VAR14->VAR53.VAR79->VAR80 != VAR81)
				VAR2->VAR14->VAR22 |= VAR23;
			}
#endif
 
		VAR10 += VAR9;
		}

	if (VAR10 != VAR4+VAR5)
		{
		*VAR6 = VAR25;
		return 0;
		}

	if (!VAR2->VAR82 && VAR11 == 1)
		{
 		if (VAR2->VAR29)
			{
			if (VAR2->VAR36->VAR29 == NULL)
				{
				VAR2->VAR36->VAR29 = FUN14(VAR2->VAR29);	
				if (!VAR2->VAR36->VAR29)
					{
					*VAR6 = VAR83;
					return 0;
					}
				}
			else 
				{
				*VAR6 = VAR25;
				return 0;
				}
			}
		}

	*VAR3 = VAR10;

	VAR24:

	
	if (!VAR12
		&& !(VAR2->VAR84 & VAR85)
		&& !(VAR2->VAR84 & VAR86))
		{
		*VAR6 = VAR87;
		FUN15(VAR88,
				VAR89);
		return 0;
		}

	return 1;
	}