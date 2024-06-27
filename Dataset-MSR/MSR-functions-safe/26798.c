unsigned long FUN1(struct VAR1 *VAR2,
		unsigned long VAR3, struct VAR1 *VAR4,
		unsigned long VAR5, unsigned long VAR6)
{
	unsigned long VAR7, VAR8, VAR9;
	VAR10 *VAR11, *VAR12;

	VAR9 = VAR3 + VAR6;
	FUN2(VAR2, VAR3, VAR9);

	for (; VAR3 < VAR9; VAR3 += VAR7, VAR5 += VAR7) {
		FUN3();
		VAR8 = (VAR3 + VAR13) & VAR14;
		if (VAR8 - 1 > VAR9)
			VAR8 = VAR9;
		VAR7 = VAR8 - VAR3;
		VAR11 = FUN4(VAR2->VAR15, VAR3);
		if (!VAR11)
			continue;
		VAR12 = FUN5(VAR2->VAR15, VAR2, VAR5);
		if (!VAR12)
			break;
		VAR8 = (VAR5 + VAR13) & VAR14;
		if (VAR7 > VAR8 - VAR5)
			VAR7 = VAR8 - VAR5;
		if (VAR7 > VAR16)
			VAR7 = VAR16;
		FUN6(VAR2, VAR11, VAR3, VAR3 + VAR7,
				VAR4, VAR12, VAR5);
	}

	return VAR6 + VAR3 - VAR9;	
}