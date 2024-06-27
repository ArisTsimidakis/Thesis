static int FUN1(struct VAR1 *VAR2,
				 struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = VAR2->VAR7;
	int VAR8, VAR9, VAR10, VAR11;

	VAR4->VAR12.VAR13.VAR12[0] = VAR6->VAR14;
	if (VAR6->VAR15) {
		VAR9 = 0;
		for (VAR8 = 0; VAR8 < VAR16; VAR8++) {
			if (!(VAR6->VAR15 & (1 << VAR8)))
				continue;
			VAR11 = FUN2(VAR6, VAR8 + 1, VAR9, &VAR10);
			if (VAR11 < 0)
				return FUN3(VAR6, VAR11);
			VAR10 = FUN4(VAR6, VAR10);
			VAR4->VAR12.VAR13.VAR12[VAR9] = VAR10;
			VAR9++;
		}
		return 0;
	} else {
		
		VAR11 = FUN2(VAR6, 0, 0, &VAR10);
		if (VAR11 < 0)
			return FUN3(VAR6, VAR11);
		VAR10 = FUN4(VAR6, VAR10);
		VAR4->VAR12.VAR13.VAR12[0] = VAR10;
	}
	return 0;
}