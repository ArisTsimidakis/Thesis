int FUN1(struct VAR1 *VAR2)
{
	if (!FUN2(VAR2))
		return VAR3;

	if (VAR4->FUN3()) {
		int VAR5 = FUN4();

		FUN5(VAR5, VAR2->VAR6.VAR7);
		FUN6(VAR2->VAR6.VAR7,
				VAR8, NULL, 1);
		FUN7();
		FUN8(VAR2->VAR6.VAR7);
	} else
		FUN9();
	return VAR3;
}