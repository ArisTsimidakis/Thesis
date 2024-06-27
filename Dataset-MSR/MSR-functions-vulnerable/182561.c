static void FUN1(struct VAR1 *VAR2)
{
	int VAR3 = 0;
	struct VAR4 *VAR5 = FUN2(VAR2);
	struct VAR6 *VAR7 = VAR5->VAR7;
	struct VAR8 *VAR9 = VAR7->VAR9;
	struct VAR10 *VAR11 = VAR7->VAR12;

	
	FUN3(&VAR9->VAR13);
	if (FUN4(VAR14, &VAR9->VAR15)) {
		FUN5("",
			    VAR7->VAR16, FUN6(VAR17));
		goto VAR18;
	}

	FUN7(VAR19, &VAR7->VAR20.VAR21);

	FUN5("", VAR7->VAR16,
		    FUN6(VAR17));

	if (VAR11 && (VAR11->VAR22 == VAR23 ||
		     VAR11->VAR22 == VAR24))
		VAR3 = FUN8(VAR11);

	FUN5("",
 		    VAR7->VAR16, FUN6(VAR17), VAR3);
  VAR18:
 	FUN9(&VAR9->VAR13);








 }