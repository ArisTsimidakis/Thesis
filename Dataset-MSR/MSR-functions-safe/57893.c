static inline void FUN1(struct VAR1 *VAR2,
					    struct VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	pgoff_t VAR7, VAR8, VAR9, VAR10;

	FUN2(VAR6, VAR2,
			VAR4->VAR11, VAR4->VAR12) {

		VAR7 = VAR6->VAR13;
		VAR8 = VAR7 + FUN3(VAR6) - 1;
		
		VAR9 = VAR4->VAR11;
		if (VAR9 < VAR7)
			VAR9 = VAR7;
		VAR10 = VAR4->VAR12;
		if (VAR10 > VAR8)
			VAR10 = VAR8;

		FUN4(VAR6,
			((VAR9 - VAR7) << VAR14) + VAR6->VAR15,
			((VAR10 - VAR7 + 1) << VAR14) + VAR6->VAR15,
				VAR4);
	}
}