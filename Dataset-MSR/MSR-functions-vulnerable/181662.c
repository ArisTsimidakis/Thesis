static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
	struct VAR6 *VAR7 = FUN2(VAR2);
	struct VAR8 *VAR9 = FUN3(VAR2);
	struct VAR10 *VAR11 = (struct VAR10 *) VAR4;
	struct VAR12 *VAR12 = FUN4(VAR2);
	__be32 VAR13 = 0;
 	int VAR14;
 	int VAR15;
 

	if (!FUN5(VAR2, VAR16))

		return -VAR17;
 	if (VAR11->VAR18 != VAR19)
 		return -VAR17;
 	if (VAR5 < sizeof(*VAR11))
		return -VAR17;

	VAR14 = FUN6(&VAR11->VAR20);

	
	if (VAR14 == VAR21)
		return -VAR22;

	
	if (VAR14 & VAR23)
		return -VAR22;

	VAR15 = -VAR24;
	FUN7(&VAR25);
	if (FUN8(VAR12, &VAR11->VAR20,
				   VAR2->VAR26, VAR11->VAR27))
		goto VAR28;
	FUN9(&VAR25);

 	FUN10(VAR2);
 
 	VAR15 = -VAR17;






 	if (VAR2->VAR29 != VAR30)
 		goto VAR31;
 
	
	FUN11();
	if (VAR14 != VAR32) {
		struct VAR33 *VAR34 = NULL;

		if (VAR14 & VAR35) {
			if (VAR5 >= sizeof(struct VAR36) &&
			    VAR11->VAR37) {
				
				VAR2->VAR26 = VAR11->VAR37;
			}

			
			if (!VAR2->VAR26)
				goto VAR38;

			VAR15 = -VAR39;
			VAR34 = FUN12(FUN4(VAR2),
						   VAR2->VAR26);
			if (!VAR34)
				goto VAR38;
		}

		
		VAR13 = VAR40;
		VAR15 = -VAR22;
		if (!FUN13(FUN4(VAR2), &VAR11->VAR20, VAR34, 0))
			goto VAR38;
	}
	FUN14();

	VAR7->VAR41 = VAR7->VAR42 = VAR13;
	VAR2->VAR43 = VAR11->VAR20;
	VAR9->VAR44 = VAR11->VAR20;

	FUN15(VAR2)->VAR45 = VAR11->VAR27;

	FUN16(&VAR25);
	FUN17(VAR2, &VAR46);
	FUN18(VAR2);
	FUN19(&VAR25);

	FUN20(VAR2, VAR16);
	FUN21(VAR2);
	return 0;

VAR38:
	FUN14();
VAR31:
	FUN21(VAR2);
	return VAR15;

VAR28:
	FUN9(&VAR25);
	return VAR15;
}