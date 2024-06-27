FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, int VAR8, int VAR9)
{
	int VAR10;
	VAR11 *VAR12;

	if (VAR5 > VAR6)
	{
		FUN2(VAR2, "", VAR4->VAR13);
		return;
	}

	VAR12 = VAR4->VAR12;

	if (VAR4->VAR14)
	{
		unsigned int move = VAR4->VAR15;
		unsigned int VAR16 = VAR17;
		unsigned int VAR18 = VAR17;
		if (VAR8)
		{
			
			do
			{
				VAR10 = move;
				
				if (VAR5 <= VAR12[VAR10].VAR5 && VAR12[VAR10].VAR5 <= VAR6)
				{
					
					
					VAR12[VAR10].VAR7 += VAR6 + 1 - VAR12[VAR10].VAR5;
					VAR12[VAR10].VAR5 = VAR6 + 1;
					if (VAR12[VAR10].VAR5 > VAR12[VAR10].VAR6)
					{
						move = FUN3(VAR4, VAR10);
						VAR10 = VAR17;
						continue;
					}
				}
				else if (VAR5 <= VAR12[VAR10].VAR6 && VAR12[VAR10].VAR6 <= VAR6)
				{
					
					VAR12[VAR10].VAR6 = VAR5 - 1;
					assert(VAR12[VAR10].VAR5 <= VAR12[VAR10].VAR6);
				}
				else if (VAR12[VAR10].VAR5 < VAR5 && VAR6 < VAR12[VAR10].VAR6)
				{
					
                                        int VAR19 = VAR12[VAR10].VAR6;
                                        VAR12[VAR10].VAR6 = VAR5-1;
                                        FUN1(VAR2, VAR4, VAR6+1, VAR19, VAR12[VAR10].VAR7 + VAR6 + 1 - VAR12[VAR10].VAR5, 0, VAR12[VAR10].VAR9);


                                }
                                
                                if (VAR12[VAR10].VAR5 > VAR6) {
					VAR16 = VAR10;
				}
				else
				{
					move = VAR12[VAR10].VAR20;
					VAR18 = VAR10;
				}
			}
			while (move != VAR17);
		}
		else
		{
			do
			{
				VAR10 = move;
				if (VAR12[VAR10].VAR5 > VAR6)
				{
					move = VAR12[VAR10].VAR21;
					VAR16 = VAR10;
				}
				else
				{
					move = VAR12[VAR10].VAR20;
					VAR18 = VAR10;
				}
			} while (move != VAR17);
		}
		
		
		

		if (!VAR9)
		{
			
			if (VAR18 != VAR17 && !VAR12[VAR18].VAR9 && VAR12[VAR18].VAR6 == VAR5-1 && VAR12[VAR18].VAR7 - VAR12[VAR18].VAR5 == VAR7 - VAR5)
			{
				VAR12[VAR18].VAR6 = VAR6;
				if (VAR16 != VAR17 && !VAR12[VAR16].VAR9 && VAR12[VAR16].VAR5 == VAR6+1 && VAR12[VAR16].VAR7 - VAR12[VAR16].VAR5 == VAR7 - VAR5)
				{
					VAR12[VAR18].VAR6 = VAR12[VAR16].VAR6;
					FUN3(VAR4, VAR16);
				}
				goto VAR22;
			}
			if (VAR16 != VAR17 && !VAR12[VAR16].VAR9 && VAR12[VAR16].VAR5 == VAR6+1 && VAR12[VAR16].VAR7 - VAR12[VAR16].VAR5 == VAR7 - VAR5)
			{
				VAR12[VAR16].VAR5 = VAR5;
				VAR12[VAR16].VAR7 = VAR7;
				goto VAR22;
			}
		}
	}
	else
		VAR10 = VAR17;

	if (VAR4->VAR14 == VAR4->VAR23)
	{
		int VAR24 = VAR4->VAR23 ? VAR4->VAR23 * 2 : 256;
		VAR12 = VAR4->VAR12 = FUN4(VAR2, VAR4->VAR12, VAR24, sizeof *VAR4->VAR12);
		VAR4->VAR23 = VAR24;
	}
	VAR12[VAR4->VAR14].VAR5 = VAR5;
	VAR12[VAR4->VAR14].VAR6 = VAR6;
	VAR12[VAR4->VAR14].VAR7 = VAR7;
	VAR12[VAR4->VAR14].VAR25 = VAR10;
	VAR12[VAR4->VAR14].VAR21 = VAR17;
	VAR12[VAR4->VAR14].VAR20 = VAR17;
	VAR12[VAR4->VAR14].VAR9 = VAR9;
	VAR4->VAR14++;
	if (VAR10 == VAR17)
		VAR4->VAR15 = 0;
	else if (VAR12[VAR10].VAR5 > VAR6)
		VAR12[VAR10].VAR21 = VAR4->VAR14-1;
	else
	{
		assert(VAR12[VAR10].VAR6 < VAR5);
		VAR12[VAR10].VAR20 = VAR4->VAR14-1;
	}
	FUN5(VAR12, VAR4->VAR14-1);
	VAR4->VAR15 = VAR4->VAR14-1;
VAR22:
	{}
#ifdef VAR26
	FUN6(VAR4->VAR12, VAR4->VAR15, 0);
#endif
#ifdef VAR27
	FUN7(VAR4->VAR12, VAR4->VAR15, 0, "");
#endif
}