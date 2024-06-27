static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, u32 VAR5)
{
	const struct VAR6 *VAR7 = (const struct VAR6 *) VAR2->VAR8;
	struct flowi4 VAR9;
	struct VAR10 *VAR11;

	FUN2(FUN3(VAR4), &VAR9, VAR4, VAR7, 0, 0, 0, 0, 0);

	if (!VAR9.VAR12)
		VAR9.VAR12 = FUN4(FUN3(VAR4), VAR2->VAR13);

	VAR11 = FUN5(FUN3(VAR4), &VAR9);
	if (!FUN6(VAR11)) {
		FUN7(VAR11, &VAR9, VAR5);
		FUN8(VAR11);
	}
}