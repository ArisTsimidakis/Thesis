FUN1(struct VAR1 *VAR2)
{
	int VAR3 = 0;
 	struct VAR4 *VAR5 = VAR2->VAR5;
 
 	FUN2(&VAR5->VAR6->VAR7);

	if (VAR5->VAR6->VAR8 && VAR5->VAR6->VAR9->VAR10) {


 		VAR3 = VAR5->VAR6->VAR9->FUN3(VAR5);

		FUN4(VAR5->VAR11.VAR12);

		VAR5->VAR11.VAR12 = NULL;
 		if (VAR3) {
 			FUN5(VAR13,
 				"");
 			FUN6(&VAR5->VAR6->VAR7);

			goto VAR14;


 		}
 	}
 	if (!VAR5->VAR6->VAR15) {
		VAR5->VAR6->VAR16 = 0x2;
		VAR5->VAR6->VAR15 = true;
	}
	FUN6(&VAR5->VAR6->VAR7);

	FUN5(VAR13, "");
	FUN7(&VAR17);
 	VAR5->VAR18 = VAR19;
 	VAR5->VAR20 = false;
 	FUN8(&VAR17);



VAR14:

	if (!VAR5->VAR6->VAR8) {

		FUN4(VAR5->VAR11.VAR12);

		VAR5->VAR11.VAR12 = NULL;

	}
 	return VAR3;
 }