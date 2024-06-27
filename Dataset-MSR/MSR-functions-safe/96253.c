static bool FUN1(VAR1 *VAR2, bool VAR3)
{
	VAR4 *VAR5 = VAR2->VAR6;
	
	if (VAR2->VAR7->VAR8) {
		VAR5 = VAR2->VAR7->VAR8;
	}
	VAR2->VAR9 = FUN2(VAR2->VAR7, VAR5);
	if (!VAR2->VAR9) {
		FUN3(VAR2, true, "");
		return false;
	}

	if (VAR10)
		FUN4(VAR2, "", VAR2->VAR7->VAR11, VAR2->VAR6->VAR11);

	if (!FUN5(VAR2))
		return false;

	if (VAR3)
		return true;

	if (VAR2->VAR9->VAR7->VAR12) {
		if (!FUN6(VAR2))
			return false;
	}

	if (VAR13 <= VAR14 || VAR2->VAR15) {
		if (!FUN7(VAR2))
			return false;
	} else {
		if (!FUN8(VAR2)) {
			FUN3(VAR2, false, "");
			return false;
		}
	}
	return true;
}