static void FUN1(struct VAR1 *VAR2, struct VAR3 **VAR4,
			      struct VAR5 *VAR6,
			      unsigned VAR7)
{
	FUN2(&VAR2->VAR8);
	FUN2(&VAR2->VAR9);
	FUN3(&VAR2->VAR10);
	FUN4(&VAR2->VAR11, 1);
	VAR2->VAR4 = VAR4;
	VAR2->VAR6 = VAR6;
	VAR2->VAR12 = VAR7;
	FUN5(VAR13, &VAR2->VAR14);
}