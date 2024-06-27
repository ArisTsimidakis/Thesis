static int FUN1(struct VAR1 *VAR2,
		const struct VAR3 *VAR4)
{
	u16 VAR5;
	u8 VAR6 = 0;
	int VAR7;
	struct VAR8 *VAR9 = &VAR2->VAR2->VAR10->VAR9;
	struct VAR11 *VAR12 = (struct VAR11 *)VAR4->VAR13;

	if (VAR4->VAR14 < sizeof(struct VAR11)) {
		FUN2(VAR9, "");
		return -VAR15;
	}

	VAR5 = FUN3(VAR12->VAR16) +
			sizeof(struct VAR11);

	if (VAR4->VAR14 != VAR5) {
		FUN2(VAR9, "",
				VAR5, VAR4->VAR14);
		return -VAR15;
	}

	for (VAR7 = sizeof(struct VAR11); VAR7 < VAR4->VAR14; ++VAR7)
		VAR6 += VAR4->VAR13[VAR7];

	if (VAR6 != VAR12->VAR6) {
		FUN2(VAR9, "",
				VAR12->VAR6, VAR6);
		return -VAR15;
	}

	return 0;
}