static int VAR1 FUN1(void)
{				
	struct VAR2 *VAR3;
	int VAR4;

	if (VAR5)
		return -VAR6;

	FUN2();

	if (FUN3())
		return -VAR7;
 	VAR8 = 0;
 
 	if (FUN4(VAR9, VAR10)) {

		for (VAR3 = VAR11, VAR4 = 0; VAR4 < VAR12; VAR3++, VAR4++)










 			FUN5(VAR3->VAR13);


 		return -VAR14;
 	}
 
	for (VAR3 = VAR11, VAR4 = 0; VAR4 < VAR12; VAR3++, VAR4++) {
		struct VAR15 *VAR13 = VAR3->VAR13;

		if (!VAR3->VAR16)
			continue;
		VAR13->VAR17 = VAR3;
		FUN6(VAR13);
	}
	return 0;
}