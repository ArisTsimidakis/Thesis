int FUN1(struct VAR1 *VAR2, int VAR3)
{
	struct VAR4 *VAR5;
	struct VAR4 *VAR6;

	if (VAR3) {
		FUN2(VAR7, "");
		return 0;
	}
	VAR5 = FUN3(sizeof(struct VAR4), VAR8);
	if (VAR5 == NULL)
		return -VAR9;
	FUN4(&VAR5->VAR10, 1);
	VAR5->VAR11 = 1;
	FUN5(&VAR2->VAR12[VAR13-1]);
	VAR6 = VAR2->VAR14[VAR13-1];
	if (VAR6) {
		FUN6(&VAR2->VAR12[VAR13-1]);
		FUN7(VAR5);
	} else {
		VAR2->VAR14[VAR13-1] = VAR5;
		FUN6(&VAR2->VAR12[VAR13-1]);
	}
	FUN8(&VAR15.VAR16);
	if ((VAR15.VAR17 == NULL) &&
		(memcmp(VAR2->VAR18, VAR15.VAR19, VAR20) == 0)) {
		FUN9(VAR2);
		VAR15.VAR17 = VAR2;
		FUN2(VAR7, "");
	}
	FUN10(&VAR15.VAR16);
	FUN2(VAR7, "");
	return 0;
}