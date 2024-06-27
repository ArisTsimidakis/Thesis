FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
	int VAR4 = 0;
	struct VAR5 *VAR5;
	struct VAR5 *VAR6 = VAR2->VAR3.VAR5;

	
	if (VAR2->VAR7 & VAR8) {
		if (FUN2(VAR2, NULL)) {
			VAR4 = -VAR9;
			goto VAR10;
		}
	}

	VAR2->VAR7 &= ~VAR11;

	if (FUN3(VAR2->VAR12 != VAR13)) {
		VAR4 = FUN4(VAR2, VAR2->VAR12);
		if (VAR4)
			goto VAR10;
		VAR5 = FUN5(VAR2->VAR3.VAR5);
		goto VAR14;
	}

	FUN6(&VAR6->VAR15->VAR16);
	VAR5 = FUN7(VAR6, &VAR2->VAR17);
	if (!VAR5) {
		
		VAR5 = FUN8(VAR6, &VAR2->VAR17);
		if (!VAR5) {
			VAR4 = -VAR18;
			FUN9(&VAR6->VAR15->VAR16);
			goto VAR10;
		}
		VAR5 = FUN10(VAR6->VAR15, VAR5, VAR2->VAR7);
		VAR4 = FUN11(VAR5);
		if (FUN12(VAR5)) {
			FUN9(&VAR6->VAR15->VAR16);
			goto VAR10;
		}
	}
	FUN9(&VAR6->VAR15->VAR16);

VAR14:
	if (!VAR5->VAR15 || FUN13(VAR5)) {
		VAR4 = -VAR19;
		FUN14(VAR5);
 		goto VAR10;
 	}
 	VAR3->VAR5 = VAR5;

	VAR3->VAR20 = FUN15(VAR2->VAR3.VAR20);


 	if (FUN16(VAR5, VAR2->VAR7 & VAR21))
 		return 1;


 	FUN17(VAR3);
 	VAR4 = 0;
 VAR10:
	FUN18(VAR2);
	return VAR4;
}