FUN1(struct VAR1 *VAR2,
					      struct VAR3 *VAR4)
{
	int VAR5 = 0;
	struct VAR6 *VAR7 = FUN2(VAR2);

	if (VAR7->VAR8) {
		VAR7->VAR8 = false;
		VAR7->VAR9 = true;

		VAR5 = FUN3(
			VAR2, FUN4(VAR7)->VAR10);
		if (VAR5 < 0)
			VAR5 = FUN5(VAR5);
		else
			VAR5 = 0;

	}

	return VAR5;
}