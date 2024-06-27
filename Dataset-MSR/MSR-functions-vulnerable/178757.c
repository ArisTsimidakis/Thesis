static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR4;
	struct VAR5 *VAR6;
	int VAR7;

	VAR4->VAR8 = 5 * VAR9;
 	VAR4->VAR10 = VAR2->VAR11->VAR10;
 	VAR4->VAR12 = &VAR13;
 	FUN2(VAR4, &VAR14);


 
 	
 	VAR2->VAR15->FUN3(VAR2);
	memset(&VAR2->VAR16, 0, sizeof(VAR2->VAR16));

	FUN4();

	VAR7 = FUN5(VAR4, VAR4->VAR17);
	if (VAR7 < 0)
		goto VAR18;
	FUN6(VAR2);

	VAR7 = FUN7(VAR4);
	if (VAR7)
		goto VAR18;

	FUN8(VAR6, VAR2) {
		struct VAR19 *VAR20;
		FUN9(VAR20, VAR6)
			FUN10(VAR20);
	}

	
	FUN11(VAR2->VAR4);

	FUN12();

	VAR7 = FUN13(&VAR2->VAR11->VAR21, &VAR22);
	if (VAR7) {
		FUN14(VAR2, VAR23, VAR2->VAR4,
			  "");
		goto VAR24;
	}

	return 0;

VAR18:
	FUN12();
	FUN14(VAR2, VAR23, VAR2->VAR4, "");
	return VAR7;

VAR24:
	FUN15(VAR4);
	return VAR7;
}