FUN1(struct VAR1 *VAR2, unsigned char *VAR3, int VAR4,
		unsigned long VAR5, int remove, int VAR6, int VAR7)
{
	struct VAR8 **VAR9;
	struct VAR8 *VAR10;
	int VAR11;

	
	if (VAR2->VAR12 & VAR13)
		VAR2 = &VAR14;

	if (FUN2(VAR15))
		return -VAR16;

	if (VAR7)
		VAR9 = &VAR2->VAR17;
	else
		VAR9 = &VAR2->VAR18;

	VAR10 = FUN3(VAR19, *VAR9);
	if (!VAR10)
		return -VAR20;

	FUN4(&VAR21);
	if (VAR6)
		FUN5(VAR10);
	if (VAR3 && !FUN6(VAR10, VAR3, VAR4)) {
		VAR11 = -VAR22;
		goto VAR23;
	}
	if (VAR5) {
		VAR11 = FUN7(VAR10, VAR5, remove);
		if (VAR11 < 0)
			goto VAR23;
	}

	FUN4(&VAR24);
	VAR11 = FUN8(VAR2, VAR7, VAR9, VAR10);
	if (!VAR11 && VAR2->VAR12 & VAR25
	    && VAR26)
		FUN9(VAR27);

	FUN10(&VAR24);

 VAR23:
	FUN10(&VAR21);

	FUN11(VAR10);
	return VAR11;
}