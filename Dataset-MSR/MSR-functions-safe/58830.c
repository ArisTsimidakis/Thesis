int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
				loff_t VAR4, unsigned VAR5, unsigned VAR6,
				struct VAR7 *VAR7, void *VAR8)
{
	const struct VAR9 *VAR10 = VAR3->VAR11;
	int VAR12;

	if (VAR10->VAR13) {
		FUN2(VAR7);
		VAR12 = VAR10->FUN3(VAR1, VAR3, VAR4, VAR5, VAR6,
							VAR7, VAR8);
	} else {
		unsigned VAR14 = VAR4 & (VAR15 - 1);
		struct VAR16 *VAR16 = VAR3->VAR17;

		FUN4(VAR7);
		VAR12 = VAR10->FUN5(VAR1, VAR7, VAR14, VAR14+VAR5);
		FUN6(VAR7);
		FUN2(VAR7);
		FUN7(VAR7);

		if (VAR12 < 0) {
			if (VAR4 + VAR5 > VAR16->VAR18)
				FUN8(VAR16, VAR16->VAR18);
		} else if (VAR12 > 0)
			VAR12 = FUN9(VAR19, VAR6, VAR12);
		else
			VAR12 = VAR6;
	}

	return VAR12;
}