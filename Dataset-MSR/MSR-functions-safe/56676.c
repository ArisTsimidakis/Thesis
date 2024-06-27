void *FUN1(size_t VAR1, gfp_t VAR2)
{
	void *VAR3;

	VAR3 = FUN2(VAR1, VAR2 | VAR4);
	if (!VAR3)
		VAR3 = FUN3(VAR1, VAR2 | VAR5, VAR6);
	return VAR3;
}