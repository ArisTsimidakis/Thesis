static void FUN1(struct VAR1 *VAR2,
					  struct VAR3 *VAR3)
{
	
	struct VAR4 *VAR5 = VAR2->VAR6;
	struct VAR7 *VAR8 = FUN2(VAR5->VAR9.VAR10);
	struct VAR11 *VAR12 = FUN3(VAR8);
	struct VAR4 *VAR13;
	struct VAR14 *VAR15;

	
	unsigned char VAR16[3];

	if (VAR3->VAR17[VAR18] &
	    VAR19) {
		FUN4("", VAR20);
		VAR2->VAR21 = false;
 		return;
 	}
 

	if ((VAR3->VAR22 < VAR23) ||

	    (VAR3->VAR22 > VAR24)) {

		FUN5(&VAR5->VAR9, "",

			VAR20, VAR3->VAR22);

		return;

	}


 	if (VAR2->VAR25[VAR3->VAR22]) {
 		
 		FUN4("", VAR20);
		return;
	}

	VAR13 = FUN6();
	if (FUN7(VAR13)) {
		FUN5(&VAR5->VAR9, "",
			VAR20);
		return;
	}

	VAR13->VAR26 = &VAR27;

	VAR13->VAR9.VAR10 = &VAR5->VAR9;
	VAR13->VAR28 = VAR29;
	VAR13->VAR30 = FUN8(VAR12->VAR31.VAR32);
	VAR13->VAR33 = FUN8(VAR12->VAR31.VAR34);
	snprintf(VAR13->VAR35, sizeof(VAR13->VAR35),
		"",
		VAR3->VAR17[VAR36],
		VAR3->VAR17[VAR37]);

	FUN9(VAR12, VAR13->VAR38, sizeof(VAR13->VAR38));
	snprintf(VAR16, sizeof(VAR16), "", VAR3->VAR22);
	FUN10(VAR13->VAR38, VAR16, sizeof(VAR13->VAR38));

	VAR15 = FUN11(sizeof(struct VAR14), VAR39);

	if (!VAR15) {
		FUN5(&VAR5->VAR9, "",
			VAR20);
		goto VAR40;
	}

	VAR15->VAR41 = FUN12(
		VAR3->VAR17 + VAR42);
	VAR15->VAR6 = VAR13;
	VAR15->VAR1 = VAR2;
	VAR15->VAR22 = VAR3->VAR22;
	VAR13->VAR43 = VAR15;

	VAR2->VAR25[VAR3->VAR22] = VAR15;

	if (FUN13(VAR13)) {
		FUN5(&VAR5->VAR9, "",
			VAR20);
		goto VAR44;
	}

	return;

VAR44:
	VAR2->VAR25[VAR3->VAR22] = NULL;
	FUN14(VAR15);
VAR40:
	FUN15(VAR13);
}