static int FUN1(struct VAR1 *VAR2)
{
	int VAR3;

	VAR3 = FUN2(VAR2->VAR4, VAR5 + VAR6.VAR7,
			  VAR6.VAR8, VAR6.VAR9,
			  VAR10);
	if (VAR3)
		return VAR3;

	if (!VAR6.VAR8[VAR11])
		return -VAR12;

	VAR3 = FUN3(VAR6.VAR8[VAR11]);
	if (!VAR3)
		return -VAR12;
	return VAR3;
}