struct VAR1 *FUN1(struct VAR2 *VAR3,
		struct VAR4 *VAR5, unsigned long VAR6)
{
	struct VAR1 *VAR1;
	struct VAR7 *VAR8;
	gfp_t VAR9 = FUN2(VAR3);
	int VAR10;
	VAR11 *VAR12;

	VAR10 = FUN3(VAR5, VAR6, VAR9, &VAR8, &VAR12);
	VAR1 = FUN4(VAR3, VAR9, VAR10, VAR12);
	FUN5(VAR8);

	return VAR1;
}