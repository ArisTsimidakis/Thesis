void FUN1(struct VAR1 *VAR2)


 {
 	struct VAR3 *VAR4 = VAR2->VAR4;
 	struct VAR5 *VAR6 = VAR4->VAR6;

	if (!VAR6) {
		
		FUN2(VAR2->VAR7, VAR8, VAR2);
		return;
	}

	FUN3(&VAR4->VAR9);
	if (VAR2->VAR10 >= VAR11)
		goto VAR12;

	
	if (VAR2->VAR10 == VAR13)
		VAR2->VAR10 = VAR14;

VAR15:
	if (!VAR4->VAR16) {
		FUN4(VAR2);
		goto VAR12;
	}

	FUN5(&VAR4->VAR9);

	if (!FUN6(VAR6, VAR8, VAR2))
		return;

	FUN3(&VAR4->VAR9);

	
	if (VAR4->VAR16 && VAR2->VAR10 == VAR14) {
		
		VAR6 = VAR4->VAR6;
		goto VAR15;
	}

 VAR12:
 	FUN5(&VAR4->VAR9);
 }