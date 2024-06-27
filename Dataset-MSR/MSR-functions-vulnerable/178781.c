static void FUN1(struct VAR1 *VAR1)
{
	
 	struct VAR2 *VAR3 = FUN2(VAR1);
 	int VAR4 = FUN3(VAR1);

	struct VAR5 *VAR6;




 

	VAR6 = (struct VAR5 *) FUN4(VAR1);
 	FUN5(VAR1, 0);
 	VAR1->VAR6 = NULL;
 	FUN6(FUN7(VAR1));
	FUN6(FUN8(VAR1));
	FUN9(&VAR1->VAR7);

	FUN10(&VAR8);
	if (VAR3->VAR9[VAR4] && FUN11(VAR3) < VAR10) {
		FUN12(VAR3, VAR1);
		VAR3->VAR11--;
		VAR3->VAR9[VAR4]--;
	} else {
 		FUN13(VAR3, VAR1);
 	}
 	FUN14(&VAR8);

	if (VAR6)

		FUN15(VAR6, 1);


 }