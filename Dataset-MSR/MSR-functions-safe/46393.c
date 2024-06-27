int FUN1(const struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	unsigned int VAR5 = FUN2(VAR2->VAR5);

	VAR4->VAR6 = VAR5;
	if (VAR5 <= VAR7)
		return 0;

	VAR4->VAR8 = FUN3(VAR5 * sizeof(struct VAR9 *), VAR10);
	VAR4->VAR11 = FUN3(VAR5 * sizeof(struct VAR12), VAR10);

	if (VAR4->VAR8 && VAR4->VAR11)
		return 0;

	FUN4(VAR4->VAR8);
	FUN4(VAR4->VAR11);
	return -VAR13;
}