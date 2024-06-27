FUN1(VAR1 * VAR2)
{
	uint8 VAR3, VAR4;
 	uint16 VAR5;
 	uint16 VAR6;
 	STREAM VAR7;


 
 	while ((VAR7 = FUN2(&VAR6, VAR2, &VAR3)) != NULL)
 	{


 		if (*VAR2 == VAR8)
 		{
 			
			
 			VAR4 = (VAR3 & 0xC0) >> 6;
 			if (VAR4 & VAR9)
 			{








 				FUN3(VAR7, 8);	
 				FUN4(VAR7->VAR10, VAR7->VAR11 - VAR7->VAR10);
 			}
			return VAR7;
		}

		if (VAR12 || (!VAR13 && !VAR14))
		{
			
			FUN5(VAR7, VAR5);
			FUN3(VAR7, 2);	

			if (VAR12)
 			{
 				if (VAR5 & VAR15)
 				{








 					FUN3(VAR7, 8);	
 					FUN4(VAR7->VAR10, VAR7->VAR11 - VAR7->VAR10);
 				}

				if (VAR5 & VAR16)
				{
					FUN6(VAR7);
					continue;
				}

				if (VAR5 & VAR17)
 				{
 					uint8 VAR18;
 








 					FUN3(VAR7, 8);	
 					FUN4(VAR7->VAR10, VAR7->VAR11 - VAR7->VAR10);
 
					
					if (VAR7->VAR10[0] == 0 && VAR7->VAR10[1] == 4)
					{
						
						VAR18 = VAR7->VAR10[0];
						VAR7->VAR10[0] = VAR7->VAR10[2];
						VAR7->VAR10[2] = VAR18;

						VAR18 = VAR7->VAR10[1];
						VAR7->VAR10[1] = VAR7->VAR10[3];
						VAR7->VAR10[3] = VAR18;

						VAR18 = VAR7->VAR10[2];
						VAR7->VAR10[2] = VAR7->VAR10[3];
						VAR7->VAR10[3] = VAR18;
					}
				}
			}
			else
			{
				if (VAR5 & VAR16)
				{
					FUN6(VAR7);
					continue;
				}
				VAR7->VAR10 -= 4;
			}
		}

		if (VAR6 != VAR19)
		{
			FUN7(VAR7, VAR6);
			continue;
		}

		return VAR7;
	}

	return NULL;
}