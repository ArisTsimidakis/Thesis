static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	int VAR5 = 0;
	struct VAR6 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9 = VAR7->VAR9;

	FUN3(VAR10, &VAR9->VAR11.VAR12);

	if (VAR9->VAR13)
		return;

	VAR5 = FUN4(VAR9);
	if (VAR5)
		return;
	VAR4 = VAR9->VAR13;

	FUN5("", VAR9->VAR14,
		    FUN6(VAR15));

	switch (VAR4->VAR16) {
	case VAR17:
		VAR5 = FUN7(VAR4);
		break;
	case VAR18:
	case VAR19:
		VAR5 = FUN8(VAR4);
		break;
	case VAR20:
	case VAR21:
#ifdef VAR22
		VAR5 = FUN9(VAR4);
		break;
#else
		FUN5("");
		
#endif
	default:
		VAR5 = -VAR23;
		FUN5("", VAR4->VAR16);
		break;
	}

	if (VAR5) {
		FUN10(VAR4->VAR24);
		FUN11(&VAR4->VAR25);
		FUN12(&VAR9->VAR26);
		FUN11(&VAR4->VAR27);
		FUN13(&VAR9->VAR26);

		FUN14(VAR4);
 		VAR9->VAR13 = NULL;
 	}
 




 	FUN5("", VAR9->VAR14,
 		    FUN6(VAR15), VAR5);
 }