int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,






















 			     struct VAR5 *VAR6)
 {
 	struct VAR7 *VAR8 = FUN2(VAR2);
	struct VAR9 *VAR10, *VAR11 = &VAR6->VAR12[0];
	struct VAR13 *VAR14;
	unsigned long VAR15;
	u32 VAR16;
	size_t VAR17;
	__be32 VAR18;
	VAR19 *VAR20;
	int VAR21;
 
 	VAR20 = (VAR19 *)VAR11->VAR22;
 	VAR17 = VAR11->VAR23;

	VAR18 = VAR4->VAR24;


 
 #ifdef VAR25
 	FUN3("",
 		VAR26, FUN4(VAR18), VAR17);
 	FUN3("",

		VAR26, (int)VAR27, VAR4);


 	FUN3("",
 		VAR26, (int)VAR17, VAR20);
 #endif

	VAR21 = -VAR28;
	if (VAR11->VAR23 < 24)
		goto VAR29;

	FUN5(&VAR2->VAR30);
	VAR14 = FUN6(VAR2, VAR18);
	if (!VAR14)
		goto VAR31;

	VAR10 = &VAR14->VAR32.VAR12[0];
	memcpy(&VAR14->VAR32, &VAR14->VAR33, sizeof(struct VAR5));
	if (VAR10->VAR23 < VAR17)
 		goto VAR34;
 	memcpy(VAR10->VAR22, VAR20, VAR17);
 

	VAR16 = FUN4(VAR4->VAR35);


 	if (VAR16 == 0)
 		VAR16 = 1;	
 	else if (VAR16 > VAR8->VAR36.VAR37)
		VAR16 = VAR8->VAR36.VAR37;

	VAR15 = VAR2->VAR15;
	VAR2->VAR15 = VAR16 << VAR38;
	if (VAR2->VAR15 > VAR15)
		FUN7(VAR14->VAR39);

	VAR21 = 0;
	FUN8(VAR14->VAR39, VAR6->VAR17);
	VAR6->VAR17 = 0;

VAR34:
	FUN9(&VAR2->VAR30);
VAR40:
	return VAR21;

VAR29:
	FUN10("",
		VAR2, VAR11->VAR23);
	goto VAR40;

VAR31:
	FUN10("",
		VAR2, FUN4(VAR18));

	goto VAR34;
}