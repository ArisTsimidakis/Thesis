FUN1(struct VAR1 *VAR2, u32 VAR3)
{
	u32 VAR4, VAR5;
	int VAR6;

	

	for (VAR4 = 0; VAR3 >> VAR4; VAR4++) {
		if (((VAR3 >> VAR4) & 1) == 0)
			continue;

		if (VAR4)
			VAR5 = VAR7;
		else
			VAR5 = VAR8;

		VAR6 = FUN2(VAR2, 2);
		if (VAR6)
			return VAR6;

		FUN3(VAR2, VAR9 | VAR5);
		FUN3(VAR2, VAR10);
		FUN4(VAR2);
	}

	return 0;
}