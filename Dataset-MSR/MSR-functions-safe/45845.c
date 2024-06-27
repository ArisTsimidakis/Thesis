static int FUN1(struct VAR1 *VAR2,
			     unsigned int VAR3)
{
	int VAR4;
	struct VAR5 *VAR6;

	VAR2->VAR6 = FUN2(struct VAR5);
	FUN3("", VAR2, VAR2->VAR6);
	if (!VAR2->VAR6)
		return -VAR7;
	FUN4(VAR4) {
		VAR6 = FUN5(VAR2->VAR6, VAR4);
		FUN3("", VAR4, VAR2->VAR6);
		FUN6(&VAR6->VAR2, VAR3);
		FUN7(&VAR6->VAR8, VAR9);
	}
	return 0;
}