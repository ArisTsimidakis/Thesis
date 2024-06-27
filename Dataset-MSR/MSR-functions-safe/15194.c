static void FUN1(gdImagePtr VAR1, gdFontPtr VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
	int VAR7, VAR8, VAR9, VAR10, VAR11;
	VAR7 = 0;
	VAR8 = 0;

	if ((VAR5 < VAR2->VAR12) || (VAR5 >= (VAR2->VAR12 + VAR2->VAR13))) {
		return;
	}

	VAR11 = (VAR5 - VAR2->VAR12) * VAR2->VAR14 * VAR2->VAR15;
	for (VAR10 = VAR4; (VAR10 > (VAR4 - VAR2->VAR15)); VAR10--) {
		for (VAR9 = VAR3; (VAR9 < (VAR3 + VAR2->VAR14)); VAR9++) {
			if (VAR2->VAR16[VAR11 + VAR8 * VAR2->VAR15 + VAR7]) {
				FUN2(VAR1, VAR9, VAR10, VAR6);
			}
			VAR8++;
		}
		VAR8 = 0;
		VAR7++;
	}
}