static void FUN1(struct VAR1 *VAR2,
					   struct VAR3 *VAR4)
{
	u32 VAR5;

	VAR5 = VAR2->VAR6 & VAR7;
	if (VAR4->VAR8 == VAR9) {
		if (VAR5 == VAR7)
			VAR2->VAR6 &= ~VAR7;
		VAR2->VAR6 |= VAR10;
	} else {
		
		VAR2->VAR6 &= ~VAR7;
		if (VAR5 == VAR7)
			VAR2->VAR6 |= VAR11;
	}
}