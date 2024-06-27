unsigned FUN1(struct VAR1 *VAR2, pgoff_t VAR3,
			    unsigned int VAR4, struct VAR5 **VAR6)
{
	unsigned int VAR7;
	unsigned int VAR8;

	FUN2(&VAR2->VAR9);
	VAR8 = FUN3(&VAR2->VAR10,
				(void **)VAR6, VAR3, VAR4);
	for (VAR7 = 0; VAR7 < VAR8; VAR7++)
		FUN4(VAR6[VAR7]);
	FUN5(&VAR2->VAR9);
	return VAR8;
}