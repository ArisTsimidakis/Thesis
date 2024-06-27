int FUN1(struct VAR1 *VAR1, struct VAR1 *VAR2)
{
	bool VAR3 = false, VAR4 = false;
	int VAR5;

	if (FUN2(&VAR1->VAR6) == 0)
		return VAR7;
	FUN3(&VAR1->VAR8);
	
	if (FUN4(VAR2))
		VAR4 = VAR3 = true;
	VAR5 = FUN5(VAR1, VAR2, &VAR3);
	FUN6(&VAR1->VAR8);
	if (VAR3 && VAR5 >= 0)
		FUN7(VAR1, VAR9, VAR5);
	if (VAR4)
		FUN8(VAR2);
	return VAR5;
}