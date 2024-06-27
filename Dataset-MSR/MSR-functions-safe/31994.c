static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;

	FUN2();
	VAR4 = FUN3(VAR2->VAR4);
	if (!VAR4)
		goto VAR5;

	FUN4(VAR2, &VAR4->VAR6, VAR7)
		FUN5(&VAR2->VAR8);

VAR5:
	FUN6();
}