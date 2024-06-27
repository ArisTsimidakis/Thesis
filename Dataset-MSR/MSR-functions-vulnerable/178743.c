static struct VAR1 *FUN1(struct VAR2 *VAR3,

					      struct VAR4 *VAR5)




 {

	struct VAR1 *VAR6 = &(FUN2(VAR5)->VAR6);

	struct VAR1 *VAR7 = NULL;




 
 	if (VAR6 && VAR6->VAR8) {

		int VAR9 = FUN3(VAR6);




 		VAR7 = FUN4(VAR9, VAR10);
 		if (VAR7) {

			if (FUN5(VAR7, VAR5)) {


 				FUN6(VAR7);
 				VAR7 = NULL;
 			}
		}
	}
	return VAR7;
}