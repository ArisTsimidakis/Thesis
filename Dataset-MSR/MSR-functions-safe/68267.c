static VAR1 *FUN1(VAR2 *VAR3) {
	struct VAR4 *VAR5 = (struct VAR4*)VAR3->VAR6->VAR7;
	VAR1 *VAR8;
	VAR9 *VAR10;

	if (!(VAR8 = FUN2 (free))) {
		return NULL;
	}
	VAR10 = FUN3 (VAR5);
	if (!VAR10) {
		return NULL;
	}
	FUN4 (VAR8, VAR10);
	return VAR8;
}