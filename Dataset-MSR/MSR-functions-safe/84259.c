static int FUN1(u32 VAR1 *VAR2,
				 struct VAR3 *VAR4,
				 struct VAR3 *VAR5,
				 union VAR6 *VAR7, union VAR6 *VAR8,
				 struct VAR9 **VAR10, int VAR11)
{
	struct VAR12 *VAR13 = NULL;
	u32 VAR14;
	int VAR15, VAR16;

	if (FUN2(&VAR14, VAR2))
		return -VAR17;

	if (FUN3(FUN4(true)))
		return -VAR17;

	
	VAR13 = FUN5(VAR4, VAR7);

	
	if (!VAR13)
		return 0;

	
	if (!FUN6(VAR13->VAR18, VAR8))
		return -VAR19;

	
	VAR16 = FUN7(VAR13->VAR20);
	VAR15 = FUN8(VAR2, VAR5, VAR8, VAR10, VAR13->VAR20,
				   VAR11);
	if (VAR15 == 1) {
		FUN9(VAR13, VAR8, VAR5);
		return VAR16;
	}
	return VAR15;
}