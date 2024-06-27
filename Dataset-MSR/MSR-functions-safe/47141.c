static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = (void *)VAR2;

	FUN2(!FUN3(VAR2));
	if (VAR4->VAR5)
		FUN4(VAR4->VAR5);
	FUN5(VAR4);
}