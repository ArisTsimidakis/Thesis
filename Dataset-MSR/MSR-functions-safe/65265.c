FUN1(struct VAR1 *VAR2, VAR3 *VAR4,
					struct VAR5 *VAR6)
{
	VAR4 = FUN2(VAR4, &VAR6->VAR7);
	if (!VAR4)
		return 0;
	VAR6->VAR8 = FUN3(*VAR4++);

	return FUN4(VAR2, VAR4);
}