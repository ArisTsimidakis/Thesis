int FUN1(struct VAR1 *VAR1, int VAR2, int VAR3, int VAR4,
			 struct socket **VAR5, int VAR6)
{
	int VAR7;
	struct socket *VAR8;
	const struct VAR9 *VAR10;

	
	if (VAR2 < 0 || VAR2 >= VAR11)
		return -VAR12;
	if (VAR3 < 0 || VAR3 >= VAR13)
		return -VAR14;

	
	if (VAR2 == VAR15 && VAR3 == VAR16) {
		static int VAR17;
		if (!VAR17) {
			VAR17 = 1;
			FUN2("",
				VAR18->VAR19);
		}
		VAR2 = VAR20;
	}

	VAR7 = FUN3(VAR2, VAR3, VAR4, VAR6);
	if (VAR7)
		return VAR7;

	
	VAR8 = FUN4();
	if (!VAR8) {
		FUN5("");
		return -VAR21;	
	}

	VAR8->VAR3 = VAR3;

#ifdef VAR22
	
	if (FUN6(VAR23[VAR2]) == NULL)
		FUN7("", VAR2);
#endif

	FUN8();
	VAR10 = FUN9(VAR23[VAR2]);
	VAR7 = -VAR12;
	if (!VAR10)
		goto VAR24;

	
	if (!FUN10(VAR10->VAR25))
		goto VAR24;

	
	FUN11();

	VAR7 = VAR10->FUN12(VAR1, VAR8, VAR4, VAR6);
	if (VAR7 < 0)
		goto VAR26;

	
	if (!FUN10(VAR8->VAR27->VAR25))
		goto VAR28;

	
	FUN13(VAR10->VAR25);
	VAR7 = FUN14(VAR8, VAR2, VAR3, VAR4, VAR6);
	if (VAR7)
		goto VAR29;
	*VAR5 = VAR8;

	return 0;

VAR28:
	VAR7 = -VAR12;
VAR26:
	VAR8->VAR27 = NULL;
	FUN13(VAR10->VAR25);
VAR29:
	FUN15(VAR8);
	return VAR7;

VAR24:
	FUN11();
	goto VAR29;
}