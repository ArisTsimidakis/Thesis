int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = VAR2->VAR5;
	int VAR6 = -1;

	if (VAR4) {
		FUN2(&VAR4->VAR7);
		if (VAR4->VAR5)
			VAR6 = VAR4->VAR5->VAR8.VAR9;
		FUN3(&VAR4->VAR7);
	}
	return VAR6;
}