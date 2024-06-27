static struct VAR1 *FUN1(struct VAR2 *VAR3, __u8 VAR4)
{
	struct VAR5 *VAR6 = VAR3->VAR6;
	struct VAR1 *VAR7 = VAR3->VAR8;

	if (VAR7 || VAR4)
		return VAR7;

	VAR7 = FUN2(sizeof(struct VAR1), VAR9);
	if (!VAR7)
		return NULL;

	FUN3(&VAR7->VAR10);

	VAR3->VAR8 = VAR7;
	VAR7->VAR3 = VAR3;

	VAR7->VAR11 = &VAR6->VAR12;
	VAR7->VAR13 = &VAR3->VAR13;

	if (VAR6->VAR14 > 0)
		VAR7->VAR15 = VAR6->VAR14;
	else
		VAR7->VAR15 = 60;

	FUN4("", VAR3, VAR7);

	return VAR7;
}