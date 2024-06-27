FUN1(struct VAR1 *VAR1, const char *VAR2, unsigned int VAR3,
	     struct VAR4 *VAR5, unsigned int VAR6,
	     void VAR7 *VAR8)
{
	int VAR9;
	struct VAR10 *VAR11;
	struct VAR4 *VAR12;
	struct VAR13 *VAR14;
	struct VAR15 *VAR16;

	VAR9 = 0;
	VAR14 = FUN2(VAR6 * sizeof(struct VAR13));
	if (!VAR14) {
		VAR9 = -VAR17;
		goto VAR18;
	}

	VAR11 = FUN3(VAR1, VAR19, VAR2);
	if (FUN4(VAR11)) {
		VAR9 = FUN5(VAR11);
		goto VAR20;
	}

	
	if (VAR3 != VAR11->VAR3) {
		VAR9 = -VAR21;
		goto VAR22;
	}

	VAR12 = FUN6(VAR11, VAR6, VAR5, &VAR9);
	if (!VAR12)
		goto VAR22;

	
	if ((VAR12->VAR23 > VAR12->VAR24) ||
	    (VAR5->VAR23 <= VAR12->VAR24))
		FUN7(VAR11->VAR25);
	if ((VAR12->VAR23 > VAR12->VAR24) &&
	    (VAR5->VAR23 <= VAR12->VAR24))
		FUN7(VAR11->VAR25);

	FUN8(VAR12, VAR14);

	
	FUN9(VAR16, VAR12->VAR26, VAR12->VAR27)
		FUN10(VAR16, VAR1);

	FUN11(VAR12);
	if (FUN12(VAR8, VAR14,
			 sizeof(struct VAR13) * VAR6) != 0) {
		
		FUN13("");
	}
	FUN14(VAR14);
	FUN15(VAR11);
	return VAR9;

 VAR22:
	FUN7(VAR11->VAR25);
	FUN15(VAR11);
 VAR20:
	FUN14(VAR14);
 VAR18:
	return VAR9;
}