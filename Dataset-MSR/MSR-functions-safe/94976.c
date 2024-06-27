static void FUN1(void *VAR1)
{
	struct VAR2 *VAR3 = (struct VAR2 *) VAR1;

	FUN2(&VAR3->VAR4);
#ifdef VAR5
	FUN3(&VAR3->VAR6);
#endif
	FUN4(&VAR3->VAR7);
#ifdef VAR8
	FUN3(&VAR3->VAR9);
#endif
	FUN5(&VAR3->VAR10);
}