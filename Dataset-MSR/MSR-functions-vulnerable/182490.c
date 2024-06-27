int FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4, *VAR5;
	bool VAR6;
	int VAR7;

	VAR4 = FUN2(&VAR8, VAR2, VAR9);
	if (!VAR4)
		return -VAR10;

	VAR6 = !FUN3(VAR9);

	
	FUN4();
	FUN5(VAR2->VAR11);
	VAR5 = FUN6(&VAR8, VAR2, VAR4);
	FUN7(VAR2->VAR11);
	FUN8();

 	if (VAR6)
 		FUN9();
 

	if (FUN10(VAR5)) {

		FUN11(VAR4);


 		return FUN12(VAR5);

	}
 
 	VAR2->VAR12 = VAR5;
 	VAR2->VAR13.VAR5 = VAR5;

	VAR7 = FUN13(VAR2);
	if (VAR7) {
		FUN5(VAR2->VAR11);
		FUN14(VAR2);
		FUN7(VAR2->VAR11);
	}
	return VAR7;
}