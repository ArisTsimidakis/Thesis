static int FUN1(char *VAR1, VAR2 *VAR3)
 {
 	VAR4 *VAR5;
 

	VAR3->VAR6 = 0;


 
 	if (!(VAR5 = FUN2(VAR1 ? VAR1 : ""))) {
 		return -1;
	}

	while (!FUN3(VAR5)) {
 		switch (FUN4(FUN5(VAR7,
 		  FUN6(VAR5)))->VAR8) {
 		case VAR9:

			VAR3->VAR6 = FUN7(FUN8(VAR5));


 			break;
 		default:
 			FUN9("",
			  FUN6(VAR5));
			break;
		}
	}

	FUN10(VAR5);

	return 0;
}