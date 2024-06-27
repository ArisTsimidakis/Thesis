static VAR1 *FUN1 (VAR2 *VAR3, VAR4 *VAR5) {

	VAR1 *VAR6 = NULL;
	VAR7 *VAR8 = NULL;

	if (!(VAR6 = FUN2 ((VAR9)free))) {
		return NULL;
	}

	VAR10* VAR11 = VAR3->VAR11->VAR11 + (VAR12)VAR5->VAR13;
	ut32 VAR14 =  VAR5->VAR15;
	ut32 VAR16 = VAR5->VAR16;
	ut32 VAR17 = 0, VAR18 = 0;

	while (VAR17 < VAR14 && VAR18 < VAR16) {

		if (!(VAR8 = FUN3 (VAR7))) {
			return VAR6;
		}

		if (!(FUN4 (VAR11 + VAR17, VAR11 + VAR14, &VAR8->VAR19, &VAR17))) {
			free (VAR8);
			return VAR6;
		}

		FUN5 (VAR6, VAR8);

		VAR18 += 1;

	}

	return VAR6;
}