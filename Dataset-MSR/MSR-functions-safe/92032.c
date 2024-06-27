void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR5;

	
	if (VAR4->VAR2)
		return;

	FUN2(&VAR2->VAR6);
	FUN2(&VAR2->VAR7);
	FUN2(&VAR2->VAR8);
	
	VAR4->VAR2 = VAR2;
}