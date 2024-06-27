static int FUN1(struct VAR1 *VAR2,
			  struct VAR1 *VAR3,
			  int VAR4)
{
	int VAR5 = 0;
	struct VAR6 *VAR7, *VAR8;

	FUN2(VAR7, VAR8, &VAR3->VAR9, VAR9) {
		if (!VAR7->VAR10) {
			VAR5 = FUN3(VAR2, VAR7->VAR11,
					    VAR4, VAR7->VAR12);
			if (VAR5)
				break;
			VAR7->VAR10 = true;
			VAR7->VAR13++;
		} else if (VAR7->VAR13 == 1) {
			FUN4(VAR2, VAR7->VAR11, VAR4, VAR7->VAR12);
			FUN4(VAR3, VAR7->VAR11, VAR4, VAR7->VAR12);
		}
	}
	return VAR5;
}