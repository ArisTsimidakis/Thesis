static void FUN1(struct VAR1 *VAR1)
{
	if (!VAR1)
		return;

	FUN2(&VAR1->VAR2);

	if (VAR1->VAR3)
		FUN3(VAR1->VAR3);

	if (VAR1->VAR4) {
		if (VAR1->VAR5)
			FUN4(VAR1->VAR4);
		else
			FUN5(VAR1->VAR4);
	}

	FUN6(VAR1);
}