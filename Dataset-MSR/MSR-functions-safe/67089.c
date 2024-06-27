VAR1 *FUN1 (VAR2 *VAR3) {
	VAR4 *VAR5 = NULL;
	VAR1 *VAR6 = NULL;

	if (!VAR3 || !VAR3->VAR7) {
		return NULL;
	}

	if (VAR3->VAR8) {
		return VAR3->VAR8;
	}

	if (!(VAR6 = FUN2 (VAR3->VAR7,
						VAR9))) {
		return FUN3();
	}

	
	if (!(VAR5 = (VAR4*) FUN4 (VAR6))) {
		FUN5 (VAR6);
		return FUN3();
	}

	VAR3->VAR8 = FUN6 (VAR3, VAR5);

	FUN5 (VAR6);
	return VAR3->VAR8;
}