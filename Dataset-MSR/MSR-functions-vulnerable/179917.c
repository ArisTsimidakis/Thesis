FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned char *VAR5)
	{
	VAR6 *VAR7;
	VAR8 *VAR9;

 	
 	if (FUN2(VAR4->VAR10) >= 100)
 		return 0;

		


 	VAR7 = FUN3(sizeof(VAR6));
 	VAR9 = FUN4(VAR5, VAR7);
 	if (VAR7 == NULL || VAR9 == NULL)
		{
		if (VAR7 != NULL) FUN5(VAR7);
		if (VAR9 != NULL) FUN6(VAR9);
		
		FUN7(VAR11, VAR12);
		return(0);
		}
	
	VAR7->VAR13 = VAR2->VAR13;
	VAR7->VAR14 = VAR2->VAR14;
	memcpy(&(VAR7->VAR15), &(VAR2->VAR16->VAR15), sizeof(VAR17));
	memcpy(&(VAR7->VAR18), &(VAR2->VAR16->VAR18), sizeof(VAR19));

	VAR9->VAR20 = VAR7;

#ifndef VAR21
	
	if (FUN8(FUN9(VAR2)) &&
	    (VAR2->VAR22 == VAR23 || VAR2->VAR22 == VAR24)) {
		FUN10(FUN9(VAR2), VAR25, sizeof(VAR7->VAR26), &VAR7->VAR26);
	}
#endif

	VAR2->VAR13 = NULL;
	VAR2->VAR14 = 0;
	memset(&(VAR2->VAR16->VAR15), 0, sizeof(VAR17));
	memset(&(VAR2->VAR16->VAR18), 0, sizeof(VAR19));
	
 	if (!FUN11(VAR2))
 		{
 		FUN7(VAR11, VAR12);




 		FUN5(VAR7);
 		FUN6(VAR9);

		return(0);


 		}
 
 	
 	if (FUN12(VAR4->VAR10, VAR9) == NULL)
 		{
 		FUN7(VAR11, VAR12);




 		FUN5(VAR7);
 		FUN6(VAR9);

		return(0);


 		}
 
 	return(1);
	}