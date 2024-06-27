void FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3)
{
	if (VAR2 && !FUN2(VAR2->VAR4))
		FUN3(&VAR2->VAR5);
	if (VAR3 && !FUN2(VAR3->VAR4) && VAR3 != VAR2)
		FUN3(&VAR3->VAR5);
}