FUN1(struct VAR1 *VAR2)
{
	int VAR3;
	struct VAR4 *VAR5;

	VAR5 = FUN2(VAR2->VAR6->VAR7)->VAR8->VAR5;

	do {
		if (VAR2->VAR6->VAR9) {
			VAR3 = FUN3(VAR2->VAR6, false);
			if (VAR3 != 0)
				continue;
		}
		VAR3 = VAR5->VAR10->FUN4(VAR2,
					       VAR11);
	} while (VAR3 == -VAR12);

	return VAR3;
}