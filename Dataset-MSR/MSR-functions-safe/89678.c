int FUN1(struct VAR1 *VAR2, u8 VAR3, u8 VAR4, u8 VAR5)
{
	struct VAR6 *VAR7;
	struct VAR8 *VAR9;
	u16 VAR10 = 1; 

	FUN2("", VAR5);

	if (VAR2 == NULL)
		return -VAR11;

	VAR9 = VAR2->VAR9;
	if (VAR9 == NULL)
		return -VAR11;

	VAR10 += VAR12;
	VAR10 += VAR9->VAR13 + VAR9->VAR14 + VAR15;

	VAR7 = FUN3(VAR10, VAR16);
	if (VAR7 == NULL)
		return -VAR17;

	FUN4(VAR7, VAR9->VAR13 + VAR15);

	VAR7 = FUN5(VAR7, VAR4, VAR3, VAR18);

	FUN6(VAR7, &VAR5, 1);

	FUN7(&VAR2->VAR19, VAR7);

	return 0;
}