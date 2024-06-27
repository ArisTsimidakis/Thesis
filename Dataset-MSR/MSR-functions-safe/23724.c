void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3,
					    VAR5.VAR2);
	bool VAR6 = false;

	FUN3(&VAR4->VAR7);
	if (VAR4->VAR8)
		goto VAR9;

	if (VAR4->VAR10 == 0)
		goto VAR11;

	VAR6 = FUN4(VAR4);

	if (FUN5(VAR4)) {
		FUN6(&VAR4->VAR7);
		FUN7();
		FUN3(&VAR4->VAR7);

		FUN8(VAR4);

		FUN6(&VAR4->VAR7);
		FUN9();	
		FUN3(&VAR4->VAR7);
	}

VAR11:
	if (VAR4->VAR12.VAR13)
		FUN10(VAR4->VAR14, &VAR4->VAR5,
				   FUN11(VAR4->VAR12.VAR13));
VAR9:
	FUN6(&VAR4->VAR7);

	if (VAR6) {
		FUN7();
		FUN12(VAR4->VAR15, VAR16);
		FUN9();
	}
}