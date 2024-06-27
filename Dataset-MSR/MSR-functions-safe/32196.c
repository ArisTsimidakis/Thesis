void FUN1(void)
{
	struct list_head VAR1;

	
	FUN2(&VAR2, &VAR1);

	FUN3();

	while (!FUN4(&VAR1)) {
		struct VAR3 *VAR4
			= FUN5(&VAR1, struct VAR3, VAR5);
		FUN6(&VAR4->VAR5);

		if (FUN7(VAR4->VAR6 != VAR7)) {
			FUN8(VAR8 "",
			       VAR4->VAR9, VAR4->VAR6);
			FUN9();
			continue;
		}

		VAR4->VAR6 = VAR10;

		FUN10(VAR11, VAR4, 1);

		FUN11(VAR4);

		
		FUN12(FUN13(&VAR4->VAR12));
		FUN14(VAR4->VAR13);
		FUN14(VAR4->VAR14);
		FUN14(VAR4->VAR15);

		if (VAR4->VAR16)
			VAR4->FUN15(VAR4);

		
		FUN16(&VAR4->VAR4.VAR17);
	}
}