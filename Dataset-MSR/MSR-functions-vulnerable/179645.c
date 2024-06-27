static void FUN1(struct VAR1 *VAR2,
					struct VAR3 *VAR4,
					err_t VAR5)
{
	struct VAR6 *VAR7 = (struct VAR6 *)VAR2;
	struct VAR8 *VAR9 = VAR7->VAR9;
	struct VAR10 *const VAR11 = VAR9->VAR11;
	stf_status VAR12;

	FUN2(VAR13,
	    FUN3(""));

	if (VAR11 == NULL) {
		FUN4(VAR14,
		       "",
		       VAR15);
		if (VAR7->VAR9)
			FUN5(VAR7->VAR9);
		return;
	}

	
	FUN6(VAR5 == NULL);
	FUN6(VAR16 == NULL);
	FUN6(VAR11 != NULL);

	FUN6(VAR11->VAR17 == VAR7->VAR9);
	FUN7(VAR11, NULL); 

	FUN8(VAR11);

	VAR11->VAR18 = VAR19;

	VAR12 = FUN9(VAR2, VAR4);

	if (VAR7->VAR9 != NULL) {
		FUN10(&VAR7->VAR9, VAR12);
		if (VAR7->VAR9)
			FUN5(VAR7->VAR9);
 	}
 	FUN11();
 	FUN12();



	FUN6(FUN13());
 }