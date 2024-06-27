static int FUN1(struct VAR1 *VAR2, const char *VAR3, int VAR4)
{
	unsigned char VAR5[20];
	struct VAR6 *VAR7;
	struct VAR8 *VAR8;
	struct VAR9 *VAR10;
	const char *VAR11 = VAR3;

	if (*VAR11 == '') {
		VAR4 ^= VAR12 | VAR13;
		VAR11++;
	}
	if (FUN2(VAR11, VAR5))
		return 0;
	while (1) {
		VAR7 = FUN3(VAR2, VAR11, VAR5, 0);
		if (!VAR7 && VAR2->VAR14)
			return 0;
		if (VAR7->VAR15 != VAR16)
			break;
		if (!((struct VAR17*)VAR7)->VAR18)
			return 0;
		FUN4(VAR5, ((struct VAR17*)VAR7)->VAR18->VAR19.VAR20);
	}
	if (VAR7->VAR15 != VAR21)
		return 0;
	VAR8 = (struct VAR8 *)VAR7;
	for (VAR10 = VAR8->VAR10; VAR10; VAR10 = VAR10->VAR22) {
		VAR7 = &VAR10->VAR23->VAR6;
		VAR7->VAR4 |= VAR4;
		FUN5(VAR2, VAR7, VAR3, VAR24, VAR4);
		FUN6(VAR2, VAR7, VAR11);
	}
	return 1;
}