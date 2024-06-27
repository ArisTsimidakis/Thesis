void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR4;

	if (FUN2(FUN3(VAR4)))
		return;
	if (!FUN4(VAR2))
		FUN5(VAR2);
}