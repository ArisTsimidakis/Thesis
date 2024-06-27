static int FUN1(struct VAR1 *VAR2,
				struct VAR3 *VAR4)
{
	int VAR5 = 0;
 	int VAR6 = VAR7;
 	struct VAR8 *VAR9 = VAR2->VAR10.VAR9;
 	unsigned long VAR11;








 














 	VAR2->VAR12++;
 
 	FUN2(VAR2);
	VAR11 = (VAR2->VAR10.VAR13 &&
		 (VAR4->VAR14.VAR15.VAR16 & VAR17)) ?
		 VAR18 : 0;

 	VAR5 = FUN3(VAR9, VAR4->VAR14.VAR15.VAR19,
 				   VAR4->VAR14.VAR15.VAR20,
 				   VAR21, VAR11);




 	if (VAR5 == -VAR22) {
 		FUN4(VAR23 "");
 		VAR6 = VAR24;
	} else if (VAR5)
		VAR6 = VAR25;

	FUN5(VAR2, VAR4->VAR14.VAR15.VAR26, VAR4->VAR27, VAR6);
	FUN6(VAR2);
	return VAR5;
}