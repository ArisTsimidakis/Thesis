static int FUN1(unsigned long VAR1, struct VAR2 *VAR3)
{
	struct VAR4 *VAR5, *VAR6;
	int VAR7;

	VAR3->VAR8 = VAR3->VAR9 = 0;
	VAR3->VAR10 = VAR3->VAR11 = 0;
#ifdef VAR12
	VAR3->VAR13 = VAR3->VAR10 + VAR3->VAR11;
#endif

	VAR3->VAR5 = NULL;
	VAR3->VAR14 = NULL;

	
	VAR6 = VAR15->VAR5;
	if (!VAR6)
		return 0;

	
	FUN2(VAR3);

	if (VAR1 & VAR16) {
		FUN3(VAR6);
		VAR5 = VAR6;
		goto VAR17;
	}

	VAR7 = -VAR18;
	VAR5 = FUN4(VAR3);
	if (!VAR5)
		goto VAR19;

VAR17:
	VAR3->VAR5 = VAR5;
	VAR3->VAR14 = VAR5;
	return 0;

VAR19:
	return VAR7;
}