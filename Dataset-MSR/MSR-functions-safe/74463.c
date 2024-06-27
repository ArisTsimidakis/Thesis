static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = &VAR2->VAR4;
	const struct VAR5 *VAR6 = VAR2->VAR7->VAR6;
	int VAR8 = 0;

	
	if ((VAR6->VAR9 && VAR6->FUN2(VAR2) >= 0) ||
	    (VAR6->VAR10 && VAR6->FUN3(VAR2) >= 0) ||
	    (VAR6->VAR11 && VAR6->FUN4(VAR2, 0) >= 0) ||
		(VAR2->VAR7->VAR12 && (VAR2->VAR7->VAR13 == 1))) {
		VAR8 = FUN5(VAR4, &VAR14);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR6->VAR15) {
		VAR8 = FUN5(VAR4, &VAR16);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR6->VAR17) {
		VAR8 = FUN5(VAR4, &VAR18);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR2->VAR19 || VAR6->VAR20) {
		VAR8 = FUN5(VAR4, &VAR21);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR6->VAR22) {
		VAR8 = FUN5(VAR4, &VAR23);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR6->VAR24) {
		VAR8 = FUN5(VAR4, &VAR25);
		if (VAR8 < 0)
			return VAR8;
	}

	
	if (VAR2->VAR7->VAR26 == VAR27) {
		VAR8 = FUN5(VAR4, &VAR28);
		if (VAR8 < 0)
			return VAR8;
	}

	
	if (!VAR2->VAR29)
		return VAR8;

	
	if (VAR6->VAR30 || VAR6->VAR31) {
		VAR8 = FUN5(VAR4, &VAR32);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4, &VAR33);
		if (VAR8 < 0)
			return VAR8;
	}
	if (VAR6->VAR34) {
		VAR8 = FUN5(VAR4, &VAR35);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4, &VAR36);
		if (VAR8 < 0)
			return VAR8;
	}

	VAR8 = FUN5(VAR4, &VAR37);
	if (VAR8 < 0)
		return VAR8;
	VAR8 = FUN5(VAR4, &VAR38);
	if (VAR8 < 0)
		return VAR8;
	VAR8 = FUN5(VAR4, &VAR39);
	if (VAR8 < 0)
		return VAR8;

	if (VAR6->VAR40) {
		VAR8 = FUN5(VAR4,
				&VAR41);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4,
				&VAR42);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4,
				&VAR43);
		if (VAR8 < 0)
			return VAR8;
	}

	if (VAR6->VAR44) {
		VAR8 = FUN5(VAR4,
				&VAR45);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4,
				&VAR46);
		if (VAR8 < 0)
			return VAR8;
		VAR8 = FUN5(VAR4,
				&VAR47);
		if (VAR8 < 0)
			return VAR8;
	}

	return VAR8;
}