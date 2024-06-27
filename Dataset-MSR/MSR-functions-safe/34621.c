int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR4)->VAR6;
	struct VAR7 *VAR8 = &VAR6->VAR9->VAR8;
	struct VAR10 *VAR9 = NULL;
	int VAR11 = 0;

	VAR9 = VAR6->VAR9;

	
	if (VAR9->VAR12) {
		FUN3(VAR6);
		goto VAR13;
	}

	if (FUN4(VAR9->VAR2 != VAR2)) {
		

		VAR2 = VAR9->VAR2;
		FUN5(VAR2);

		if (FUN6(VAR2)) {
			FUN7(VAR2, VAR4);
			VAR11 = 1;
		} else
			FUN8(VAR8, VAR6);

		FUN9(VAR2);

		
		if (VAR11)
			return 0;
	} else {
		FUN8(VAR8, VAR6);
	}

VAR13:
	
	if (VAR14 == VAR9->VAR15)
		FUN10(FUN11(VAR9));
	else if (VAR16 == VAR9->VAR15)
		FUN12(FUN13(VAR9));
	else
		FUN14();

	return 0;
}