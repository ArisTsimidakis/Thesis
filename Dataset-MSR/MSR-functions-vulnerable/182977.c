FUN1(STREAM VAR1)
{
	uint32 VAR2;
 	uint16 VAR3;
 	uint16 VAR4;
 	uint16 VAR5;


 
 	FUN2(VAR6, VAR7, "");
 	

	FUN3(VAR1, VAR4);
	FUN3(VAR1, VAR5);

	if (VAR4 == VAR8)
	{
		switch (VAR5)
		{
			case VAR9:
				FUN4(VAR1);
				break;

			case VAR10:
 				
 				FUN5(VAR1, 2);	
 				FUN6(VAR1, VAR3);	


 				FUN7(VAR1, VAR11);	
 


















 				
 				if (VAR3 < 0x000c)
					VAR11 = 0x815ed39d;	
				VAR12++;

#if VAR13
				
				FUN8();

				

#endif

				FUN9();
				FUN10();
				break;

			case VAR14:
				FUN11();
				break;

			case VAR15:
				FUN12(VAR1, VAR2);
				FUN2(VAR6, VAR7,
				       "", VAR2);
				break;

			case VAR16:
				FUN13();
				break;

			default:
				FUN2(VAR6, VAR7,
				       "", VAR5,
				       VAR4);
				break;

		}
	}
	else if (VAR4 == VAR17)
	{
		if (VAR5 == VAR18)
			FUN14(VAR1);
	}
	else
		FUN2(VAR6, VAR19, "", VAR4);
}