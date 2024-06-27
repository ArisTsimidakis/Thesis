void FUN1(struct VAR1 *VAR1)
{
VAR2:
	if (!FUN2(VAR1))
		return;
	if (!FUN3(VAR1))
		return;

	
	if (VAR1->VAR3 == VAR4) {
		VAR1 = FUN4(VAR1);
		goto VAR2;
	}

	if (VAR1->VAR5 && FUN5(VAR1, VAR6)) {
		FUN6(VAR1->VAR5->VAR7, VAR1,
					 FUN7(VAR1->VAR8));
		FUN8(VAR1, VAR6);
	}

	FUN9(VAR1);
	
	FUN10(VAR1);
	if (VAR1->VAR3)
		VAR1->FUN11(VAR1);
}