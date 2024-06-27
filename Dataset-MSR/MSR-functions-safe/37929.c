static int FUN1(struct VAR1 *VAR2)
{
	u64 VAR3 = FUN2(&VAR2->VAR4);
	u32 VAR5 = FUN3(&VAR2->VAR4, VAR6);

	if (FUN4(&VAR2->VAR4, VAR5, VAR3) == 0) {
		VAR2->VAR7 = FUN5(&VAR2->VAR4) + 3;
		FUN6(&VAR2->VAR4);
	}

	return 1;
}