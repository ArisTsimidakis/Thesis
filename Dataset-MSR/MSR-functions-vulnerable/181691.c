static int FUN1(struct VAR1 *VAR1,
				   struct VAR2 *VAR3)
{
	struct VAR4 *VAR5 = NULL;
	struct VAR6 *VAR7;
	bool VAR8 = VAR3->VAR9 & VAR10;
	int VAR11;

	if (VAR3->VAR12 >= FUN2(VAR13))
		return -VAR14;

	VAR5 = VAR13[VAR3->VAR12];
	if (VAR5 == NULL)
		return -VAR14;

	if (VAR8)
		return 0;

	VAR7 = FUN3(sizeof(*VAR7), VAR15);
	if (!VAR7)
		return -VAR16;

	VAR7->VAR5 = VAR5;
	VAR7->VAR1 = VAR1;

	FUN4(&VAR1->VAR17);
	VAR11 = VAR5->FUN5(VAR7, VAR3->VAR12);
	if (VAR11 < 0) {
		FUN6(&VAR1->VAR17);
		FUN7(VAR7);
		return VAR11;
	}
	FUN8(&VAR7->VAR18, &VAR1->VAR19);
	FUN6(&VAR1->VAR17);

	if (VAR5->VAR20)
		VAR5->FUN9(VAR7);
 
 	VAR11 = FUN10(VAR5->VAR21, &VAR22, VAR7, VAR23 | VAR24);
 	if (VAR11 < 0) {

		VAR5->FUN11(VAR7);
 		FUN4(&VAR1->VAR17);
 		FUN12(&VAR7->VAR18);
 		FUN6(&VAR1->VAR17);


 		return VAR11;
 	}
 
	FUN13(VAR1);
	VAR3->VAR25 = VAR11;
	return 0;
}