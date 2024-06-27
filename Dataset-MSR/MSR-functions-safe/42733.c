static int FUN1(struct VAR1 *VAR2, bool VAR3)
{
	struct VAR4 *VAR5 = FUN2(VAR2);

	if (FUN3(FUN4(VAR2)) &&
	    VAR5->VAR6.VAR7) {
		if (VAR5->VAR6.VAR8)
			return -VAR9;
		FUN5(VAR2, VAR10, 0, 0);
		return 0;
	}

	if (VAR2->VAR11.VAR12 && FUN6(VAR2)) {
		if (VAR5->VAR6.VAR8 ||
		    VAR2->VAR11.VAR13.VAR14)
			return -VAR9;
		FUN5(VAR2, VAR15,
				  VAR16 | VAR17 |
				  VAR18, 0);
		
		VAR2->VAR11.VAR12 = 0;
		FUN7(VAR2, true);
		return 0;
	}

	if ((FUN8(VAR2) || VAR3) &&
	    FUN9(VAR2)) {
		if (VAR5->VAR6.VAR8)
			return -VAR9;
		FUN5(VAR2, VAR19, 0, 0);
		return 0;
	}

	return FUN10(VAR2);
}