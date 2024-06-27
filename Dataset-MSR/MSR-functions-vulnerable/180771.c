VAR1* FUN1(VAR2* VAR3, VAR4* VAR5, VAR6* VAR7)
{
	VAR1* VAR8;

	VAR8 = (VAR1*) malloc(sizeof(VAR1));
	FUN2(VAR8, sizeof(VAR1));

	if (VAR8 != NULL)
	{
		HKEY VAR9;
		LONG VAR10;
		DWORD VAR11;
		DWORD VAR12;

		VAR8->VAR3 = VAR3;
		VAR8->VAR7 = VAR7;
		VAR8->VAR13 = VAR7->VAR14;
		VAR8->VAR5 = VAR5;
		VAR8->VAR15 = 0;
		VAR8->VAR16 = 0;
 		FUN2(&VAR8->VAR17, sizeof(VAR18));
 		FUN2(&VAR8->VAR19, sizeof(VAR18));
 		FUN2(&VAR8->VAR20, sizeof(VAR18));


 
 		if (VAR8->VAR13)
 		{
			VAR10 = FUN3(VAR21, FUN4(""),
					0, VAR22 | VAR23, &VAR9);

			if (VAR10 == VAR24)
			{
				VAR10 = RegQueryValueEx(VAR9, FUN4(""), NULL, &VAR11, NULL, &VAR12);

				if (VAR10 == VAR24)
				{
					VAR8->VAR25 = (VAR26) malloc(VAR12 + sizeof(VAR27));

					VAR10 = RegQueryValueEx(VAR9, FUN4(""), NULL, &VAR11,
							(VAR28*) VAR8->VAR25, &VAR12);

					if (VAR10 == VAR24)
					{
						FUN5(FUN4(""), VAR8->VAR25);
						FUN6(VAR9);
					}
				}
			}
		}
	}

	return VAR8;
}