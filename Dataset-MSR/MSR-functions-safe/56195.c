FUN1(struct VAR1 *VAR2)
{
	int VAR3;
	unsigned int VAR4, VAR5;
	struct VAR6 *VAR7 = VAR2->VAR8;

	VAR5 = FUN2(VAR7->VAR9, FUN3());
	if (!VAR5)
		return;

	VAR3 = FUN4(VAR7, 0);
	if (VAR3 <= 0)
		return;

	if (FUN5(VAR3)) {
		FUN6(VAR10, &VAR3, 1);
		FUN7(VAR3, &VAR11);
	} else {
		for (VAR4 = 0; VAR4 < VAR5; ++VAR4) {
			if (!FUN8(VAR4, &VAR2->VAR12))
				continue;
			VAR3 = FUN4(VAR7, VAR4);
			if (VAR3 > 0)
				FUN9(VAR3, VAR2);
		}
	}
}