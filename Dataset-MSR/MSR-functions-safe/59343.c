static int FUN1(struct VAR1 **VAR2)
{
	struct VAR1 *VAR3 = VAR2[VAR4];
	struct VAR5 *VAR6;

	if (!VAR3)
		return 0;

	VAR6 = FUN2(VAR3);
	if (FUN3(VAR3) < FUN4(VAR6))
		return -VAR7;

	VAR6->VAR8[sizeof(VAR6->VAR8) - 1] = '';
	return 0;
}