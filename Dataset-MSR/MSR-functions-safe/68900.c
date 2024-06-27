void *FUN1(struct VAR1 *VAR2, gfp_t VAR3, int VAR4)
{
	void *VAR5 = FUN2(VAR2, VAR3, VAR4, VAR6);

	FUN3(VAR2, VAR5, VAR3);
	FUN4(VAR6, VAR5,
				    VAR2->VAR7, VAR2->VAR8,
				    VAR3, VAR4);

	return VAR5;
}