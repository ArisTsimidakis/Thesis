static void FUN1(struct VAR1 *VAR2,
					struct VAR3 *VAR4,
					loff_t VAR5, unsigned VAR6, int VAR7)
{
	struct VAR8 *VAR9;

	VAR4->VAR10 = VAR5 & (VAR11 - 1);
	VAR4->VAR12 = VAR4->VAR10 + VAR6;

	if (VAR7 == 0)
		return;

	

	if (VAR4->VAR13) {
		
		VAR9 = &VAR4->VAR14[0];
		if (VAR9->VAR15)
			FUN2(VAR2,
							VAR9->VAR16,
							&VAR4->VAR10,
							NULL);

		VAR9 = &VAR4->VAR14[VAR4->VAR17 - 1];
		if (VAR9->VAR15)
			FUN2(VAR2,
							VAR9->VAR16,
							NULL,
							&VAR4->VAR12);
	} else {
		VAR4->VAR10 = 0;
		VAR4->VAR12 = VAR11;
	}
}