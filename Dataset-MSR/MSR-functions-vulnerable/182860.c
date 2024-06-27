static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5;
	struct VAR6 *VAR7 = VAR4->VAR7;
	struct VAR8 *VAR9, *VAR10;
	
	struct userfaultfd_wake_range VAR11 = { .VAR12 = 0, };
	unsigned long VAR13;

	FUN2(VAR4->VAR14, true);

	if (!FUN3(VAR7))
		goto VAR15;

	
 	FUN4(&VAR7->VAR16);




 	VAR10 = NULL;
 	for (VAR9 = VAR7->VAR17; VAR9; VAR9 = VAR9->VAR18) {
 		FUN5();
		FUN6(!!VAR9->VAR19.VAR4 ^
		       !!(VAR9->VAR20 & (VAR21 | VAR22)));
		if (VAR9->VAR19.VAR4 != VAR4) {
			VAR10 = VAR9;
			continue;
		}
		VAR13 = VAR9->VAR20 & ~(VAR21 | VAR22);
		VAR10 = FUN7(VAR7, VAR10, VAR9->VAR23, VAR9->VAR24,
				 VAR13, VAR9->VAR25,
				 VAR9->VAR26, VAR9->VAR27,
				 FUN8(VAR9),
				 VAR28);
		if (VAR10)
			VAR9 = VAR10;
		else
			VAR10 = VAR9;
 		VAR9->VAR20 = VAR13;
 		VAR9->VAR19 = VAR28;
 	}


 	FUN9(&VAR7->VAR16);
 	FUN10(VAR7);
 VAR15:
	
	FUN11(&VAR4->VAR29.VAR30);
	FUN12(&VAR4->VAR29, VAR31, &VAR11);
	FUN13(&VAR4->VAR32, VAR31, 1, &VAR11);
	FUN14(&VAR4->VAR29.VAR30);

	
	FUN15(&VAR4->VAR33);

	FUN16(&VAR4->VAR34, VAR35);
	FUN17(VAR4);
	return 0;
}