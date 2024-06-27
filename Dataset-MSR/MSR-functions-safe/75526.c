int FUN1(struct VAR1 *VAR2, pm_message_t VAR3)
{
	struct VAR4	*VAR5 = FUN2(VAR2->VAR6);
	struct VAR7 *VAR8 = VAR5->VAR9[VAR2->VAR10 - 1];
	int		VAR11 = VAR2->VAR10;
	int		VAR12;
	bool		VAR13 = true;

	FUN3(VAR8);

	
	if (VAR2->VAR14) {
		VAR12 = FUN4(VAR2);
		if (VAR12) {
			FUN5(&VAR2->VAR15, "",
					VAR12);
			
			if (FUN6(VAR3))
				goto VAR16;
		}
	}

	
	if (VAR2->VAR17 == 1)
		FUN7(VAR2, 0);

	if (FUN8(VAR2)) {
		FUN9(&VAR2->VAR15, "");
		VAR12 = -VAR18;
		if (FUN6(VAR3))
			goto VAR19;
	}

	
	if (FUN10(VAR5->VAR20))
		VAR12 = FUN11(VAR5, VAR11, VAR21);

	
	else if (FUN6(VAR3) || FUN12(VAR2) > 0)
		VAR12 = FUN13(VAR5->VAR20, VAR11,
				VAR22);
	else {
		VAR13 = false;
		VAR12 = 0;
	}
	if (VAR12) {
		FUN5(&VAR8->VAR15, "", VAR12);

		
		FUN14(VAR2);
 VAR19:
		
		if (VAR2->VAR23 == 1)
			FUN7(VAR2, 1);

		if (VAR2->VAR14)
			(void) FUN15(VAR2);
 VAR16:

		
		if (!FUN6(VAR3))
			VAR12 = 0;
	} else {
		FUN5(&VAR2->VAR15, "",
				(FUN6(VAR3) ? "" : ""),
				VAR2->VAR14);
		if (VAR13) {
			VAR2->VAR24 = 1;

			
			FUN16(10);
		}
		FUN17(VAR2, VAR25);
	}

	if (VAR12 == 0 && !VAR2->VAR14 && VAR2->VAR26
			&& FUN18(VAR11, VAR5->VAR27))
		FUN19(&VAR8->VAR15);

	FUN20(VAR5->VAR20);

	FUN21(VAR8);
	return VAR12;
}