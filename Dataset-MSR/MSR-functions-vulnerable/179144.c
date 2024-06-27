static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	int VAR5;
	int VAR6;
	struct VAR7 *VAR8;
	int VAR9;
	key_t VAR10 = VAR4->VAR10;
	int VAR11 = VAR4->VAR12.VAR11;
	int VAR13 = VAR4->VAR14;
	int VAR15;

	if (!VAR11)
		return -VAR16;
	if (VAR2->VAR17 + VAR11 > VAR2->VAR18)
		return -VAR19;

	VAR9 = sizeof (*VAR8) + VAR11 * sizeof (struct VAR20);
	VAR8 = FUN2(VAR9);
	if (!VAR8) {
		return -VAR21;
	}
	memset (VAR8, 0, VAR9);

	VAR8->VAR22.VAR23 = (VAR13 & VAR24);
	VAR8->VAR22.VAR10 = VAR10;

	VAR8->VAR22.VAR25 = NULL;
	VAR6 = FUN3(VAR8);
	if (VAR6) {
		FUN4(VAR8);
		return VAR6;
	}

	VAR5 = FUN5(&FUN6(VAR2), &VAR8->VAR22, VAR2->VAR26);
	if (VAR5 < 0) {
		FUN7(VAR8);
		FUN4(VAR8);
		return VAR5;
	}
	VAR2->VAR17 += VAR11;
 
 	VAR8->VAR27 = (struct VAR20 *) &VAR8[1];
 

	for (VAR15 = 0; VAR15 < VAR11; VAR15++)


 		FUN8(&VAR8->VAR27[VAR15].VAR28);




 
 	VAR8->VAR29 = 0;
 	FUN8(&VAR8->VAR28);
 	FUN8(&VAR8->VAR30);
 	VAR8->VAR31 = VAR11;
 	VAR8->VAR32 = FUN9();

	FUN10(VAR8);


 
 	return VAR8->VAR22.VAR5;
 }