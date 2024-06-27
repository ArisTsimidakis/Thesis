static struct VAR1 *FUN1(struct VAR2 *VAR2,
					   struct VAR3 *VAR4,
					   int VAR5)
{
	__be32 VAR6 = VAR4->VAR7.VAR8;
	__be32 VAR9 = VAR4->VAR7.VAR10;
	__be32 VAR11 = VAR4->VAR12;
	int VAR13 = VAR4->VAR13;
	struct VAR1 *VAR14, **VAR15;
	struct VAR16 *VAR17 = FUN2(VAR2, VAR18);

	for (VAR15 = FUN3(VAR17, VAR4); (VAR14 = *VAR15) != NULL; VAR15 = &VAR14->VAR19)
		if (VAR9 == VAR14->VAR4.VAR7.VAR10 &&
		    VAR6 == VAR14->VAR4.VAR7.VAR8 &&
		    VAR11 == VAR14->VAR4.VAR12 &&
		    VAR13 == VAR14->VAR4.VAR13 &&
		    VAR5 == VAR14->VAR20->VAR5)
			break;

	return VAR14;
}