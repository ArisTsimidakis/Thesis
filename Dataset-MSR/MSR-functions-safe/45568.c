static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
			     unsigned int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9 = VAR7->VAR9;
	int VAR10;

	FUN3(VAR9, VAR11);
	FUN4(VAR9, FUN5(VAR2) &
				       VAR11);
	VAR10 = FUN6(VAR9, VAR4, VAR5);
	FUN7(VAR2, FUN8(VAR9) &
				     VAR12);
	return VAR10;
}