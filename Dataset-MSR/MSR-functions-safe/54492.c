static ICE_noinline int FUN1(new_page_t VAR1,
				   free_page_t VAR2,
				   unsigned long private, struct VAR3 *VAR3,
				   int VAR4, enum migrate_mode VAR5,
				   enum migrate_reason VAR6)
{
	int VAR7 = VAR8;
	int *VAR9 = NULL;
	struct VAR3 *VAR10;

	VAR10 = FUN2(VAR3, private, &VAR9);
	if (!VAR10)
		return -VAR11;

	if (FUN3(VAR3) == 1) {
		
		goto VAR12;
	}

	if (FUN4(FUN5(VAR3)))
		if (FUN4(FUN6(VAR3)))
			goto VAR12;

	VAR7 = FUN7(VAR3, VAR10, VAR4, VAR5);
	if (VAR7 == VAR8)
		VAR2 = NULL;

VAR12:
	if (VAR7 != -VAR13) {
		
		FUN8(&VAR3->VAR14);
		FUN9(VAR3, VAR15 +
				FUN10(VAR3));
		
		if (VAR6 == VAR16) {
			FUN11(VAR3);
			if (!FUN12(VAR3))
				FUN13();
		} else
			FUN14(VAR3);
	}

	
	if (VAR2)
		FUN15(VAR10, private);
	else if (FUN4(FUN16(VAR10))) {
		
		FUN11(VAR10);
	} else
		FUN14(VAR10);

	if (VAR9) {
		if (VAR7)
			*VAR9 = VAR7;
		else
			*VAR9 = FUN17(VAR10);
	}
	return VAR7;
}