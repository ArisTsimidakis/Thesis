void FUN1(unsigned long VAR1)
{
 	int VAR2 = 0;
 	struct VAR3 *VAR4 = (struct VAR3 *) VAR1;
 	struct VAR5 *VAR6 = VAR4->VAR6;

	struct VAR7 *VAR7 = FUN2(VAR6->VAR8.VAR9);




 

	FUN3(VAR6->VAR8.VAR9);

	if (FUN4(VAR6->VAR8.VAR9)) {




 		FUN5("", VAR10);
 
 		
		if (!FUN6(&VAR4->VAR11, VAR12 + (VAR13/20)))
			FUN7(VAR4);
		goto VAR14;
	}

	
	if (VAR4->VAR15)
		goto VAR14;

	VAR2 = FUN8(VAR7, VAR16,
			   FUN9(VAR17),
			   VAR6->VAR18, VAR6->VAR19, VAR6,
 			   VAR4, VAR20);
 
 	if (VAR2)

		VAR6->VAR8.VAR9->VAR21 = -VAR2;


 
 VAR14:

	FUN10(VAR6->VAR8.VAR9);


 	FUN11(VAR4);
 }