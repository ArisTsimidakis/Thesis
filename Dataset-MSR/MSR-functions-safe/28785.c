void FUN1(struct VAR1 *VAR2, u64 VAR3)
{
	struct VAR4 *VAR5 = VAR2->VAR6.VAR5;

	if (!FUN2(VAR2) || FUN3(VAR5) ||
			FUN4(VAR5))
		return;

	FUN5(&VAR5->VAR7.VAR8);
	VAR5->VAR7.VAR9 = VAR3;
	FUN6(VAR5);
}