static void FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
	struct VAR4 *VAR5 = VAR6;
	unsigned long VAR7, VAR8, *VAR9, VAR10;
	unsigned long VAR11;

	VAR7 = FUN2(VAR5, FUN3(VAR3));
	VAR8 = FUN2(VAR5, FUN4(VAR3));
	VAR9 = FUN5(VAR5, FUN6(VAR3));

	VAR10 = *VAR9;

	for (VAR11 = 0; VAR11 < 8; VAR11++) {
		s16 VAR12, VAR13;

		VAR12 = (VAR7 >> (56 - (VAR11 * 8))) & 0xff;
		VAR13 = (VAR8 >> (56 - (VAR11 * 8))) & 0xff;

		
		VAR12 -= VAR13;
		if (VAR12 < 0)
			VAR12 = ~VAR12 + 1;

		VAR10 += VAR12;
	}

	*VAR9 = VAR10;
}