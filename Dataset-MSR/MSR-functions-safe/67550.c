static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3)
{
	int VAR4;
	loff_t VAR5 = FUN2(VAR2->VAR6);
	int VAR7;

	FUN3(VAR3->VAR8 != VAR2->VAR9);
	if (VAR3->VAR8 == VAR5 >> VAR10)
		VAR4 = VAR5 & ~VAR11;
	else
		VAR4 = VAR12;
	FUN4(VAR3);
	VAR7 = FUN5(&VAR2->VAR13, VAR3, VAR4, VAR2->VAR14, false);
	if (!VAR7)
		VAR2->VAR14->VAR15--;
	VAR2->VAR9++;

	return VAR7;
}