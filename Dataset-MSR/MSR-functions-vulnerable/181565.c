static enum VAR1 FUN1(struct VAR2 *VAR3)
{
	int VAR4;
	struct VAR5 *VAR6 = FUN2(VAR3, struct VAR5, VAR7);
	struct VAR8 *VAR9 = VAR6->VAR7.VAR9->VAR10;
 	struct VAR11 *VAR12 = FUN3(VAR9->VAR10);
 	struct VAR13 *VAR14 = FUN4(VAR12);
 	int VAR15;

	char VAR16[8];










 
 	VAR4 = FUN5(VAR14, FUN6(VAR14, 0),
 			      VAR17,
			      VAR18 | VAR19 |
			      VAR20, 0, 0, VAR16, 8,
			      VAR21);
 	if (VAR4 < 0) {
 		FUN7(VAR9, "",
 			 VAR4);

		return -VAR22;




 	}
 	VAR15 = VAR16[4];
 	if (VAR15 < 0 || VAR15 > 3) {
 		FUN7(VAR9,
 			 "",
 			 VAR16[4]);

		return -VAR22;




 	}

	return VAR15;










 }