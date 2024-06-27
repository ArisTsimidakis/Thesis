void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;

	VAR4 = VAR2->VAR5.VAR6;
	if (!VAR4)
		return;
	VAR2->VAR5.VAR6 = NULL;

	if (!FUN2(&VAR4->VAR7))
		return;

	for (;;) {
 		struct VAR8 *VAR9;
 		struct VAR10 *VAR11;
 		struct list_head VAR12;

		int VAR13;

		int VAR14;


 
 		FUN3();
 		VAR11 = FUN4(VAR4->VAR15.VAR16,
				    struct VAR10, VAR15);
		if (&VAR11->VAR15 == &VAR4->VAR15)
 			VAR13 = -1;
 		 else
 			VAR13 = VAR11->VAR13;

		FUN5();
 

		if (VAR13 == -1)




 			break;


 

		VAR9 = FUN6(VAR2->VAR17->VAR18, VAR11->VAR13);




 		

		if (FUN7(VAR9))




 			continue;


 


 		VAR11 = FUN8(VAR4, VAR13);
 		if (VAR11 == NULL) {
 			

			FUN9(VAR9);


 			continue;
 		}
 
		
		FUN10(&VAR9->VAR19.VAR20);
		FUN11(&VAR11->VAR21);

		FUN12(&VAR4->VAR20);
		FUN13(&VAR11->VAR15);
		FUN14(&VAR4->VAR20);

		
		for (VAR14 = 0; VAR14 < VAR9->VAR22; VAR14++) {
			struct VAR23 * VAR24 = &VAR9->VAR25[VAR14];
			if (VAR11->VAR26[VAR14]) {
				VAR24->VAR27 += VAR11->VAR26[VAR14];
				
				if (VAR24->VAR27 < 0)
					VAR24->VAR27 = 0;
				if (VAR24->VAR27 > VAR28)
					VAR24->VAR27 = VAR28;
				VAR24->VAR29 = FUN15(VAR30);
			}
		}
 		
 		FUN16(&VAR12);
 		FUN17(VAR9, NULL, 0, 1, &VAR12);

		FUN9(VAR9);


 		FUN18(&VAR12);
 
 		FUN19(VAR11, VAR31);
	}
	FUN20(VAR4);
}