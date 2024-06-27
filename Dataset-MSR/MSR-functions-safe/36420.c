static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2);
	struct VAR5 *VAR6 = VAR4->VAR5;
	struct socket *VAR5 = VAR6->VAR7;

	FUN3(VAR2->VAR8 != VAR9);

	if (VAR5) {
		FUN4(VAR5, 2);
		
		FUN5(VAR2);
	}
}