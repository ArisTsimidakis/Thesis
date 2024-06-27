static noinline void FUN1(struct VAR1 *VAR2)
{
	while (!FUN2(VAR2)) {
		struct VAR3 *VAR3 =
			FUN3(VAR2->VAR4, struct VAR3, VAR5);
		FUN4(&VAR3->VAR5);

		FUN5("", VAR3->VAR6);
		FUN6(VAR3);

		FUN7(VAR3);

		
		if (FUN8(VAR7, &VAR3->VAR8)) {
			FUN9(&VAR3->VAR9->VAR10);
			VAR3->VAR9->VAR11--;
			VAR3->VAR9->VAR12 -= VAR3->VAR13;
			FUN10(&VAR3->VAR9->VAR10);
		}

		FUN11(&VAR3->VAR9->VAR14);
 		if (FUN8(VAR15, &VAR3->VAR8))
 			FUN11(&VAR3->VAR9->VAR16);
 

		FUN12(VAR3->VAR9);


 		
 		if (VAR3->VAR17->VAR18)
 			VAR3->VAR17->FUN13(VAR3);
 




 		FUN14(VAR3->VAR19);
 
 #ifdef VAR20
		VAR3->VAR21 = VAR22;
#endif
		FUN15(VAR23, VAR3);
	}
}