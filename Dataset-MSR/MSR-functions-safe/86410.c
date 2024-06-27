static unsigned long FUN1(struct VAR1 *VAR2,
				struct VAR1 *VAR3,
				unsigned long VAR4, pgoff_t VAR5)
{
	unsigned long VAR6 = ((VAR5 - VAR2->VAR7) << VAR8) +
				VAR2->VAR9;
	unsigned long VAR10 = VAR6 & VAR11;
	unsigned long VAR12 = VAR10 + VAR13;

	
	unsigned long VAR14 = VAR3->VAR14 & VAR15;
	unsigned long VAR16 = VAR2->VAR14 & VAR15;

	
	if (FUN2(VAR4) != FUN2(VAR6) ||
	    VAR14 != VAR16 ||
	    VAR10 < VAR2->VAR9 || VAR2->VAR17 < VAR12)
		return 0;

	return VAR6;
}