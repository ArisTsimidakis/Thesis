FUN1(struct VAR1 *VAR2)
{
	int VAR3;

	sprintf(VAR2->VAR4, "",
		VAR2->VAR5->VAR6);

	VAR2->VAR7 =
		FUN2(VAR2->VAR4,
				VAR2->VAR8,
				sizeof(struct VAR9),
				VAR10, 0);

	if (!VAR2->VAR7)
		return -VAR11;

	for (VAR3 = 0; VAR3 < VAR12; VAR3++) {
		VAR2->VAR13[VAR3]->VAR14 =
			FUN3(
				VAR2->VAR7,
				VAR15,
				&(VAR2->VAR13[VAR3]->VAR16));

		if (!VAR2->VAR13[VAR3]->VAR14) {
			FUN4(VAR2, VAR3);
			return -VAR11;
		}
		memset(VAR2->VAR13[VAR3]->VAR14, 0,
			sizeof(struct VAR9));
	}
	return 0;
}