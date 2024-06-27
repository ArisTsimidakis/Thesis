FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
	     struct VAR5 *VAR6)
{
	if (VAR6->VAR7 & ~VAR8)
		return VAR9;

	VAR6->VAR10 = VAR6->VAR7;
	return FUN2(VAR2, &VAR4->VAR11, &VAR6->VAR10,
			   &VAR6->VAR12);
}