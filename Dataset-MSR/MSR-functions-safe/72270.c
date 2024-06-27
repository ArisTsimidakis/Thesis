FUN1(VAR1 *VAR2)
{
	VAR3 *VAR4;
	int VAR5 = 0;

	while ((VAR4 = FUN2(&VAR2->VAR6))) {
		if (VAR4->VAR7++)
			return (0);
		
		FUN3(&VAR2->VAR6, VAR4, VAR8);
		FUN4(&VAR2->VAR6, VAR4, VAR8);
		
		if (VAR4->VAR9 != NULL) {
			if (FUN5(VAR4)) {
				FUN6("",
				    FUN7(VAR4->VAR9), VAR4->VAR10);
				VAR5 = FUN8(VAR2, VAR4);
			}
		} else {
			FUN6("", VAR4->VAR10);
			VAR4->VAR9 = FUN9(VAR4);
			if (VAR4->VAR9 != NULL) {
				if (FUN5(VAR4)) {
					VAR4->VAR11 = 1;
					VAR5 = FUN10(
					    VAR2, VAR4);
				}
				FUN11(VAR4->VAR9);
				VAR4->VAR9 = NULL;
			}
		}
		if (VAR5)
			return (VAR5);
	}
	return (0);
}