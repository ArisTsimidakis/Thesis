static int FUN1(struct VAR1 *VAR1)
 {
 	int VAR2;
	struct VAR3 *VAR4;
	struct VAR5 *VAR6;

	VAR2 = FUN2(&VAR1->VAR7);
 	VAR4 = FUN3(VAR1);
 
 	FUN4(VAR6, VAR4)

		FUN5(VAR1, VAR6->VAR8, VAR6->VAR9);


 
 	FUN6(&VAR1->VAR7, VAR2);
 
	return 0;
}