static inline bool FUN1(struct VAR1 *VAR2, const int VAR3,
				      long VAR4, long VAR5,
				      long VAR6)
{
	const struct VAR7 *VAR8 = FUN2(VAR2);

	
	if (VAR4 < 0)
		VAR4 = VAR5;

	
	if (VAR4 < 0 && VAR8->VAR9.VAR10 && VAR8->VAR9.VAR11 &&
	    VAR3 & VAR12)
		VAR4 = VAR6 = FUN3(VAR13 -
							  VAR8->VAR9.VAR11);
	if (VAR4 < 0)
		return false;

	
	FUN4(VAR2, VAR6);
	FUN5(VAR2, VAR4);
	FUN6(VAR2);

	
	FUN7(VAR2)->VAR14 = 0;
	return true;
}