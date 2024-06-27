static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5;
	struct VAR6 *VAR7 = VAR4->VAR7;
	const unsigned int VAR8 = VAR4->VAR9;
	int VAR10 = (VAR7->VAR11 != VAR4->VAR12);
	int VAR13 = (VAR7->VAR8 != VAR8);

	if ((VAR7->VAR14 != VAR2->VAR15) ||
	    (VAR7->VAR16 != VAR2->VAR17.VAR18) ||
	    (VAR7->VAR19 != VAR2->VAR20))
		VAR10 = 1;

	if (VAR10 || VAR13)
		FUN2(VAR7, 0);

	
	if (VAR10) {
		VAR7->VAR11 = VAR4->VAR12;
		FUN3(VAR2);
	}

	
	if (VAR13) {
		VAR7->VAR8 = VAR8;
		FUN4(VAR7);
		FUN5(VAR2);
		FUN6(VAR7, 1, VAR4->VAR21);
	}

	if (VAR10 || VAR13)
		FUN2(VAR7, 1);
}