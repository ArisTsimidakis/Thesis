FUN1(const int VAR1, const int VAR2, const int VAR3,
		VAR4 *VAR5, const EmphRuleNumber VAR6, const EmphasisClass class,
		const VAR7 *VAR8, unsigned int *VAR9) {
	int VAR10;
	const VAR11 *VAR12;

	for (VAR10 = VAR1; VAR10 <= VAR2; VAR10++)
		if (VAR9[VAR10] & VAR13) {
			VAR5[VAR10].VAR14 &= ~class;
			VAR5[VAR10].VAR15 &= ~class;
			VAR9[VAR10] &= ~VAR13;
		}

	VAR5[VAR1].VAR16 |= class;
	if (FUN2(
				VAR8->VAR17[VAR6][VAR18], VAR8, &VAR12) ||
			FUN2(
					VAR8->VAR17[VAR6][VAR19], VAR8, &VAR12))
		VAR5[VAR2].VAR20 |= class;
	else if (FUN2(VAR8->VAR17[VAR6][VAR21],
					 VAR8, &VAR12))
		VAR5[VAR3].VAR20 |= class;
}