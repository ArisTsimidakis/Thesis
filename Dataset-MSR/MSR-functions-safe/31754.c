void FUN1(void)
{
	struct VAR1 *VAR2 = VAR3;
	unsigned long VAR4;

	FUN2(&VAR2->VAR5->VAR6, VAR4);
	FUN3(&VAR2->VAR7);
	FUN3(&VAR2->signal->VAR8);
	FUN4(&VAR2->VAR5->VAR6, VAR4);
}