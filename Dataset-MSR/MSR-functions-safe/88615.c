FUN1(struct VAR1 *VAR2,
		      struct VAR3 *VAR4,
		      struct VAR5 *VAR6)
{
	const VAR7 *VAR8;

	if (!FUN2(VAR2->VAR9->VAR10))
		return;

	VAR8 = FUN3(VAR11, VAR6->VAR12.VAR13,
				 VAR6->VAR12.VAR14);
	if (VAR8) {
		memcpy(&VAR4->VAR15, VAR8 + 2,
		       sizeof(struct VAR16));
		VAR2->VAR17 = 1;
	} else {
		memset(&VAR4->VAR15, 0, sizeof(struct VAR16));
		VAR4->VAR15.VAR18 = FUN4(VAR19);
		VAR4->VAR15.VAR20 = VAR21;
	}

	return;
}