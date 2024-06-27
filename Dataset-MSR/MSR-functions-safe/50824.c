FUN1(const struct VAR1 *VAR2, const void *VAR3)
{
	const struct VAR4 *VAR4 = (const struct VAR4 *)VAR3;
	const struct VAR5 *VAR5 = (const struct VAR5 *)VAR2;

	return (FUN2(VAR4, VAR5->VAR4));
}