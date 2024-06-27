int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
		    u32 VAR5)
{
	struct VAR6 *VAR7;
	int VAR8 = -VAR9;

	FUN2();
	VAR7 = FUN3(VAR2);
	if (VAR7) {
		FUN4(&VAR7->VAR10);
		VAR8 = FUN5(VAR7, VAR4, VAR5);
		FUN6(&VAR7->VAR10);
	}
	FUN7();
	return VAR8;
}