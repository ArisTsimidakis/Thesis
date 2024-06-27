unsigned int FUN1(struct VAR1 *VAR1)
{
	int VAR2;
	struct VAR3 *VAR3 = FUN2(VAR1);

	
	FUN3(!FUN4(VAR1));

	FUN5(FUN6(VAR1), VAR1);

	
	FUN7(FUN8(VAR3));

	if (!FUN9(VAR1)) {
		
		VAR2 = 1;
		goto VAR4;
	}

	VAR2 = FUN10(VAR1);
	FUN11(VAR3, VAR5, -VAR2);

	if (FUN12(VAR1, true)) {
		FUN13(FUN8(VAR3));
		FUN14(VAR1);
		goto VAR6;
	}
	FUN15(VAR1);

VAR4:
	FUN13(FUN8(VAR3));

VAR6:
	return VAR2 - 1;
}