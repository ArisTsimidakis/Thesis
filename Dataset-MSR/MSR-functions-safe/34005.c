unsigned int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	unsigned int VAR5;
	int VAR6, VAR7;

	VAR5 = FUN2(FUN3(VAR4), VAR8);

	VAR7 = FUN3(VAR4) % VAR8;

	if (FUN4(VAR4)->VAR9)
		VAR5++;

	for (VAR6 = 0; VAR6 < FUN4(VAR4)->VAR10; VAR6++) {
		unsigned long VAR11 = FUN5(&FUN4(VAR4)->VAR12[VAR6]);
		unsigned long VAR13 = FUN4(VAR4)->VAR12[VAR6].VAR14;
		unsigned long VAR15;

		VAR13 &= ~VAR16;

		while (VAR11 > 0) {
			FUN6(VAR13 >= VAR8);
			FUN6(VAR7 > VAR17);

			VAR15 = VAR8 - VAR13;

			if (VAR15 > VAR11)
				VAR15 = VAR11;

			if (FUN7(VAR7, VAR15, 0)) {
				VAR5++;
				VAR7 = 0;
			}

			if (VAR7 + VAR15 > VAR17)
				VAR15 = VAR17 - VAR7;

			VAR7 += VAR15;

			VAR13 += VAR15;
			VAR11 -= VAR15;

			if (VAR13 == VAR8)
				VAR13 = 0;
		}
	}
	return VAR5;
}