static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6) {
	int VAR7 = 0;
	switch (VAR6->VAR8) {
	case 1:
		if ( VAR6->VAR9[0].VAR10 & VAR11 ) {
			if ( VAR6->VAR9[0].VAR10 & VAR12 ) {
				VAR4[VAR7++] = 0xd8;
				VAR4[VAR7++] = 0x38 | VAR6->VAR9[0].VAR13[0];
			} else if ( VAR6->VAR9[0].VAR10 & VAR14 ) {
				VAR4[VAR7++] = 0xdc;
				VAR4[VAR7++] = 0x38 | VAR6->VAR9[0].VAR13[0];
			} else {
				return -1;
			}
		} else {
			return -1;
		}
		break;
	case 2:
		if ( VAR6->VAR9[0].VAR10 & VAR15 & ~VAR16 && VAR6->VAR9[0].VAR17 == 0 &&
		     VAR6->VAR9[1].VAR10 & VAR15 & ~VAR16 ) {
			VAR4[VAR7++] = 0xd8;
			VAR4[VAR7++] = 0xf8 | VAR6->VAR9[1].VAR17;
		} else if ( VAR6->VAR9[0].VAR10 & VAR15 & ~VAR16 &&
			    VAR6->VAR9[1].VAR10 & VAR15 & ~VAR16 && VAR6->VAR9[1].VAR17 == 0 ) {
			VAR4[VAR7++] = 0xdc;
			VAR4[VAR7++] = 0xf0 | VAR6->VAR9[0].VAR17;
		} else {
			return -1;
		}
		break;
	default:
		return -1;
	}
	return VAR7;
}