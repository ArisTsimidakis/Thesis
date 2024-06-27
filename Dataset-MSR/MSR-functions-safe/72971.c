static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
	int VAR7;
	int VAR8;
	int VAR9;
	int VAR10;
	int VAR11;
	int VAR12;

	switch (VAR4->VAR13) {
	case VAR14:
		break;
	case VAR15:
		{
		FUN2("");
		VAR11 = 1 << VAR4->VAR16;
		if (VAR11 > VAR17) {
			return -1;
		}
		VAR12 = VAR4->VAR18 / 3;
		for (VAR7 = 0; VAR7 < VAR11; VAR7++) {
			VAR6->VAR19[VAR7] = 0;
		}
		if ((VAR4->VAR18 % 3) || VAR4->VAR18 < 0 ||
		  VAR4->VAR18 > 3 * VAR11) {
			return -1;
		}
		for (VAR7 = 0; VAR7 < 3; VAR7++) {
			for (VAR8 = 0; VAR8 < VAR12; VAR8++) {
				if ((VAR10 = FUN3(VAR2)) == VAR20) {
					return -1;
				}
				VAR9 = 0;
				switch (VAR7) {
				case 0:
					VAR9 = FUN4(VAR10);
					break;
				case 1:
					VAR9 = FUN5(VAR10);
					break;
				case 2:
					VAR9 = FUN6(VAR10);
					break;
				}
				VAR6->VAR19[VAR8] |= VAR9;
			}
		}
		}
		break;
	default:
		return -1;
		break;
	}

	return 0;
}