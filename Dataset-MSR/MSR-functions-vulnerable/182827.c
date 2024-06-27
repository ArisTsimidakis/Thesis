static int FUN1(struct VAR1 *VAR2)
 {

	VAR3 *VAR4, *VAR5, VAR6, VAR7;

	VAR3 *VAR8, VAR9;

	VAR3 *VAR10, VAR11;

	VAR3 *VAR12, VAR13;








 	__be16 VAR14 = FUN2(VAR2->VAR15);
 	u8 VAR16 = 0;
 	int VAR17 = 0;
 
 	VAR6 = VAR18;
 	VAR5 = FUN3(VAR19, &VAR6,
 					 1, &VAR7);








 	VAR16 += VAR7;
 
 	VAR8 = FUN3(VAR20, &VAR2->VAR21, 1, &VAR9);








 	VAR16 += VAR9;
 
 	FUN4("", VAR2->VAR15);
 	VAR10 = FUN3(VAR22, (VAR3 *)&VAR14, 2, &VAR11);








 	VAR16 += VAR11;
 
 	VAR12 = FUN3(VAR23, (VAR3 *)&VAR2->VAR24, 0,
 				      &VAR13);








 	VAR16 += VAR13;
 
 	VAR16 += FUN5(VAR25);

	if (VAR16 > VAR26) {
		VAR17 = -VAR27;
		goto VAR28;
	}

	VAR4 = VAR2->VAR29;

	memcpy(VAR4, VAR25, FUN5(VAR25));
	VAR4 += FUN5(VAR25);

	memcpy(VAR4, VAR5, VAR7);
	VAR4 += VAR7;

	memcpy(VAR4, VAR8, VAR9);
	VAR4 += VAR9;

	memcpy(VAR4, VAR10, VAR11);
	VAR4 += VAR11;

	memcpy(VAR4, VAR12, VAR13);
	VAR4 += VAR13;

	VAR2->VAR16 = VAR16;

VAR28:
	FUN6(VAR5);
	FUN6(VAR8);
	FUN6(VAR10);
	FUN6(VAR12);

	return VAR17;
}