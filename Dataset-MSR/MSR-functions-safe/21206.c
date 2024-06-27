static inline int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	VAR3 &= VAR4;
	if ((VAR2->VAR5 & VAR6) && VAR3 == VAR2->VAR7) {
		struct VAR1 *VAR8 = VAR2->VAR9;

		
		if (VAR8 && VAR8->VAR10 == VAR3)
			return VAR8->VAR5 & VAR6 ? 0 : -VAR11;

		FUN2(VAR2, VAR3 - VAR12);
	}
	if ((VAR2->VAR5 & VAR13) && VAR3 + VAR12 == VAR2->VAR10) {
		struct VAR1 *VAR14 = VAR2->VAR15;

		
		if (VAR14 && VAR14->VAR7 == VAR3 + VAR12)
			return VAR14->VAR5 & VAR13 ? 0 : -VAR11;

		FUN3(VAR2, VAR3 + VAR12);
	}
	return 0;
}