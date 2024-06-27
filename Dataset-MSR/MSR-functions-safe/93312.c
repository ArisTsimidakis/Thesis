static inline bool FUN1(struct VAR1 *VAR2)
{
	const struct VAR3 *VAR3 = FUN2();
	struct VAR4 *VAR4 = FUN3(VAR2->VAR5);

	return ((FUN4(VAR2->VAR6) && !FUN5(VAR3->VAR7, VAR2->VAR6)) ||
		  (FUN6(VAR2->VAR8) && !FUN7(VAR2->VAR8))) &&
		!FUN8(VAR4->VAR9, VAR10);
}