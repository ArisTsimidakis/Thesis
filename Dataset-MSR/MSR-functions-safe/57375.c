static char *FUN1(struct VAR1 *VAR2,
			     size_t VAR3)
{
	char *VAR4, *VAR5;
	VAR6 *VAR7 = VAR2->VAR7;
	int VAR8;
	int VAR9;

	VAR4 = FUN2(VAR3 + 1, VAR10);
	if (!VAR4)
		goto VAR11;

	VAR4[VAR3] = '';

	
	VAR8 = sprintf(VAR4, "", VAR2->VAR12,
		      VAR2->VAR13, VAR2->VAR14);

	
	VAR5 = &VAR4[VAR8];
	for (VAR9 = 0; VAR9 < (VAR3 - VAR8) / 2; VAR9++)
		VAR5 = FUN3(VAR5, VAR7[VAR9]);
VAR11:
	return VAR4;
}