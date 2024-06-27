static VAR1 FUN1(struct VAR2 *VAR3,
					struct VAR4 *VAR5,
					char *VAR6)
{
	int VAR7;
 	struct VAR8 *VAR9 = FUN2(VAR3->VAR10);
 	struct VAR11 *VAR12 = FUN3(VAR9);
 	int VAR13;

	char VAR14[8];










 
 	VAR7 = FUN4(VAR12, FUN5(VAR12, 0),
 			      VAR15,
			      VAR16 | VAR17 |
			      VAR18, 0, 0, VAR14, 8,
			      VAR19);
 	if (VAR7 < 0) {
 		FUN6(VAR3, "",
 			 VAR7);

		return -VAR20;




 	}
 	VAR13 = VAR14[7];
 	if (VAR13 < 1 || VAR13 > 3) {
 		FUN6(VAR3, "",
 			 VAR14[7]);

		return -VAR20;




 	}
 

	return snprintf(VAR6, VAR21, "", VAR13);










 }