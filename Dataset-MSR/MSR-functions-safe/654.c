static bool FUN1(void *VAR1, void *VAR2, VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR2, struct VAR5);
	struct VAR7 *VAR8 = FUN3(VAR1);

	if (!VAR8) return false;

	if (!FUN4(VAR8, FUN5(0))) {
		return false;
	}

	if (!FUN6(VAR8, VAR6->VAR9)) {
		return false;
	}

	if (VAR6->VAR10) {
		if (!FUN7(VAR8, VAR6->VAR10, strlen(VAR6->VAR10))) {
			return false;
		}
	}

	if (!FUN8(VAR8)) {
		return false;
	}

	*VAR4 = FUN9(VAR1, VAR8->VAR8, VAR8->VAR11);
	if (VAR4->VAR8 == NULL) {
		return false;
	}
	FUN10(VAR8);

	return true;
}