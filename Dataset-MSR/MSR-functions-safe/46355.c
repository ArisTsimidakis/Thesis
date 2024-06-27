static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3)
{

	struct reiserfs_transaction_handle VAR4;
	int VAR5;
	int VAR6 = 0;

	FUN2(!FUN3(VAR1->VAR7));

        if (FUN4(&FUN5(VAR1)->VAR8, -1, 1))
		return 0;

	FUN6(&(FUN5(VAR1)->VAR9));

        if (!FUN7(&FUN5(VAR1)->VAR8)) {
		FUN8(&(FUN5(VAR1)->VAR9));
		return 0;
	}

	
	if ((!(FUN5(VAR1)->VAR10 & VAR11) ||
	     !FUN9(VAR1)) &&
	    FUN5(VAR1)->VAR12 <= 0) {
		FUN8(&(FUN5(VAR1)->VAR9));
		return 0;
	}

	FUN10(VAR1->VAR13);
	
	VAR5 = FUN11(&VAR4, VAR1->VAR13, 1);
	if (VAR5) {
		
		VAR6 = VAR5;
		VAR5 = FUN12(&VAR4, VAR1->VAR13, 1);

		if (VAR5) {
			
			FUN13(VAR1);
			FUN14(VAR1->VAR13, "",
					 ""
					 "",
					 VAR1->VAR14);
			goto VAR15;
		}
	}
	FUN15(VAR1);

#ifdef VAR16
	FUN16(&VAR4, VAR1);
#endif
	VAR5 = FUN17(&VAR4, VAR1->VAR13, 1);

	
	if (!VAR5)
		VAR5 = VAR6;

	if (!VAR5 &&
	    (FUN5(VAR1)->VAR10 & VAR11) &&
	    FUN9(VAR1)) {

		
		VAR5 = FUN18(VAR1, 0);
	}
      VAR15:
	FUN19(VAR1->VAR13);
	FUN8(&(FUN5(VAR1)->VAR9));
	return VAR5;
}