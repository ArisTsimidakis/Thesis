static struct VAR1 *FUN1(void)
{
	struct VAR1 *VAR2;
	int VAR3;

	VAR3 = FUN2(VAR4);
	if (VAR3 < 0)
		return NULL;

	VAR2 = FUN3(sizeof *VAR2, VAR5);
	if (VAR2) {
		
		VAR2->VAR6 = VAR7;

		if (!VAR3)
			VAR2->VAR8 = VAR9;
	}
	return VAR2;
}