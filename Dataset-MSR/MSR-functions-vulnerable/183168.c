FUN1(VAR1 *VAR2, struct VAR3 *VAR3,
 			 struct VAR4 *VAR5)
 {

	struct VAR6 *VAR7 = NULL;
 	int VAR8 = 0;

	struct VAR9 *VAR10 = FUN2(VAR3);
 

	VAR7 = FUN3(VAR10, VAR5->VAR11, VAR5->VAR12);
 	FUN4(VAR5, "");
 	VAR8 = FUN5(VAR2, VAR5);
 	if (VAR8)
 		goto VAR13;
 
 	FUN6(VAR5);
 	if (FUN7(VAR5)->VAR14 == FUN8(1)) {




 		FUN9(VAR5, "");

		if (VAR7)

			FUN10(VAR7);












 		FUN11(VAR5);
 		FUN12(VAR5);
 		FUN13(VAR2, VAR3, VAR5, 0, 1,
 				 VAR15 |
 				 VAR16);
 	} else {
 		FUN14(&FUN7(VAR5)->VAR14, -1);

		if (VAR7)

			FUN15(VAR7);
 		
		if (FUN16(VAR2))
			VAR8 = FUN17(VAR2, VAR3,
							      VAR5);
		FUN12(VAR5);
		if (!FUN16(VAR2))
			VAR8 = FUN17(VAR2, VAR3,
							      VAR5);
		if (FUN18(VAR3))
			FUN19(VAR2);
		FUN20(VAR3, FUN21(FUN22(VAR3->VAR17), 1));
		FUN9(VAR5, "",
			  FUN23(FUN7(VAR5)->VAR14));
	}
VAR13:
	FUN24(VAR3->VAR17, VAR8);
	return;
}