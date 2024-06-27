static int FUN1(struct VAR1 *VAR1, u32 VAR2)
{
 	int VAR3;
 	struct VAR4 *VAR5, *VAR6;
 






 	VAR5 = FUN2(VAR1, VAR2);
 	if (FUN3(VAR5))
 		return FUN4(VAR5);

	FUN5(&VAR5->VAR7, &VAR8);

	VAR3 = FUN6(VAR5);
	if (VAR3)
		goto VAR9;

	FUN7(&VAR1->VAR10);
	if (!FUN8(VAR5)) {
		VAR3 = -VAR11;
		goto VAR12;
	}
	if (FUN9(&VAR1->VAR13) == VAR14) {
		VAR3 = -VAR11;
		goto VAR12;
	}

	FUN10(VAR3, VAR6, VAR1)
		if (VAR6->VAR15 == VAR2) {
			VAR3 = -VAR16;
			goto VAR12;
		}

	FUN11(VAR1->VAR17[FUN9(&VAR1->VAR13)]);

	
	FUN12(VAR1);
	VAR3 = FUN13(VAR5);
	if (VAR3 < 0) {
		FUN14(VAR1);
		goto VAR12;
	}

	VAR1->VAR17[FUN9(&VAR1->VAR13)] = VAR5;
	FUN15();
	FUN16(&VAR1->VAR13);

	FUN17(&VAR1->VAR10);
	FUN18(VAR5);
	return VAR3;

VAR12:
	FUN17(&VAR1->VAR10);
VAR9:
	FUN19(VAR5);
	return VAR3;
}