FUN1(struct VAR1 *VAR2, long VAR3, int VAR4)
{
	if (!VAR2->VAR5) {
		FUN2(VAR6, VAR7);

		FUN3(&VAR2->VAR6, &VAR6);
		do {
			if (FUN4(VAR4, VAR7)) {
				VAR3 = -VAR8;
				break;
			}
			FUN5(VAR4);
			FUN6(&VAR2->VAR6.VAR9);
			VAR3 = FUN7(VAR3);
			FUN8(&VAR2->VAR6.VAR9);
		} while (!VAR2->VAR5 && VAR3);
		FUN9(&VAR2->VAR6, &VAR6);
		if (!VAR2->VAR5)
			return VAR3;
	}
	VAR2->VAR5--;
	return VAR3 ?: 1;
}