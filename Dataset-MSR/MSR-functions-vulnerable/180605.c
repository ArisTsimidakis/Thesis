static int FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = FUN2(VAR2);
	struct VAR7 *VAR8 = VAR2->VAR9;
	struct VAR10 *VAR11;
	int VAR12;

	if (VAR8->VAR13.VAR14)
		return -VAR15;

	VAR11 = FUN3(sizeof (struct VAR10), VAR16);
	if (!VAR11)
		return -VAR17;
 
 	VAR11->VAR6 = VAR6;
 














 	VAR11->VAR18[0] = VAR2;
 	VAR11->VAR19[0] = &VAR8->VAR20[0].VAR13;
 


 	VAR11->VAR18[1] = FUN4(VAR6, 1);














 	VAR12 = FUN5(&VAR21, VAR11->VAR18[1], VAR11);
 	if (VAR12)
 		goto VAR22;




 	VAR8 = VAR11->VAR18[1]->VAR9;












 	VAR11->VAR19[1] = &VAR8->VAR20[0].VAR13;
 
 	VAR12 = FUN6(VAR11);
 	if (VAR12)

		goto VAR23;


 
 	VAR11->VAR24 = VAR24;
 	VAR11->VAR25 = VAR25;
 
 	VAR12 = FUN7(VAR11, VAR11->VAR24);
 	if (VAR12)

		goto VAR23;


 
 	FUN8(VAR6, VAR11->VAR26, sizeof(VAR11->VAR26));
 	FUN9(VAR11->VAR26, "", sizeof(VAR11->VAR26));

	FUN9(VAR11->VAR27, "", sizeof(VAR11->VAR27));
 
 	VAR12 = FUN10(&VAR6->VAR28.VAR29, &VAR30);
 	if (VAR12)

		goto VAR23;


 
 	VAR12 = FUN11(VAR11);
 	if (VAR12)

		goto VAR31;


 
 	FUN12(VAR2, VAR11);
 
 	VAR2->VAR32 = 1;
 
 	return 0;
 

 VAR31:


 	FUN13(&VAR6->VAR28.VAR29, &VAR30);

 VAR23:


 	FUN14(VAR11);


 	FUN15(&VAR21, VAR11->VAR18[1]);
  VAR22:
 	FUN16(VAR11);

	return VAR12;
}