void FUN1(struct VAR1 *VAR1, struct VAR2 *VAR3,
			   const struct VAR4 *VAR5)
{
	FUN2(VAR1, VAR5, FUN3(VAR3->VAR6));
	FUN4(VAR3);
}