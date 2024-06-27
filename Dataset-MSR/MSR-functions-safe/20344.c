void FUN1(struct VAR1 *VAR1)
{
	int VAR2 = VAR1->VAR3;

	FUN2();
	if (FUN3(VAR1, VAR4))
		++VAR1->VAR5.VAR6;
	FUN4(&VAR1->VAR3, VAR2, 0);
}