static int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;

	VAR4 = FUN2(VAR2);
	FUN3(&VAR4->VAR5);
	VAR4->VAR6 &= ~VAR7;
	VAR2->VAR8 = VAR9;
	FUN4(&VAR4->VAR5);
	return 0;
}