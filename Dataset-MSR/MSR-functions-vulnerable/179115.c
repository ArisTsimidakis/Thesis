static void FUN1(struct VAR1 *VAR1)
 {
 	struct VAR2 *new, *VAR3 = NULL;
	struct VAR4 *VAR5;
	int VAR6;

	new = FUN2(sizeof(struct VAR2), VAR7);

	FUN3(&VAR1->VAR8.VAR9);

	if (!new)
		goto VAR10;

	new->VAR11 = 8;
	
	new->VAR12 = 8;
	new->VAR13 = 0;
	new->VAR14 = 0xff;

	FUN4(VAR6, VAR5, VAR1) {
		struct VAR15 *VAR16 = VAR5->VAR8.VAR16;
		u16 VAR17, VAR18;
		u32 VAR19;

		if (!FUN5(VAR5))
			continue;

		
 		if (FUN6(VAR16)) {
 			new->VAR11 = 32;
 			new->VAR12 = 16;

			new->VAR13 = new->VAR14 = 0xffff;




 		} else if (FUN7(VAR16) &&
 				!new->VAR13  &&
 				FUN8(VAR16, VAR20) == VAR21) {
			new->VAR12 = 4;
			new->VAR13 = 0xf;
			new->VAR14 = 0xf;
		}

		new->VAR22[FUN9(VAR16)] = VAR16;

		VAR19 = FUN8(VAR16, VAR23);
		VAR17 = FUN10(new, VAR19);
		VAR18 = FUN11(new, VAR19);

		if (VAR18)
			new->VAR24[VAR17][FUN12(VAR18) - 1] = VAR16;
	}
VAR10:
	VAR3 = FUN13(VAR1->VAR8.VAR25,
			FUN14(&VAR1->VAR8.VAR9));
	FUN15(VAR1->VAR8.VAR25, new);
	FUN16(&VAR1->VAR8.VAR9);

	if (VAR3)
		FUN17(VAR3, VAR26);

	FUN18(VAR1);
}