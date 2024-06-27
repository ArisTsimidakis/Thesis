static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
	struct VAR5 *VAR6 = &VAR4->VAR7[VAR4->VAR8];
	struct VAR9 *VAR10 =
		FUN2(VAR6, struct VAR9, VAR11.VAR12);
	struct VAR9 *VAR13 = VAR4->VAR13;

	
	if (VAR4->VAR8 != VAR4->VAR14 || FUN3(VAR6))
		return false;

	
	if (!FUN3(&VAR4->VAR15) &&
	    FUN4(VAR16,
			VAR4->VAR17 + VAR18))
		return false;

	
	VAR4->VAR8 ^= 1;

	FUN5(VAR2, VAR13);
 
 	
 	if (VAR2->VAR19) {




 		VAR13->VAR20 = VAR10->VAR20;
 		VAR13->VAR21 = VAR10->VAR21;








 	}
 
 	VAR13->VAR22 = VAR23;
	VAR13->VAR24 = VAR25 | VAR26;
	VAR13->VAR27 = VAR10->VAR27;
	VAR13->VAR28 = VAR29;

	return FUN6(VAR13, false);
}