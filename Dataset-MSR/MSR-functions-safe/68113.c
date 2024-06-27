static VAR1 FUN1(VAR2 *VAR3) {
	int VAR4;
	ut32 VAR5 = 0, VAR6 = 0;
	ut8 VAR7[sizeof (VAR8)] = {0};

	VAR4 = FUN2 (VAR3->VAR9, 108, VAR7, 4);
	if (VAR4 != 4) {
		return 0;
	}
	VAR5 = FUN3 (VAR7);
	VAR4 = FUN2 (VAR3->VAR9, 104, VAR7, 4);
	if (VAR4 != 4) {
		return 0;
	}
	VAR6 = FUN3 (VAR7);
	return VAR5 + VAR6;
}