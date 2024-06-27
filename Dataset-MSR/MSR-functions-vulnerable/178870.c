static void FUN1(void *VAR1)
{
	struct VAR2 *VAR3 = VAR1;
	struct VAR4 *VAR5 = NULL;

	
	if (VAR3->VAR6 == 0)
		goto VAR7;
	
	if (VAR3->VAR8 != 0 || !VAR3->VAR9)
		goto VAR7;
	
	if (VAR3->VAR10.VAR11 & VAR12)
 		goto VAR7;
 	VAR5 = FUN2(VAR3);
 	if (!FUN3(VAR5))

		FUN4(&VAR3->VAR13, VAR5, VAR3->VAR14.VAR15);


 VAR7:
 	FUN5(VAR3);
 }