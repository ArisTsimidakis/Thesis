static int FUN1(struct VAR1 *VAR2,
				      unsigned char VAR3 **VAR4,
				      VAR5 *VAR6)

{
	struct VAR7 *VAR8 = VAR2->VAR9;
	int VAR10;
	size_t VAR11;
	bool VAR12;
	size_t VAR13 = VAR8->VAR14 & (VAR15 - 1);

	VAR10 = 0;
	VAR11 = FUN2(FUN3(VAR8), VAR15 - VAR13);
	VAR11 = FUN2(*VAR6, VAR11);
	if (VAR11) {
		VAR10 = FUN4(*VAR4, FUN5(VAR8, VAR13), VAR11);
		VAR11 -= VAR10;
		VAR12 = VAR11 == 1 && FUN6(VAR8, VAR13) == FUN7(VAR2);
		FUN8(VAR2, FUN5(VAR8, VAR13), VAR11,
				VAR8->VAR16);
		VAR8->VAR14 += VAR11;
		
		if (FUN9(VAR2) && VAR8->VAR16 && VAR12 && !FUN3(VAR8))
			VAR11 = 0;
		*VAR4 += VAR11;
		*VAR6 -= VAR11;
	}
	return VAR10;
}