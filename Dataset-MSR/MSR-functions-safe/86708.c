static void FUN1(struct VAR1 *VAR2,
				     struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR2, VAR4);

	if (!FUN3(FUN4(VAR2, VAR4), &VAR6->VAR7))
		FUN5(FUN4(VAR2, VAR4), &VAR6->VAR7);
}