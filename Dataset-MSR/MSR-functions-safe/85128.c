FUN1(VAR1, const VAR2, VAR3,
		const struct timespec VAR4 *, VAR5)
{
	const struct VAR6 *VAR7 = FUN2(VAR3);
	struct timespec64 VAR8;

	if (!VAR7 || !VAR7->VAR9)
		return -VAR10;

	if (FUN3(&VAR8, VAR5))
		return -VAR11;

	return VAR7->FUN4(VAR3, &VAR8);
}