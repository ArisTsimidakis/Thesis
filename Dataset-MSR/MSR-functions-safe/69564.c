static int FUN1(struct VAR1 *VAR2)
{
	u32 VAR3 = 1, VAR4, VAR5 = 0, VAR6;

	VAR2->VAR7->FUN2(VAR2, &VAR3, &VAR4, &VAR5, &VAR6);
	if (!(VAR6 & FUN3(VAR8)))
		return FUN4(VAR2);

	if (VAR2->VAR7->FUN5(VAR2, 0) & (VAR9 | VAR10))
		return FUN6(VAR2);

	
	if (VAR2->VAR11 >= VAR12)
		return VAR13;

	return VAR14;
}