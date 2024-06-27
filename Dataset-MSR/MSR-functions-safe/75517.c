static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3	*VAR4 = VAR2->VAR4;
	struct VAR3	*VAR5;
	struct VAR6		*VAR7;
	unsigned long		VAR8;
	int			VAR9;

	if (VAR4->VAR10)
		return;		

	VAR7 = FUN2(VAR4->VAR11);
	if (VAR7->VAR12->VAR13) {

		
		VAR8 = VAR7->VAR12->FUN3(VAR7);
		for (VAR9 = 0; VAR9 < VAR4->VAR14; ++VAR9) {
			if (FUN4(VAR9, &VAR8)) {
				VAR5 = VAR2->VAR15[VAR9]->VAR16;
				if (VAR5)
					FUN5(&VAR5->VAR17, 0);
			}
		}
	}
}