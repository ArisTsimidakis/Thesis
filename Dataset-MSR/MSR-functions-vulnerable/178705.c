static int FUN1(VAR1 *VAR2,
			      struct VAR3 *VAR3,
			      struct VAR4 *VAR5,
			      struct VAR6 *VAR7,
			      int VAR8,
			      int VAR9)
{
	ext4_lblk_t VAR10;
	struct VAR11 *VAR12;
	unsigned int VAR13, VAR14;
	int VAR15 = 0;
	int VAR16;
	int VAR17, VAR18;

	VAR14 = FUN2(VAR3);
	VAR12 = VAR5[VAR14].VAR19;
	VAR10 = FUN3(VAR12->VAR10);
	VAR13 = FUN4(VAR12);
 	VAR16 = FUN5(VAR12);
 
 	if (VAR7->VAR20 + VAR7->VAR21 < VAR10 + VAR13) {

		VAR17 = VAR8 & VAR22 ?

			      VAR22 : 0;


 		VAR18 = VAR9 | VAR23;
 		if (VAR16)
 			VAR17 |= VAR24 |
 				       VAR25;




 		VAR15 = FUN6(VAR2, VAR3, VAR5,
 				VAR7->VAR20 + VAR7->VAR21, VAR17, VAR18);
 		if (VAR15)
			goto VAR26;
	}

	FUN7(VAR5);
	VAR5 = FUN8(VAR3, VAR7->VAR20, VAR5);
	if (FUN9(VAR5))
 		return FUN10(VAR5);
 
 	if (VAR7->VAR20 >= VAR10) {

		VAR17 = VAR8 & VAR22 ?

			      VAR22 : 0;




 		if (VAR16)
 			VAR17 |= VAR24;
 		if (VAR8 & VAR25)
			VAR17 |= VAR25;
		VAR15 = FUN6(VAR2, VAR3, VAR5,
				VAR7->VAR20, VAR17, VAR9);
		if (VAR15)
			goto VAR26;
	}

	FUN11(VAR3, VAR5);
VAR26:
	return VAR15 ? VAR15 : VAR7->VAR21;
}