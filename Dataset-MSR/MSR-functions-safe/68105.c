static int FUN1(VAR1 *VAR2) {
	const VAR3 *VAR4 = VAR2 ? FUN2 (VAR2->VAR5) : NULL;
	ut64 VAR6 = VAR2 ? FUN3 (VAR2->VAR5): 0;

	if (!VAR2 || !VAR2->VAR7) {
		return false;
	}
	VAR2->VAR7->VAR8 = FUN4 (VAR2, VAR4, VAR6, VAR2->VAR7->VAR9, VAR2->VAR10);
	return VAR2->VAR7->VAR8 ? true: false;
}