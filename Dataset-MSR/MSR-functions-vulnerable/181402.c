int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4, int VAR5)
 {
 	struct VAR6 *VAR7;

	u8 VAR8;

	int VAR9,VAR10=0;






 

	VAR7 = FUN2(sizeof(*VAR7), VAR11);

	if (!VAR7)




 		return -VAR12;


 
 	

	VAR8 = 1;

	if ((VAR9 = FUN3(VAR2,VAR13[VAR5].VAR14,&VAR8,1)) != 1)




 		FUN4("");
 
 	while ((VAR9 = FUN5(VAR4, VAR7, &VAR10)) > 0) {
		FUN6("", VAR7->VAR15, VAR7->VAR16, VAR7->VAR17);
		VAR9 = FUN3(VAR2, VAR7->VAR15, VAR7->VAR18, VAR7->VAR16);

		if (VAR9 != VAR7->VAR16) {
			FUN4("",
				VAR9, VAR7->VAR16);
			VAR9 = -VAR19;
			break;
		}
 	}
 	if (VAR9 < 0) {
 		FUN4("",VAR10,VAR9);

		FUN7(VAR7);


 		return VAR9;
 	}
 
 	if (VAR9 == 0) {
 		

		VAR8 = 0;

		if (VAR9 || FUN3(VAR2,VAR13[VAR5].VAR14,&VAR8,1) != 1) {




 			FUN4("");
 			VAR9 = -VAR19;
 		}
 	} else
 		VAR9 = -VAR20;
 

	FUN7(VAR7);


 
 	return VAR9;
 }