static void FUN1(struct VAR1 *VAR2)
{
	struct VAR3 *VAR4;
	struct VAR5 *VAR6 = VAR2->VAR6;
	struct VAR7 *VAR8 = VAR2->VAR9;
	struct VAR10 *VAR11 = FUN2(VAR8->VAR12.VAR13->VAR14);

	if (VAR11->VAR15->VAR16)
		VAR11->VAR15->FUN3(VAR2);

	if (VAR6->VAR17)
		VAR6->VAR17 = 0;
	else {
		
		return;
	}

	
	FUN4(VAR4, &VAR6->VAR18, VAR19) {
		int VAR20, VAR21;

 		VAR21 = FUN5(VAR4);
 		if (VAR21) {
 			FUN6(VAR6, VAR4);


 			continue;
 		}
 
		if (VAR4->VAR22 == VAR23 || VAR4->VAR22 == VAR24) {
			VAR4->VAR25.VAR26 = -1;
			for (VAR20 = 0; VAR20 < VAR4->VAR25.VAR27; VAR20++) {
				struct VAR28 *VAR2 = &VAR4->VAR25.VAR28[VAR20];

				VAR2->VAR29 = -1;
			}
		}
	}

	FUN7(VAR6, VAR30);
}