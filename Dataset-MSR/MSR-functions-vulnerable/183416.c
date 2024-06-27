static struct VAR1 *FUN1(struct VAR2 *VAR3,

					     int VAR4, int VAR5)




 {
 	struct VAR1 *VAR6 = VAR3->VAR7;
 	struct VAR8 *VAR9;
	int VAR10;

	VAR9 = FUN2(sizeof(struct VAR8), VAR11);
	if (!VAR9)
		goto VAR10;

	VAR9->VAR4 = VAR4;
	VAR9->VAR5 = VAR5;
	VAR9->VAR12 = VAR3->VAR13;
	VAR3->VAR13 = VAR9;
	VAR3->VAR14++;
 	VAR10 = FUN3(&VAR9->VAR15, VAR6);
 	if (VAR10)
 		goto VAR10;


 	if (VAR3->VAR14 > VAR16) {
 		FUN4(VAR3, "");
 		goto VAR10;
	}
	return &VAR9->VAR15;
VAR10:
	FUN5(VAR3->VAR7, true);
	VAR3->VAR7 = NULL;
	
	while (!FUN6(VAR3, NULL, NULL));
	return NULL;
}