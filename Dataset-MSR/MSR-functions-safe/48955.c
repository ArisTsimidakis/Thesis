int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR5;
	int VAR6;

	FUN2();
	VAR6 = FUN3(&VAR7, VAR2);
	if (VAR6)
		goto VAR8;

	FUN4(VAR5) {
		FUN5(VAR5, VAR4) {
			if (VAR4->VAR9 & VAR10) {
				FUN6(VAR2, VAR11,
							VAR4);
				FUN6(VAR2, VAR12, VAR4);
			}
			FUN6(VAR2, VAR13, VAR4);
		}
	}
VAR8:
	FUN7();
	return VAR6;
}