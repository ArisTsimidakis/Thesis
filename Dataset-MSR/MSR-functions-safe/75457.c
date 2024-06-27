static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6) {
	if (VAR6->VAR7[1].VAR8 & VAR9) {
		if (VAR6->VAR7[0].VAR8 & VAR10 &&
		    VAR6->VAR7[0].VAR8 & VAR11) {
			return FUN2 (VAR2, VAR4, VAR6, 0x28);
		}
		if (!FUN3 (&VAR6->VAR7[0])) {
			return FUN4 (VAR2, VAR4, VAR6);
		}
	}
	return FUN5 (VAR2, VAR4, VAR6, 0x28);
}