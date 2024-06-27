static int FUN1(struct VAR1 *VAR2,
 			      struct VAR3 *VAR4)
 {

	struct VAR5 *VAR6 = &VAR4->VAR7;
 	struct VAR8 *VAR9;

	struct VAR10 *VAR11;

	struct ib_send_wr VAR12;
 	int VAR13;
 

	VAR11 = FUN2(VAR2);

	VAR13 = FUN3(VAR2, VAR6, VAR11, false);

	if (VAR13)


















 		goto VAR14;
 
 	VAR13 = FUN4(VAR2, VAR15);
 	if (VAR13)
 		goto VAR14;
 

	VAR9 = FUN5(VAR2);

	VAR9->VAR16[0] = FUN6(VAR4->VAR17);

	VAR9->VAR18 = 1;



	VAR9->VAR19 = VAR20;

	VAR9->VAR21[0].VAR22 = VAR2->VAR23->VAR24;

	VAR9->VAR21[0].VAR25 = VAR6->VAR26;

	VAR9->VAR21[0].VAR27 =

	    FUN7(VAR2->VAR28->VAR29, VAR9->VAR16[0], 0,

			    VAR6->VAR26, VAR20);

	if (FUN8(VAR2->VAR28->VAR29, VAR9->VAR21[0].VAR27)) {

		VAR13 = -VAR30;

		goto VAR31;

	}

	FUN9(VAR2, VAR9);



	memset(&VAR12, 0, sizeof(VAR12));

	VAR9->VAR32.VAR33 = VAR34;

	VAR12.VAR35 = &VAR9->VAR32;

	VAR12.VAR36 = VAR9->VAR21;

	VAR12.VAR37 = 1;

	VAR12.VAR38 = VAR39;

	VAR12.VAR40 = VAR41;



	VAR13 = FUN10(VAR2, &VAR12);

	if (VAR13) {

		VAR13 = -VAR30;




 		goto VAR31;

	}
 
 VAR14:

	FUN11(VAR2, VAR11);
 	FUN12("", VAR42, VAR13);
 	return VAR13;
 
 VAR31:
 	FUN13(VAR9);
 	FUN14(VAR9, 1);


 	goto VAR14;
 }