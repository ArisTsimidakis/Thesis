static int FUN1(struct VAR1 **VAR2,
				       struct VAR1 **VAR3,
 				       struct VAR4 *VAR5)
 {
 	struct VAR1 *VAR6, *VAR7, *VAR8;


 
 	if (!VAR5)
 		return 0;
 
 	VAR8 = FUN2(VAR5);




 

	VAR6 = FUN3(VAR8, FUN4(VAR8), VAR9);


 	if (!VAR6)
 		return -VAR10;
 

	VAR7 = FUN3(VAR8, FUN4(VAR8), VAR9);


 	if (!VAR7) {
 		FUN5(VAR6);
 		return -VAR10;
 	}
 






 	*VAR2 = VAR6;
 	*VAR3 = VAR7;
 
	return 0;
}