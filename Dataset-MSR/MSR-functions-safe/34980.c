void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4, *VAR5;
	struct VAR6 *VAR7;

	FUN2(&VAR2->VAR8);
	VAR7 = &VAR2->VAR9[VAR2->VAR10];
	for (;;) {
		FUN3(VAR4, VAR5, VAR7, VAR11.VAR12.VAR13)
			FUN4(VAR2, VAR4);
		if (VAR7 == &VAR2->VAR9[0])
			break;
		VAR7--;
	}
	FUN5(&VAR2->VAR8);
}