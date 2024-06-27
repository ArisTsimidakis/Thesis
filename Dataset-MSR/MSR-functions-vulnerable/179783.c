void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = NULL;
	int VAR5, VAR6 = 0;
	struct jit_context VAR7 = {};
	VAR8 *VAR9 = NULL;
	int *VAR10;
	int VAR11;
	int VAR12;

	if (!VAR13)
		return;

	if (!VAR2 || !VAR2->VAR14)
		return;

	VAR10 = FUN2(VAR2->VAR14 * sizeof(*VAR10), VAR15);
	if (!VAR10)
		return;

	
	for (VAR5 = 0, VAR12 = 0; VAR12 < VAR2->VAR14; VAR12++) {
		VAR5 += 64;
		VAR10[VAR12] = VAR5;
 	}
 	VAR7.VAR16 = VAR5;
 

	for (VAR11 = 0; VAR11 < 10; VAR11++) {












 		VAR5 = FUN3(VAR2, VAR10, VAR9, VAR6, &VAR7);
 		if (VAR5 <= 0) {
 			VAR9 = NULL;
			if (VAR4)
				FUN4(VAR4);
			goto VAR17;
		}
		if (VAR9) {
			if (VAR5 != VAR6) {
				FUN5("",
				       VAR5, VAR6);
				goto VAR17;
			}
			break;
		}
		if (VAR5 == VAR6) {
			VAR4 = FUN6(VAR5, &VAR9,
						      1, VAR18);
			if (!VAR4)
				goto VAR17;
		}
		VAR6 = VAR5;
	}

	if (VAR13 > 1)
		FUN7(VAR2->VAR14, VAR5, 0, VAR9);

	if (VAR9) {
		FUN8(VAR4, VAR9 + VAR5);
		FUN9((unsigned long)VAR4, VAR4->VAR19);
		VAR2->VAR20 = (void *)VAR9;
		VAR2->VAR21 = true;
	}
VAR17:
	FUN10(VAR10);
}