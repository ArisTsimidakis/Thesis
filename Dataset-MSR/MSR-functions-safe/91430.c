static int FUN1(struct VAR1 *VAR2,
			   const struct VAR1 *VAR3)
{
	int VAR4;

	VAR4 = FUN2(VAR2, VAR3->VAR5, VAR3->VAR6,
				 false);
	if (VAR4)
		return VAR4;
	memcpy(VAR2, VAR3, FUN3(struct VAR1, VAR6));
	VAR4 = FUN4(VAR2, VAR3);
	if (VAR4)
		return VAR4;
	return FUN5(VAR2, VAR3);
}