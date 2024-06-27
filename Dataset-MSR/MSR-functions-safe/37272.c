static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2);
	int VAR5;

	if (VAR4->VAR6 == &VAR4->VAR7)
		return;

	VAR5 = FUN3();
	VAR4->VAR6 = &VAR4->VAR7;
	FUN4(VAR2);
	FUN5(VAR2, VAR5);
	VAR2->VAR5 = VAR5;
	FUN6();
}