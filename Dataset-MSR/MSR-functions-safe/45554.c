static int FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
				     unsigned int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9 = VAR7->VAR9;
	struct VAR10 *VAR11 = VAR7->VAR11;
	struct crypto_authenc_keys VAR12;
	int VAR13 = -VAR14;

	if (FUN3(&VAR12, VAR4, VAR5) != 0)
		goto VAR15;

	FUN4(VAR9, VAR16);
	FUN5(VAR9, FUN6(VAR2) &
				     VAR16);
	VAR13 = FUN7(VAR9, VAR12.VAR17, VAR12.VAR18);
	FUN8(VAR2, FUN9(VAR9) &
					   VAR19);

	if (VAR13)
		goto VAR20;

	FUN10(VAR11, VAR16);
	FUN11(VAR11, FUN6(VAR2) &
					 VAR16);
	VAR13 = FUN12(VAR11, VAR12.VAR21, VAR12.VAR22);
	FUN8(VAR2, FUN13(VAR11) &
					   VAR19);

VAR20:
	return VAR13;

VAR15:
	FUN8(VAR2, VAR23);
	goto VAR20;
}