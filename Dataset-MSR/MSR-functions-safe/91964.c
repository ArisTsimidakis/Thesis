bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3,
			    unsigned int *VAR4,
			    struct VAR5 **VAR6)
{
	struct VAR7 *VAR8;
	struct VAR5 *VAR9;
	struct VAR10 *VAR11;

	VAR8 = VAR12->VAR8;
	if (!VAR8)
		return false;
	*VAR4 = 0;

	if (VAR2->VAR13)
		VAR11 = &VAR8->VAR14;
	else
		VAR11 = &VAR8->VAR15;

	FUN2(VAR9, VAR11, VAR16) {
		bool VAR17 = false;

		if (VAR9->VAR2 == VAR2) {
			(*VAR4)++;
			
			if (VAR6)
				*VAR6 = VAR9;
		}

		if (VAR9->VAR2 != VAR2 || !FUN3(VAR9, VAR3))
			continue;

		switch (FUN4(VAR9, VAR3)) {
		case VAR18:
			VAR17 = FUN5(VAR2, VAR9, VAR3);
			break;
		case VAR19:
			VAR17 = FUN6(VAR2, VAR9, VAR3);
			break;
		case VAR20:
			VAR17 = FUN7(VAR2, VAR9, VAR3);
			break;
		default:
			break;
		}

		if (VAR17)
			return true;
	}

	return false;
}