static int VAR1 FUN1(void)
{
	struct VAR2 *VAR3;
	int VAR4;

	if (VAR5)
		return -VAR6;

	FUN2();

	if (FUN3())
		return -VAR7;

	
 	FUN4();
 
 	if (FUN5(VAR8, VAR9)) {

		for (VAR4 = 0, VAR3 = VAR10; VAR4 < VAR11; VAR4++, VAR3++)












 			FUN6(VAR3->VAR12);


 		return -VAR13;
 	}
 
	for (VAR4 = 0, VAR3 = VAR10; VAR4 < VAR11; VAR4++, VAR3++) {
		if (VAR3->VAR14) {
			FUN7(&VAR3->VAR15);
			VAR3->VAR12->VAR16 = VAR3;
			FUN8(VAR3->VAR12);
		}
	}

	return 0;
}