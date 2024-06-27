static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR3, struct VAR4 *VAR5)


 {
 	struct VAR6 *VAR7;
 	int VAR8;
 
 	

	if (VAR2->VAR9.open.VAR10 & VAR11) {


 		VAR8 = FUN2(VAR5->VAR12,
 				VAR5->VAR13->VAR14,
 				VAR2->VAR9.open.VAR10);
		if (VAR8 < 0)
			goto VAR15;
	}
	VAR7 = FUN3(VAR2, VAR3->VAR16, NULL);
	if (!FUN4(VAR7)) {
		struct VAR17 *VAR18;
		VAR18 = FUN5(VAR7);
		VAR18->VAR5 = VAR5;
		return 0;
 	}
 	VAR8 = FUN6(VAR7);
 VAR15:

	FUN7(VAR3, VAR5, VAR2->VAR9.open.VAR10);


 	return VAR8;
 }