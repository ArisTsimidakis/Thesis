static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
	{
	if (VAR3)
		{
		VAR1 *VAR4;
		do 
			{
			VAR4 = FUN2(VAR2);
 			FUN3(VAR2);
 			VAR2 = VAR4;
 			}

		while (VAR2 != VAR3);


 		}
 	else
 		FUN4(VAR2);
	}