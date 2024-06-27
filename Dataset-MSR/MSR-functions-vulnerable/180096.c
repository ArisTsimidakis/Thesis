static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4 = FUN2(VAR2, struct VAR3,
 						   VAR2);
 	int VAR5 = VAR4->VAR6->VAR7 ? VAR4->VAR6->VAR7 :
 					 VAR4->VAR6->VAR8;


 
 	if (VAR4->read && VAR5 > 0) {
 		FUN3(VAR4->VAR9);
		VAR5 = FUN4(VAR4->VAR10, VAR5, &VAR4->VAR11);
		if (FUN5(&VAR4->VAR11))
			VAR5 = -VAR12;
		FUN6(VAR4->VAR9);
	}
 
 	VAR4->VAR13->FUN7(VAR4->VAR13, VAR5, VAR5);
 

	if (VAR4->VAR14->VAR15 &&

	    !(VAR4->VAR13->VAR16 & VAR17))


 		FUN8(VAR4->VAR14->VAR15, 1);
 
 	FUN9(VAR4->VAR18, VAR4->VAR6);
 

	VAR4->VAR13->private = NULL;
 	if (VAR4->read)
 		FUN10(VAR4->VAR19);
 	FUN10(VAR4->VAR10);
	FUN10(VAR4);
}