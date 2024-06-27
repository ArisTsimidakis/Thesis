void FUN1(struct VAR1 *VAR2)
{
	FUN2(!VAR2->VAR3);

	VAR2->VAR3 = 0;
	VAR2->VAR4 = VAR2->VAR5;
	FUN3(&VAR2->VAR6);

	FUN4(&VAR2->VAR7->VAR8);

	
	FUN5(VAR2, VAR9);
	FUN6(VAR2);

	
	if (!(VAR2->VAR10 & VAR11) &&
	    (VAR2->signal->VAR10 & VAR12 ||
	     VAR2->signal->VAR13)) {
		VAR2->VAR14 |= VAR15;

		
		if (!(VAR2->VAR14 & VAR16))
			VAR2->VAR14 |= VAR17;
	}

	
	if (VAR2->VAR14 & VAR15 || FUN7(VAR2))
		FUN8(VAR2, true);

 	FUN9(&VAR2->VAR7->VAR8);
 }