FUN1(VAR1, int, VAR2, const char VAR3 *, VAR4, VAR5, VAR6)
{
	struct VAR7 *VAR7;
	struct path VAR8;
	int VAR9;
	unsigned int VAR10 = VAR11;

VAR12:
	VAR7 = FUN2(VAR2, VAR4, &VAR8, VAR10);
	if (FUN3(VAR7))
		return FUN4(VAR7);

	if (!FUN5(VAR8.VAR7->VAR13))
		VAR6 &= ~FUN6();
	VAR9 = FUN7(&VAR8, VAR7, VAR6);
	if (!VAR9)
		VAR9 = FUN8(VAR8.VAR7->VAR13, VAR7, VAR6);
	FUN9(&VAR8, VAR7);
	if (FUN10(VAR9, VAR10)) {
		VAR10 |= VAR14;
		goto VAR12;
	}
	return VAR9;
}