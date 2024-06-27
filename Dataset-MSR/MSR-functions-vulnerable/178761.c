int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
#ifdef VAR4
	struct VAR5 *VAR6;
#endif
 	struct VAR7 *new;
 	int VAR8;
 




 	if (
 #ifdef VAR4
 		!VAR2->VAR7->VAR9 &&
#endif
		VAR3 & VAR10
	    ) {
		VAR2->VAR11 = FUN2(VAR2->VAR7);
		FUN2(VAR2->VAR7);
		FUN3(VAR2->VAR7, 2);
		FUN4("",
		       VAR2->VAR7, FUN5(&VAR2->VAR7->VAR12),
		       FUN6(VAR2->VAR7));
		FUN7(&VAR2->VAR7->VAR13->VAR14);
		return 0;
	}

	new = FUN8();
	if (!new)
		return -VAR15;

	if (VAR3 & VAR16) {
		VAR8 = FUN9(new);
		if (VAR8 < 0)
			goto VAR17;
	}

	
	new->VAR18 = new->VAR13->VAR18;

#ifdef VAR4
	
	if (new->VAR9) {
		FUN10(new->VAR9);
		new->VAR9 = NULL;
		if (VAR3 & VAR10)
			FUN11(new);
	}

	
	if (!(VAR3 & VAR10)) {
		VAR6 = FUN12(sizeof(*VAR6), VAR19);
		if (!VAR6) {
			VAR8 = -VAR15;
			goto VAR17;
		}
		FUN13(&VAR6->VAR12, 1);
		FUN14(&VAR6->VAR20);
		VAR6->VAR21 = NULL;
		VAR6->VAR22 = FUN15(new->VAR6->VAR22);

		FUN16(new);
		new->VAR6 = VAR6;
	}
#endif

	FUN7(&new->VAR13->VAR14);
	VAR2->VAR7 = VAR2->VAR11 = FUN2(new);
	FUN3(new, 2);
	FUN17(new);
	return 0;

VAR17:
	FUN18(new);
	return VAR8;
}