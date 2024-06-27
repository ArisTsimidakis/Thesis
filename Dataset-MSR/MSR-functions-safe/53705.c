void FUN1(struct VAR1 *VAR2, int VAR3,
		u8 VAR4, u8 VAR5, int VAR6, __be32 VAR7)
{
	struct VAR8 *VAR9;
	int VAR10;
	const struct VAR11 *VAR12, *VAR13;
	struct VAR14 *VAR14;

	VAR10 = VAR3 & (VAR15 - 1);

	FUN2(&VAR16.VAR17);
	VAR9 = FUN3(&VAR16.VAR18[VAR10]);
	if (VAR9) {
		
		const struct VAR19 *VAR20 = (const struct VAR19 *)VAR2->VAR21;
		VAR12 = &VAR20->VAR12;
		VAR13 = &VAR20->VAR13;
		VAR14 = FUN4(VAR2->VAR22);

		while ((VAR9 = FUN5(VAR14, VAR9, VAR3, VAR12, VAR13,
						FUN6(VAR2)))) {
			FUN7(VAR9, VAR2, NULL, VAR4, VAR5,
					VAR6, VAR7);
			VAR9 = FUN8(VAR9);
		}
	}
	FUN9(&VAR16.VAR17);
}