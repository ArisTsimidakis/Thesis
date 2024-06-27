static struct VAR1 *FUN1(struct VAR2 *VAR3,
				      struct VAR4 *VAR5)
{
	if (VAR5->VAR6[VAR7])
		return FUN2(VAR3, VAR7);
	if (VAR5->VAR6[VAR8])
		return FUN2(VAR3, VAR8);

	if (FUN3(VAR5->VAR9[VAR8],
		       VAR5->VAR9[VAR7] +
					FUN4(VAR10)))
		return FUN2(VAR3, VAR7);
	if (FUN3(VAR5->VAR9[VAR7],
		       VAR5->VAR9[VAR8] +
					FUN4(VAR10)))
		return FUN2(VAR3, VAR8);

	return NULL;
}