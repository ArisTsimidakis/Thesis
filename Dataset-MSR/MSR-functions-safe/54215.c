static int FUN1(struct VAR1 *VAR2,
			    unsigned int VAR3, unsigned int VAR4)
{
	struct VAR5 *VAR5 = VAR2->VAR6;
	unsigned int VAR7;

	VAR7 = VAR5->VAR8;
	VAR3 = (VAR3 & VAR9 ? VAR10 : 0) |
					(VAR3 & VAR11 ? VAR12 : 0);
	VAR4 = (VAR4 & VAR9 ? VAR10 : 0) |
					(VAR4 & VAR11 ? VAR12 : 0);

	VAR7 = (VAR7 & ~VAR4) | VAR3;

	if (VAR5->VAR8 == VAR7)
		return 0;
	return FUN2(VAR5, VAR5->VAR8 = VAR7);
}