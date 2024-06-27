VAR1 FUN1(VAR2)(struct FUN1(VAR3)* VAR4) {
	ut64 VAR5 = 0LL;
	struct VAR6 *VAR7;
	int VAR8;

	if (!(VAR7 = FUN1(VAR9) (VAR4))) {
		return 0;
	}
	for (VAR8 = 0; !VAR7[VAR8].VAR10; VAR8++) {
		if (!strcmp (VAR7[VAR8].VAR11, "")) {
			VAR5 = VAR7[VAR8].VAR5;
			break;
		}
	}
	free (VAR7);

	if (!VAR5 && VAR4->VAR12.VAR13 == VAR14) {
		VAR5 = VAR4->VAR15 + VAR4->VAR16;
	}

	if (!VAR5) {
 		ut8 VAR17[128];
 		ut64 VAR15 = FUN2(VAR4, VAR4->VAR15);
 		

		if (VAR15 > VAR4->VAR18 || VAR15 + sizeof (VAR17) > VAR4->VAR18)


 			return 0;


 		VAR8 = FUN3 (VAR4->VAR17, VAR15, VAR17, sizeof (VAR17));
 		if (VAR8 < 1) {
 			return 0;
		}
		for (VAR8 = 0; VAR8 < 64; VAR8++) {
			if (VAR17[VAR8] == 0xe8 && !VAR17[VAR8+3] && !VAR17[VAR8+4]) {
				int VAR19 = VAR17[VAR8+1] | (VAR17[VAR8+2] << 8) | (VAR17[VAR8+3] << 16) | (VAR17[VAR8+4] << 24);
				return VAR4->VAR15 + VAR8 + 5 + VAR19;

			}
		}
	}
	return VAR5;
}