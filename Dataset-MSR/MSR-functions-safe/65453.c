FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	unsigned int VAR5 = FUN2(VAR4);
	struct VAR6 *VAR7;

	FUN3(&VAR2->VAR8);

	FUN4(VAR7, &VAR2->VAR9[VAR5],
			    VAR10) {
		if (VAR7->VAR11)
			continue;
		if (FUN5(VAR7, VAR4))
			return FUN6(FUN7(VAR7));
	}
	return NULL;
}