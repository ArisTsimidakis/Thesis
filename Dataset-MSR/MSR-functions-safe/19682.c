static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
							 bool VAR5)
{
	int VAR6;
	int VAR7;
	int VAR8 = 0;

	VAR6 = FUN2(VAR2, VAR4);
	VAR7 = VAR6;

	do {
		
		if ((!VAR5 || VAR2->VAR9[VAR7]) &&
		    !FUN3(&VAR2->VAR10[VAR7])) {
			struct VAR11 *VAR11 =
				FUN4(VAR2->VAR10[VAR7].VAR12,
					  struct VAR11, VAR13);
			FUN5(&VAR11->VAR13);
			VAR2->VAR14--;
			VAR2->VAR15[VAR7]--;
			if (VAR5) {
				VAR2->VAR16--;
				VAR2->VAR9[VAR7]--;
			}
			FUN6(VAR2, VAR11);
			VAR8 = 1;
			break;
		}
		VAR7 = FUN2(VAR2, VAR4);
	} while (VAR7 != VAR6);

	return VAR8;
}