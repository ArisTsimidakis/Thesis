int FUN1(struct VAR1 *VAR2)
 {
 	struct VAR3 *VAR4 = VAR2->VAR4;
 	struct VAR5 *VAR6 = FUN2(VAR4);

	struct VAR7 *VAR8 = VAR6->VAR8;


 	struct VAR9 *VAR10;
 	struct VAR11 *VAR12;
 	int VAR13;

	
 	FUN3();


 	VAR10 = FUN4(VAR2);
 	if (VAR10 != NULL)
 		goto VAR14;

	
	VAR10 = (struct VAR9 *)FUN5(VAR4, 0);
	if (VAR10 == NULL) {
		__be32 VAR15;
 
 		
 		VAR15 = VAR6->VAR16;

		if(VAR8 && VAR8->VAR17)

			VAR15 = VAR8->VAR18;




 
 		
		VAR10 = FUN6(FUN7(VAR4), VAR4,
					   VAR15, VAR6->VAR19,
					   VAR6->VAR20,
					   VAR6->VAR21,
					   VAR4->VAR22,
					   FUN8(VAR4),
					   VAR4->VAR23);
		if (FUN9(VAR10))
			goto VAR24;
		FUN10(VAR4, &VAR10->VAR25);
	}
 	FUN11(VAR2, &VAR10->VAR25);
 
 VAR14:

	if (VAR8 && VAR8->VAR26 && VAR10->VAR27 != VAR10->VAR28)


 		goto VAR24;
 
 	

	FUN12(VAR2, sizeof(struct VAR11) + (VAR8 ? VAR8->VAR29 : 0));


 	FUN13(VAR2);
 	VAR12 = FUN14(VAR2);
 	*((VAR30 *)VAR12) = FUN15((4 << 12) | (5 << 8) | (VAR6->VAR31 & 0xff));
	if (FUN16(VAR4, &VAR10->VAR25) && !VAR2->VAR32)
		VAR12->VAR33 = FUN15(VAR34);
	else
		VAR12->VAR33 = 0;
	VAR12->VAR35      = FUN17(VAR6, &VAR10->VAR25);
	VAR12->VAR36 = VAR4->VAR22;
	VAR12->VAR37    = VAR10->VAR38;
 	VAR12->VAR15    = VAR10->VAR27;
 	
 

	if (VAR8 && VAR8->VAR29) {

		VAR12->VAR39 += VAR8->VAR29 >> 2;

		FUN18(VAR2, VAR8, VAR6->VAR16, VAR10, 0);






 	}
 
 	FUN19(VAR12, &VAR10->VAR25, VAR4,
			     (FUN20(VAR2)->VAR40 ?: 1) - 1);

	VAR2->VAR41 = VAR4->VAR42;
	VAR2->VAR43 = VAR4->VAR44;

	VAR13 = FUN21(VAR2);
	FUN22();
	return VAR13;

VAR24:
	FUN22();
	FUN23(FUN7(VAR4), VAR45);
	FUN24(VAR2);
	return -VAR46;
}