static void FUN1(struct VAR1 *VAR2, fmode_t VAR3)


 {

	struct VAR4 *VAR5 = VAR2->VAR6;
 	int VAR7;
 
 	if (FUN2(&VAR5->VAR8))
		return;

	FUN3(&VAR5->VAR9);
	if (VAR5->VAR10 & VAR11) {
		
		VAR7 = FUN4(VAR5);
		if (!VAR7)
			return;
	} else if (VAR5->VAR12 == VAR13) {
		
		FUN5(VAR5->VAR14);
		FUN6(VAR5->VAR14);
	}

 	FUN7(&VAR5->VAR9);
 }