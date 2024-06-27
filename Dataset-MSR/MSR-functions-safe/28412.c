struct VAR1 *FUN1(struct VAR2 *VAR2, u32 VAR3)
{
	struct VAR1 *VAR4;
	struct VAR5 *VAR6;
	unsigned int VAR7;

	if (VAR3 == 0)
		VAR3 = VAR8;
	VAR7 = VAR3 & (VAR9 - 1);
	FUN2();
	VAR6 = &VAR2->VAR10.VAR11[VAR7];
	FUN3(VAR4, VAR6, VAR12) {
		if (VAR4->VAR13 == VAR3) {
			FUN4();
			return VAR4;
		}
	}
	FUN4();

	return NULL;
}