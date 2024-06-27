int FUN1(struct VAR1 *VAR2, unsigned long VAR3)
{
	int VAR4 = -VAR5;
	u32 VAR6;
	struct VAR7 *VAR8;

	FUN2(&VAR2->VAR9);
	if (!FUN3(VAR2->VAR10))
		goto VAR11;

	VAR4 = -VAR12;
	if (!FUN4(VAR3))
		goto VAR11;

	VAR8 = FUN5(VAR2->VAR8, VAR2);
	if (VAR8 && VAR3 < VAR8->VAR13)
		goto VAR11;

	VAR4 = 0;

	VAR6 = VAR2->VAR14;
	VAR2->VAR14 = VAR3;

	if (VAR8) {
		if (VAR8->VAR6) {
			VAR4 = -VAR15;
VAR16:
			VAR2->VAR14 = VAR6;
			goto VAR11;
		}

		VAR4 = FUN6(&VAR2->VAR8, VAR2->VAR14,
				    VAR2->VAR17);
		if (VAR4)
			goto VAR16;
	}

VAR11:
	FUN7(&VAR2->VAR9);

	return VAR4;
}