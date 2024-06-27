static int FUN1(struct VAR1 *VAR1, bool VAR2)
 {
 	struct VAR1 *VAR3 = FUN2(VAR1->VAR4);
 	struct VAR5 *VAR6 = VAR3->VAR7;

	struct VAR1 *VAR8 = FUN2(VAR1);


 	int VAR9;
 
 	FUN3(VAR6, VAR10);












 	VAR9 = -VAR11;

	if (VAR8->VAR4 == VAR3) {

		

		FUN4(VAR8);


 		if (VAR2)
 			VAR9 = FUN5(VAR6, VAR8);
 		else
 			VAR9 = FUN6(VAR6, VAR8, NULL);

		FUN7(VAR8);
 		FUN8(VAR1->VAR4);
 	}


 
 	
 	if (!VAR9)
 		FUN9(VAR1);


 	FUN10(VAR6);
 
 	return VAR9;
}