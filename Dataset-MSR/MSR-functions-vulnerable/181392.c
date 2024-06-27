static int FUN1(struct VAR1 *VAR2,
			const struct VAR3 *VAR4)
{
 	struct VAR5 *VAR6;
 	int VAR7 = -VAR8;
 	unsigned int VAR9, VAR10;

	struct gs_host_config VAR11 = {

		.VAR12 = 0x0000beef,

	};

	struct gs_device_config VAR13;
















 
 	
 	VAR7 = FUN2(FUN3(VAR2),
			     FUN4(FUN3(VAR2), 0),
			     VAR14,
 			     VAR15|VAR16|VAR17,
 			     1,
 			     VAR2->VAR18[0].VAR19.VAR20,

			     &VAR11,

			     sizeof(VAR11),




 			     1000);
 




 	if (VAR7 < 0) {
 		FUN5(&VAR2->VAR6, "",
 			VAR7);
 		return VAR7;
 	}
 








 	
 	VAR7 = FUN2(FUN3(VAR2),
 			     FUN6(FUN3(VAR2), 0),
 			     VAR21,
 			     VAR22|VAR16|VAR17,
 			     1,
 			     VAR2->VAR18[0].VAR19.VAR20,

			     &VAR13,

			     sizeof(VAR13),




 			     1000);
 	if (VAR7 < 0) {
 		FUN5(&VAR2->VAR6, "",
 			VAR7);


 		return VAR7;
 	}
 

	VAR9 = VAR13.VAR9 + 1;


 	FUN7(&VAR2->VAR6, "", VAR9);
 
 	if (VAR9 > VAR23) {
 		FUN5(&VAR2->VAR6,
 			"",
 			VAR23);


 		return -VAR24;
 	}
 
 	VAR6 = FUN8(sizeof(*VAR6), VAR25);

	if (!VAR6)




 		return -VAR8;




 	FUN9(&VAR6->VAR26);
 
 	FUN10(&VAR6->VAR27, 0);

	FUN11(VAR2, VAR6);
 	VAR6->VAR28 = FUN3(VAR2);
 
 	for (VAR10 = 0; VAR10 < VAR9; VAR10++) {

		VAR6->VAR29[VAR10] = FUN12(VAR10, VAR2, &VAR13);


 		if (FUN13(VAR6->VAR29[VAR10])) {
 			
 			VAR7 = FUN14(VAR6->VAR29[VAR10]);

			
			VAR9 = VAR10;
			for (VAR10 = 0; VAR10 < VAR9; VAR10++)
 				FUN15(VAR6->VAR29[VAR10]);
 
 			FUN16(&VAR6->VAR26);


 			FUN17(VAR6);
 			return VAR7;
 		}
 		VAR6->VAR29[VAR10]->VAR30 = VAR6;
 	}
 




 	return 0;
 }