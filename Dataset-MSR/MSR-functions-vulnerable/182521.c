static void *FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{
	struct VAR4 *VAR5 = VAR6;
	struct qstr VAR7 = { .VAR8 = "", };
	struct VAR9 *VAR9;
	struct VAR10 *VAR10;
	unsigned long VAR11;

	FUN2();
	VAR11 = FUN3(&VAR3->VAR12);
	if (!VAR11)
		goto VAR13;
	VAR9 = (struct VAR9 *)VAR11;
	if (!FUN4(&VAR9->VAR14))
		goto VAR13;
	FUN5();
	VAR3->VAR15->FUN6(VAR3);
VAR16:
	VAR1->VAR5 = FUN7(VAR5);
	VAR1->VAR9 = VAR9;
	return NULL;
VAR13:
	FUN5();
	VAR10 = FUN8(VAR5->VAR17);
	if (!VAR10) {
		VAR3->VAR15->FUN6(VAR3);
		return FUN9(-VAR18);
	}
	VAR10->VAR19 = VAR3->VAR20;
	VAR10->VAR21 = VAR10->VAR22 = VAR10->VAR23 = FUN10(VAR10);
	VAR10->VAR24 |= VAR25;
	VAR10->VAR26 = VAR27 | VAR28;
	VAR10->VAR29 = &VAR30;
	VAR10->VAR31 = VAR3;

	VAR9 = FUN11(VAR5->VAR17, &VAR7);
	if (!VAR9) {
		FUN12(VAR10);
 		return FUN9(-VAR18);
 	}
 	FUN13(VAR9, VAR10);


 	VAR9->VAR32 = (void *)VAR3->VAR15;
 	VAR11 = FUN14(&VAR3->VAR12, 0, (unsigned long)VAR9);
 	if (VAR11) {
		FUN15(VAR9);	
		FUN16(VAR9);
		FUN17();
		return FUN9(-VAR33);
	}
	goto VAR16;
}