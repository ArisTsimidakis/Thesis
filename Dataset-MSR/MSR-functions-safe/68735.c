unsigned long FUN1(const struct VAR1 *VAR2)
{
	unsigned long VAR3 = 0;
	size_t VAR4 = VAR2->VAR5;

	if (FUN2(VAR2->VAR6 & VAR7)) {
		if (VAR4 && VAR2->VAR8 && FUN3(&VAR2->VAR9->VAR10[VAR2->VAR11]))
			return VAR4 | VAR2->VAR8;
		return VAR4;
	}
	FUN4(VAR2, VAR4, VAR12,
		(VAR3 |= (unsigned long)VAR12.VAR13 | VAR12.VAR14, 0),
		VAR3 |= VAR12.VAR15 | VAR12.VAR16,
		VAR3 |= (unsigned long)VAR12.VAR13 | VAR12.VAR14
	)
	return VAR3;
}