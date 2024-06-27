static int FUN1(struct VAR1 *VAR1, struct VAR2 *VAR2)
{
	struct VAR3 *VAR3 = VAR2->VAR4->VAR5;
	struct VAR6 *VAR7 = NULL;
	unsigned char *VAR8;
	int VAR9;
	unsigned char *VAR10 = FUN2(VAR2);
	struct VAR11 *VAR12;
	uint32_t VAR13;

	
	if (VAR3->VAR14 > VAR3->VAR15->VAR16) {
		VAR9 = -VAR17;
		goto VAR18;
	}

	VAR12 = FUN3(VAR3);
	VAR13 = FUN4(VAR3, 0);

	FUN5(&VAR12->VAR19);
	if (VAR12->VAR20 == VAR21) {
		VAR8 = VAR12->VAR22.VAR23 + VAR12->VAR24;
	} else {
		VAR7 = FUN6(VAR3->VAR15, VAR13);

		if (!VAR7) {
			VAR9 = -VAR25;
			goto VAR26;
		}

 		VAR8 = VAR7->VAR27;
 	}
 

	FUN7(VAR3->VAR15, VAR8, VAR3->VAR14, VAR10);


 	FUN8(VAR7);




 
 	FUN9(&VAR12->VAR19);
 	FUN10(VAR2);
	FUN11(VAR2);
	FUN12(VAR2);
	return 0;

VAR26:
	FUN9(&VAR12->VAR19);
	FUN13(VAR2);
VAR18:
	FUN11(VAR2);
	FUN12(VAR2);
	return VAR9;
}