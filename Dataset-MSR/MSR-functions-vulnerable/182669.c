static VAR1 FUN1(VAR2* VAR3)
{
	
	VAR4* VAR5, *VAR6, *VAR7, *VAR8, *VAR9;
	int VAR10, VAR11;
	int VAR12, VAR13;
	VAR11 = VAR10 = FUN2(VAR3);

	if (VAR10 < 2)
		return VAR14;

	VAR5 = FUN3(VAR3);
	VAR7 = VAR5 + VAR10;

	do
	{
		VAR6 = FUN4(VAR5, VAR7, &VAR12);

		if (VAR6 == VAR7)
			break;

		if ((VAR5->VAR15 == VAR6->VAR16) && FUN5(VAR5, VAR6, VAR7))
		{
			
			VAR9 = VAR5;

			while (VAR9 < VAR6)
			{
				VAR9->VAR15 = VAR6->VAR15;
				VAR9++;
			}

			
			VAR8 = VAR6 + VAR12;
			VAR13 = (VAR7 - VAR8) * sizeof(VAR4);

			if (VAR13)
				FUN6(VAR6, VAR8, VAR13);

			VAR11 -= VAR12;
			VAR7 -= VAR12;
		}
		else
		{
			VAR5 = VAR6;
		}
	}
	while (VAR14);
 
 	if (VAR11 != VAR10)
 	{

		int VAR17 = sizeof(VAR18) + (VAR11 * sizeof(VAR4));

		VAR3->VAR19 = realloc(VAR3->VAR19, VAR17);












 
 		if (!VAR3->VAR19)
 		{
			VAR3->VAR19 = &VAR20;
			return VAR21;
		}

		VAR3->VAR19->VAR10 = VAR11;
		VAR3->VAR19->VAR22 = VAR17;
	}

	return VAR14;
}